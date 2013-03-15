<?php
/**
 * @file
 * f_wysiwyg_image.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function f_wysiwyg_image_filter_default_formats() {
  $formats = array();

  // Exported format: Full HTML (everything allowed, only for admin).
  $formats['full_html'] = array(
    'format' => 'full_html',
    'name' => 'Full HTML (everything allowed, only for admin)',
    'cache' => '1',
    'status' => '1',
    'weight' => '0',
    'filters' => array(
      'filter_htmlcorrector' => array(
        'weight' => '10',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Restricted Html.
  $formats['restricted_html'] = array(
    'format' => 'restricted_html',
    'name' => 'Restricted Html',
    'cache' => '1',
    'status' => '1',
    'weight' => '0',
    'filters' => array(
      'filter_html' => array(
        'weight' => '-10',
        'status' => '1',
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_url' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => '72',
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => '10',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
