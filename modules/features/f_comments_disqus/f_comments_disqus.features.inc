<?php
/**
 * @file
 * f_comments_disqus.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_comments_disqus_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
