<?php
/**
 * @file
 * f_invite_and_contact_importer.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_invite_and_contact_importer_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
