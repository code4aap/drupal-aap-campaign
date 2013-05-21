<?php
/**
 * @file
 * site_feed_importers.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function site_feed_importers_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'main_site_news-entrydate-string_to_unix_timestamp';
  $feeds_tamper->importer = 'main_site_news';
  $feeds_tamper->source = 'EntryDate';
  $feeds_tamper->plugin_id = 'strtotime';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'String to Unix timestamp';
  $export['main_site_news-entrydate-string_to_unix_timestamp'] = $feeds_tamper;

  return $export;
}
