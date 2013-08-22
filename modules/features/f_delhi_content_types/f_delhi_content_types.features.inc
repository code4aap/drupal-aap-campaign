<?php
/**
 * @file
 * f_delhi_content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_delhi_content_types_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function f_delhi_content_types_node_info() {
  $items = array(
    'candidate_details_page' => array(
      'name' => t('Candidate Details Page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'constituency_page' => array(
      'name' => t('Constituency Page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
