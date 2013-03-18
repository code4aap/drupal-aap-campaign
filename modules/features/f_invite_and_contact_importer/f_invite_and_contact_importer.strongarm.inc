<?php
/**
 * @file
 * f_invite_and_contact_importer.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function f_invite_and_contact_importer_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'contact_importer_form_show_ids';
  $strongarm->value = 0;
  $export['contact_importer_form_show_ids'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'contact_importer_modal';
  $strongarm->value = 'none';
  $export['contact_importer_modal'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'contact_importer_providers_saved';
  $strongarm->value = array(
    'gmail' => 'openinviter_engine',
    'livehotmail' => 'openinviter_engine',
    'yahoo' => 'openinviter_engine',
  );
  $export['contact_importer_providers_saved'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'contact_importer_separator';
  $strongarm->value = ', ';
  $export['contact_importer_separator'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fb_user_alter_contact';
  $strongarm->value = 1;
  $export['fb_user_alter_contact'] = $strongarm;

  return $export;
}
