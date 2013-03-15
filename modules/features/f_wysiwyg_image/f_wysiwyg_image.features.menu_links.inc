<?php
/**
 * @file
 * f_wysiwyg_image.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function f_wysiwyg_image_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management:admin/config/content/wysiwyg
  $menu_links['management:admin/config/content/wysiwyg'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/wysiwyg',
    'router_path' => 'admin/config/content/wysiwyg',
    'link_title' => 'Wysiwyg profiles',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure client-side editors.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/config/content',
  );
  // Exported menu link: management:admin/config/media/imce
  $menu_links['management:admin/config/media/imce'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/imce',
    'router_path' => 'admin/config/media/imce',
    'link_title' => 'IMCE',
    'options' => array(
      'attributes' => array(
        'title' => 'Control how your image/file browser works.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/config/media',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('IMCE');
  t('Wysiwyg profiles');


  return $menu_links;
}
