<?php
/**
 * @file
 * f_content_and_user_roles.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function f_content_and_user_roles_taxonomy_default_vocabularies() {
  return array(
    'content_publishing_workflow' => array(
      'name' => 'Content Publishing Workflow',
      'machine_name' => 'content_publishing_workflow',
      'description' => 'Content Publishing Workflow',
      'hierarchy' => '1',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'newsletter' => array(
      'name' => 'Newsletter',
      'machine_name' => 'newsletter',
      'description' => 'Simplenews newsletter categories.',
      'hierarchy' => '0',
      'module' => 'simplenews',
      'weight' => '0',
    ),
    'tags' => array(
      'name' => 'Tags',
      'machine_name' => 'tags',
      'description' => 'Free tagging for content of any kind',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
