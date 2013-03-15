<?php
/**
 * @file
 * f_wysiwyg_image.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function f_wysiwyg_image_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer imce.
  $permissions['administer imce'] = array(
    'name' => 'administer imce',
    'roles' => array(),
    'module' => 'imce',
  );

  // Exported permission: use text format full_html.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(),
    'module' => 'filter',
  );

  // Exported permission: use text format restricted_html.
  $permissions['use text format restricted_html'] = array(
    'name' => 'use text format restricted_html',
    'roles' => array(
      'Content Author' => 'Content Author',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
