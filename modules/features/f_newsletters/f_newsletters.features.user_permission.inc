<?php
/**
 * @file
 * f_newsletters.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function f_newsletters_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer newsletters.
  $permissions['administer newsletters'] = array(
    'name' => 'administer newsletters',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: administer simplenews settings.
  $permissions['administer simplenews settings'] = array(
    'name' => 'administer simplenews settings',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: administer simplenews subscriptions.
  $permissions['administer simplenews subscriptions'] = array(
    'name' => 'administer simplenews subscriptions',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: create aap_newsletter content.
  $permissions['create aap_newsletter content'] = array(
    'name' => 'create aap_newsletter content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any aap_newsletter content.
  $permissions['delete any aap_newsletter content'] = array(
    'name' => 'delete any aap_newsletter content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own aap_newsletter content.
  $permissions['delete own aap_newsletter content'] = array(
    'name' => 'delete own aap_newsletter content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete terms in 3.
  $permissions['delete terms in 3'] = array(
    'name' => 'delete terms in 3',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit any aap_newsletter content.
  $permissions['edit any aap_newsletter content'] = array(
    'name' => 'edit any aap_newsletter content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit mimemail user settings.
  $permissions['edit mimemail user settings'] = array(
    'name' => 'edit mimemail user settings',
    'roles' => array(
      'Administrator' => 'Administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'mimemail',
  );

  // Exported permission: edit own aap_newsletter content.
  $permissions['edit own aap_newsletter content'] = array(
    'name' => 'edit own aap_newsletter content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit terms in 3.
  $permissions['edit terms in 3'] = array(
    'name' => 'edit terms in 3',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: send newsletter.
  $permissions['send newsletter'] = array(
    'name' => 'send newsletter',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: subscribe to newsletters.
  $permissions['subscribe to newsletters'] = array(
    'name' => 'subscribe to newsletters',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Party Leardership' => 'Party Leardership',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'simplenews',
  );

  return $permissions;
}
