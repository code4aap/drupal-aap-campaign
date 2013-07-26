<?php
/**
 * @file
 * f_site_menus.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function f_site_menus_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-contact-us-footer.
  $menus['menu-contact-us-footer'] = array(
    'menu_name' => 'menu-contact-us-footer',
    'title' => 'Contact Us Footer',
    'description' => '',
  );
  // Exported menu: menu-footer-1.
  $menus['menu-footer-1'] = array(
    'menu_name' => 'menu-footer-1',
    'title' => 'Donation',
    'description' => '',
  );
  // Exported menu: menu-footer-2.
  $menus['menu-footer-2'] = array(
    'menu_name' => 'menu-footer-2',
    'title' => 'Vision & Policy',
    'description' => 'this menu appears in footer at second column',
  );
  // Exported menu: menu-footer-3.
  $menus['menu-footer-3'] = array(
    'menu_name' => 'menu-footer-3',
    'title' => 'Media',
    'description' => '',
  );
  // Exported menu: menu-how-can-you-help.
  $menus['menu-how-can-you-help'] = array(
    'menu_name' => 'menu-how-can-you-help',
    'title' => 'How can you help?',
    'description' => 'How can you help?',
  );
  // Exported menu: menu-right-navigation.
  $menus['menu-right-navigation'] = array(
    'menu_name' => 'menu-right-navigation',
    'title' => 'Right Navigation',
    'description' => '',
  );
  // Exported menu: menu-social-connectors.
  $menus['menu-social-connectors'] = array(
    'menu_name' => 'menu-social-connectors',
    'title' => 'Social Connectors',
    'description' => '',
  );
  // Exported menu: menu-support-us.
  $menus['menu-support-us'] = array(
    'menu_name' => 'menu-support-us',
    'title' => 'Support Us',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Contact Us Footer');
  t('Donation');
  t('How can you help?');
  t('Main menu');
  t('Media');
  t('Right Navigation');
  t('Social Connectors');
  t('Support Us');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('Vision & Policy');
  t('this menu appears in footer at second column');


  return $menus;
}
