<?php
/**
 * @file
 * f_search.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function f_search_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management:admin/config/search
  $menu_links['management:admin/config/search'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search',
    'router_path' => 'admin/config/search',
    'link_title' => 'Search and metadata',
    'options' => array(
      'attributes' => array(
        'title' => 'Local site search, metadata and SEO.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-10',
    'parent_path' => 'admin/config',
  );
  // Exported menu link: management:admin/config/search/apachesolr
  $menu_links['management:admin/config/search/apachesolr'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/apachesolr',
    'router_path' => 'admin/config/search/apachesolr',
    'link_title' => 'Apache Solr search',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer Apache Solr.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-8',
    'parent_path' => 'admin/config/search',
  );
  // Exported menu link: management:admin/config/search/current_search
  $menu_links['management:admin/config/search/current_search'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/current_search',
    'router_path' => 'admin/config/search/current_search',
    'link_title' => 'Current search blocks',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure current search blocks.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/config/search',
  );
  // Exported menu link: management:admin/config/search/settings
  $menu_links['management:admin/config/search/settings'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/settings',
    'router_path' => 'admin/config/search/settings',
    'link_title' => 'Search settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure relevance settings for search and other indexing options.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-10',
    'parent_path' => 'admin/config/search',
  );
  // Exported menu link: management:admin/reports/apachesolr
  $menu_links['management:admin/reports/apachesolr'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/apachesolr',
    'router_path' => 'admin/reports/apachesolr',
    'link_title' => 'Apache Solr search index',
    'options' => array(
      'attributes' => array(
        'title' => 'Information about the contents of the index the server',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/reports',
  );
  // Exported menu link: management:admin/reports/search
  $menu_links['management:admin/reports/search'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/search',
    'router_path' => 'admin/reports/search',
    'link_title' => 'Top search phrases',
    'options' => array(
      'attributes' => array(
        'title' => 'View most popular search phrases.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/reports',
  );
  // Exported menu link: navigation:search
  $menu_links['navigation:search'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'search',
    'router_path' => 'search',
    'link_title' => 'Search',
    'options' => array(),
    'module' => 'system',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Apache Solr search');
  t('Apache Solr search index');
  t('Current search blocks');
  t('Search');
  t('Search and metadata');
  t('Search settings');
  t('Top search phrases');


  return $menu_links;
}
