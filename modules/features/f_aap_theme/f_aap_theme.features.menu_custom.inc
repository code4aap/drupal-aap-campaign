<?php
/**
 * @file
 * f_aap_theme.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function f_aap_theme_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-donate.
  $menus['menu-donate'] = array(
    'menu_name' => 'menu-donate',
    'title' => 'Donation Details',
    'description' => '',
  );
  // Exported menu: menu-right-navigation.
  $menus['menu-right-navigation'] = array(
    'menu_name' => 'menu-right-navigation',
    'title' => 'Right Navigation',
    'description' => '',
  );
  // Exported menu: menu-support-us.
  $menus['menu-support-us'] = array(
    'menu_name' => 'menu-support-us',
    'title' => 'Support Us',
    'description' => '',
  );
  // Exported menu: menu-talk-to-us.
  $menus['menu-talk-to-us'] = array(
    'menu_name' => 'menu-talk-to-us',
    'title' => 'Talk to Us',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Donation Details');
  t('Main menu');
  t('Right Navigation');
  t('Support Us');
  t('Talk to Us');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');


  return $menus;
}
