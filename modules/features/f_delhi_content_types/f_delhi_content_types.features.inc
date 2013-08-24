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
 * Implements hook_flag_default_flags().
 */
function f_delhi_content_types_flag_default_flags() {
  $flags = array();
  // Exported flag: "AAP Remove Candidate".
  $flags['aap_remove_candidate'] = array(
    'content_type' => 'node',
    'title' => 'AAP Remove Candidate',
    'global' => '1',
    'types' => array(
      0 => 'candidate_details_page',
    ),
    'flag_short' => 'Remove this candidate',
    'flag_long' => 'Remove this candidate',
    'flag_message' => 'Remove this candidate',
    'unflag_short' => 'Add this candidate',
    'unflag_long' => 'Add this candidate',
    'unflag_message' => 'Add this candidate',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '9',
      ),
      'unflag' => array(
        0 => '9',
      ),
    ),
    'weight' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_on_page' => 0,
    'show_on_teaser' => 0,
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'f_delhi_content_types',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  // Exported flag: "AAP Selected Candidate".
  $flags['aap_selected_candidate'] = array(
    'content_type' => 'node',
    'title' => 'AAP Selected Candidate',
    'global' => '1',
    'types' => array(
      0 => 'candidate_details_page',
    ),
    'flag_short' => 'Mark as selected candidate',
    'flag_long' => 'Candidate marked as a selected',
    'flag_message' => 'Candidate is selected',
    'unflag_short' => 'Mark as not selected candidate',
    'unflag_long' => 'Candidate marked as a unselected',
    'unflag_message' => 'Candidate is in waiting',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '9',
      ),
      'unflag' => array(
        0 => '9',
      ),
    ),
    'weight' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'f_delhi_content_types',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  return $flags;

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
