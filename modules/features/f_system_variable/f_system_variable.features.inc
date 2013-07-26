<?php
/**
 * @file
 * f_system_variable.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_system_variable_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
