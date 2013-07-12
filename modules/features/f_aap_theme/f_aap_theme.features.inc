<?php
/**
 * @file
 * f_aap_theme.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_aap_theme_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function f_aap_theme_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function f_aap_theme_image_default_styles() {
  $styles = array();

  // Exported image style: image_slideshow.
  $styles['image_slideshow'] = array(
    'name' => 'image_slideshow',
    'effects' => array(
      1 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => '670',
          'height' => '300',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}
