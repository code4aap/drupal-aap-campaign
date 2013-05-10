<?php
/**
 * @file
 * f_issue_based_groups.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function f_issue_based_groups_user_default_permissions() {
  $permissions = array();

  // Exported permission: create group content.
  $permissions['create group content'] = array(
    'name' => 'create group content',
    'roles' => array(
      'Content Approver' => 'Content Approver',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any group content.
  $permissions['delete any group content'] = array(
    'name' => 'delete any group content',
    'roles' => array(
      'Content Approver' => 'Content Approver',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own group content.
  $permissions['delete own group content'] = array(
    'name' => 'delete own group content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any group content.
  $permissions['edit any group content'] = array(
    'name' => 'edit any group content',
    'roles' => array(
      'Content Approver' => 'Content Approver',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own group content.
  $permissions['edit own group content'] = array(
    'name' => 'edit own group content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
