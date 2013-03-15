<?php
/**
 * @file
 * f_comments_disqus.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function f_comments_disqus_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management:admin/config/services/disqus
  $menu_links['management:admin/config/services/disqus'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/services/disqus',
    'router_path' => 'admin/config/services/disqus',
    'link_title' => 'Disqus',
    'options' => array(
      'attributes' => array(
        'title' => 'Provides configuration options for the Disqus comment system.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/config/services',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Disqus');


  return $menu_links;
}
