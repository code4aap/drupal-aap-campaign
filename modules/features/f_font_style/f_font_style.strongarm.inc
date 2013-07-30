<?php
/**
 * @file
 * f_font_style.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function f_font_style_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fontyourface_css_md5';
  $strongarm->value = 'a99f8a44a58ac31d3d52c7308bd672ac';
  $export['fontyourface_css_md5'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fontyourface_detailed_logging';
  $strongarm->value = 0;
  $export['fontyourface_detailed_logging'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fontyourface_load_everywhere';
  $strongarm->value = 0;
  $export['fontyourface_load_everywhere'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fontyourface_short_preview_text';
  $strongarm->value = 'AaGg';
  $export['fontyourface_short_preview_text'] = $strongarm;

  return $export;
}
