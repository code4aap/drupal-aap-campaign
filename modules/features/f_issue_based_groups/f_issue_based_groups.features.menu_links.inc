<?php
/**
 * @file
 * f_issue_based_groups.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function f_issue_based_groups_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation:node/add/group
  $menu_links['navigation:node/add/group'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/group',
    'router_path' => 'node/add/group',
    'link_title' => 'Group',
    'options' => array(
      'attributes' => array(
        'title' => 'TODO',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Group');


  return $menu_links;
}
