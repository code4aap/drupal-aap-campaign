<?php 
/**
 * @file
 *
 * Drush commands for uploading sucribers.
 */

/**
 * Implements hook_drush_command().
 */
function aap_tweaks_drush_command() {
  $items = array();
  $items['delete_confidential_data'] = array(

    'description' => 'Delete confidential data from database',
    'callback' => 'delete_confidential_data',
    'aliases' => array('dcd'),
  );
  return $items;
}

function delete_confidential_data() {
  $uids = array(96);
  user_delete_multiple($uids);
}