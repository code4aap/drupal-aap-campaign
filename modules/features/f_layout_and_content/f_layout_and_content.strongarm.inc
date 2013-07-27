<?php
/**
 * @file
 * f_layout_and_content.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function f_layout_and_content_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_everywhere_override_theme_alpha';
  $strongarm->value = 0;
  $export['panels_everywhere_override_theme_alpha'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_everywhere_override_theme_bartik';
  $strongarm->value = 0;
  $export['panels_everywhere_override_theme_bartik'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_everywhere_override_theme_garland';
  $strongarm->value = 0;
  $export['panels_everywhere_override_theme_garland'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_everywhere_override_theme_hapoos';
  $strongarm->value = 0;
  $export['panels_everywhere_override_theme_hapoos'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_everywhere_override_theme_omega';
  $strongarm->value = 0;
  $export['panels_everywhere_override_theme_omega'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_everywhere_override_theme_omega_kickstart';
  $strongarm->value = 0;
  $export['panels_everywhere_override_theme_omega_kickstart'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_everywhere_override_theme_seven';
  $strongarm->value = 0;
  $export['panels_everywhere_override_theme_seven'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_everywhere_override_theme_stark';
  $strongarm->value = 0;
  $export['panels_everywhere_override_theme_stark'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_everywhere_override_theme_zen';
  $strongarm->value = 0;
  $export['panels_everywhere_override_theme_zen'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_everywhere_provide_sample';
  $strongarm->value = 1;
  $export['panels_everywhere_provide_sample'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_everywhere_site_template_enabled';
  $strongarm->value = 1;
  $export['panels_everywhere_site_template_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_everywhere_site_template_enabled_admin';
  $strongarm->value = 0;
  $export['panels_everywhere_site_template_enabled_admin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_everywhere_site_template_per_theme';
  $strongarm->value = 1;
  $export['panels_everywhere_site_template_per_theme'] = $strongarm;

  return $export;
}
