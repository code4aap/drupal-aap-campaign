<?php
/**
 * @file
 * site_feed_importers.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function site_feed_importers_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'main_site_news';
  $feeds_importer->config = array(
    'name' => 'Main-site News',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => 0,
        'directory' => 'private://feeds/news',
        'allowed_schemes' => array(
          'public' => 'public',
          'private' => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ';',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'news_heading',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'news_desc',
            'target' => 'body',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'link_url',
            'target' => 'field_news_links:url',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'EntryDate',
            'target' => 'created',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'news',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['main_site_news'] = $feeds_importer;

  return $export;
}
