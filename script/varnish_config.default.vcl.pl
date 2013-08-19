# This is a basic VCL configuration file for varnish.  See the vcl(7)
# man page for details on VCL syntax and semantics.
# 
# Default backend definition.  Set this to point to your content
# server.
# 
backend default {
    .host = "10.148.2.170";
    .port = "8080";
}
# 
# Below is a commented-out copy of the default VCL logic.  If you
# redefine any of these subroutines, the built-in logic will be
# appended to your code.
 sub vcl_recv {


	
# Allow the backend to serve up stale content if it is responding slowly.
  set req.grace = 6h;

# Use anonymous, cached pages if all backends are down.
  if (!req.backend.healthy) {	
	unset req.http.Cookie;
  }

# Always cache the following file types for all users.
  if (req.url ~ "(?i)\.(png|gif|jpeg|jpg|ico|swf|css|js|html|htm)(\?[a-z0-9]+)?$") {
    unset req.http.Cookie;
  }

# Remove all cookies that Drupal doesn't need to know about. ANY remaining
# cookie will cause the request to pass-through to Apache. For the most part
# we always set the NO_CACHE cookie after any POST request, disabling the
# Varnish cache temporarily. The session cookie allows all authenticated users
# to pass through as long as they're logged in.

  if (req.http.Cookie) {
	set req.http.Cookie = ";" + req.http.Cookie;
	set req.http.Cookie = regsuball(req.http.Cookie, "; +", ";");
	set req.http.Cookie = regsuball(req.http.Cookie,";(SESS[a-z0-9]+|NO_CACHE)=", "; \1=");
	set req.http.Cookie = regsuball(req.http.Cookie, ";[^ ][^;]*", "");
	set req.http.Cookie = regsuball(req.http.Cookie, "^[; ]+|[; ]+$", "");
	if (req.http.Cookie == "") {

	# If there are no remaining cookies, remove the cookie header. If there
  	# aren't any cookie headers, Varnish's default behavior will be to cache
  	# the page.
  			unset req.http.Cookie;
		}
	else {
	# If there are any cookies left (a session or NO_CACHE cookie), do not
  	# cache the page. Pass it on to Apache directly.
  		return (pass);
		}
  }

# Handle compression correctly. Different browsers send different
# "Accept-Encoding" headers, even though they mostly all support the same
# compression mechanisms. By consolidating these compression headers into
# a consistent format, we can reduce the size of the cache and get more hits.
# @see: http:// varnish.projects.linpro.no/wiki/FAQ/Compression

if (req.http.Accept-Encoding) {
  if (req.http.Accept-Encoding ~ "gzip") {
# If the browser supports it, we'll use gzip.
	set req.http.Accept-Encoding = "gzip";
  }
  else if (req.http.Accept-Encoding ~ "deflate") {
	# Next, try deflate if it is supported.
	set req.http.Accept-Encoding = "deflate";
  }
  else {
	# Unknown algorithm. Remove it and send unencoded.
	unset req.http.Accept-Encoding;
  }
}


// Skip the Varnish cache for install, update, and cron
   if (req.url ~ "install\.php|update\.php|cron\.php") {
    return (pass);
   }

	   
    # Let Drupal know client IP.
    remove req.http.X-Forwarded-For;
     set req.http.X-Forwarded-For = client.ip;


     if (req.restarts == 0) {
 	if (req.http.x-forwarded-for) {
 	    set req.http.X-Forwarded-For =
 		req.http.X-Forwarded-For + ", " + client.ip;
 	} else {
 	    set req.http.X-Forwarded-For = client.ip;
 	}
     }
     if (req.request != "GET" &&
       req.request != "HEAD" &&
       req.request != "PUT" &&
       req.request != "POST" &&
       req.request != "TRACE" &&
       req.request != "OPTIONS" &&
       req.request != "DELETE") {
         /* Non-RFC2616 or CONNECT which is weird. */
         return (pipe);
     }
     if (req.request != "GET" && req.request != "HEAD") {
         /* We only deal with GET and HEAD by default */
         return (pass);
     }
     if (req.http.Authorization || req.http.Cookie) {
         /* Not cacheable by default */
         return (pass);
     }
     return (lookup);
 }
# 
# sub vcl_pipe {
#     # Note that only the first request to the backend will have
#     # X-Forwarded-For set.  If you use X-Forwarded-For and want to
#     # have it set for all requests, make sure to have:
#     # set bereq.http.connection = "close";
#     # here.  It is not set by default as it might break some broken web
#     # applications, like IIS with NTLM authentication.
#     return (pipe);
# }
# 
# sub vcl_pass {
#     return (pass);
# }
# 
# sub vcl_hash {
#     hash_data(req.url);
#     if (req.http.host) {
#         hash_data(req.http.host);
#     } else {
#         hash_data(server.ip);
#     }
#     return (hash);
# }
# 
# sub vcl_hit {
#     return (deliver);
# }
# 
# sub vcl_miss {
#     return (fetch);
# }
# 
 sub vcl_fetch {
	set beresp.grace = 6h;

 }
# 
# sub vcl_deliver {
#     return (deliver);
# }
# 
# sub vcl_error {
#     set obj.http.Content-Type = "text/html; charset=utf-8";
#     set obj.http.Retry-After = "5";
#     synthetic {"
# <?xml version="1.0" encoding="utf-8"?>
# <!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN"
#  "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
# <html>
#   <head>
#     <title>"} + obj.status + " " + obj.response + {"</title>
#   </head>
#   <body>
#     <h1>Error "} + obj.status + " " + obj.response + {"</h1>
#     <p>"} + obj.response + {"</p>
#     <h3>Guru Meditation:</h3>
#     <p>XID: "} + req.xid + {"</p>
#     <hr>
#     <p>Varnish cache server</p>
#   </body>
# </html>
# "};
#     return (deliver);
# }
# 
# sub vcl_init {
# 	return (ok);
# }
# 
# sub vcl_fini {
# 	return (ok);
# }