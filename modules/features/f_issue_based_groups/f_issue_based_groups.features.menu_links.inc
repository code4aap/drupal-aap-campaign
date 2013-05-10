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

  // Exported menu link: management:admin/config/group
  $menu_links['management:admin/config/group'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/group',
    'router_path' => 'admin/config/group',
    'link_title' => 'Organic groups',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer the suite of Organic groups modules.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-5',
    'parent_path' => 'admin/config',
  );
  // Exported menu link: management:admin/config/group/permissions/node/group
  $menu_links['management:admin/config/group/permissions/node/group'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/group/permissions/node/group',
    'router_path' => 'admin/config/group/permissions/node/group',
    'link_title' => '',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure Organic groups group type permissions.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/config/group/permissions',
  );
  // Exported menu link: management:admin/config/group/roles/node/group
  $menu_links['management:admin/config/group/roles/node/group'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/group/roles/node/group',
    'router_path' => 'admin/config/group/roles/node/group',
    'link_title' => '',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure Organic groups group type roles.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/config/group/roles',
  );
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
  t('Organic groups');


  return $menu_links;
}
