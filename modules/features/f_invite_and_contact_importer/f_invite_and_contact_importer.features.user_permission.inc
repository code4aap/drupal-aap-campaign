<?php
/**
 * @file
 * f_invite_and_contact_importer.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function f_invite_and_contact_importer_user_default_permissions() {
  $permissions = array();

  // Exported permission: access contact importer.
  $permissions['access contact importer'] = array(
    'name' => 'access contact importer',
    'roles' => array(),
    'module' => 'contact_importer',
  );

  // Exported permission: administer contact importer.
  $permissions['administer contact importer'] = array(
    'name' => 'administer contact importer',
    'roles' => array(),
    'module' => 'contact_importer',
  );

  return $permissions;
}
