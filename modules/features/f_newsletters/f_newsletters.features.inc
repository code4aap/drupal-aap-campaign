<?php
/**
 * @file
 * f_newsletters.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_newsletters_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function f_newsletters_node_info() {
  $items = array(
    'aap_newsletter' => array(
      'name' => t('AAP Newsletter'),
      'base' => 'node_content',
      'description' => t('Simple content type to hold a basic newsletter that can be sent to site subscribers.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
