<?php
/**
 * @file
 * f_content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_content_types_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function f_content_types_node_info() {
  $items = array(
    'aap_question' => array(
      'name' => t('AAP Question'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'volunteer_story' => array(
      'name' => t('Volunteer Story'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
