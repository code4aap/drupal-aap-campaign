<?php
/**
 * @file
 * f_delhi_content_types.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function f_delhi_content_types_taxonomy_default_vocabularies() {
  return array(
    'constituency' => array(
      'name' => 'Constituency',
      'machine_name' => 'constituency',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
