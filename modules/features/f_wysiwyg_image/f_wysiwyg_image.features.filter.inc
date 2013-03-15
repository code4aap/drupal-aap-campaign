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

  return $formats;
}
