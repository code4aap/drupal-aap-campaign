<?php
/**
 * @file
 * f_theme_layout.layouts.inc
 */

/**
 * Implements hook_default_panels_layout().
 */
function f_theme_layout_default_panels_layout() {
  $export = array();

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'aap_layout';
  $layout->admin_title = 'AAP Layout';
  $layout->admin_description = '';
  $layout->category = '';
  $layout->plugin = 'flexible';
  $layout->settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 1,
          2 => 2,
          3 => 3,
          4 => 4,
          5 => 5,
          6 => 6,
          7 => 7,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'header_logo',
        ),
        'parent' => 'main',
        'class' => 'top-header-row',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'header_menu',
        ),
        'parent' => 'main',
        'class' => 'main-menu-row',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'sliding_region',
          1 => 'right_navigation',
        ),
        'parent' => 'main',
        'class' => 'aap-background-class',
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_content',
          1 => 'middle_content',
          2 => 'right_content',
        ),
        'parent' => 'main',
        'class' => 'panels-top-row main-content',
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'middle_left_content',
          1 => 'footer_1',
          2 => 'right_middle_content',
        ),
        'parent' => 'main',
        'class' => 'middle-content',
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'footer_1__',
        ),
        'parent' => 'main',
        'class' => 'bottom-content',
      ),
      'header_logo' => array(
        'type' => 'region',
        'title' => 'Top Header',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'top-header-row',
      ),
      'right_navigation' => array(
        'type' => 'region',
        'title' => 'Right Navigation',
        'width' => '22.961296542364053',
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
      'left_content' => array(
        'type' => 'region',
        'title' => 'Top Left Content',
        'width' => '33.31061479850407',
        'width_type' => '%',
        'parent' => '3',
        'class' => 'panel-region-main-content',
      ),
      'middle_content' => array(
        'type' => 'region',
        'title' => 'Top Center Content',
        'width' => '33.3010524949649',
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
      ),
      'right_content' => array(
        'type' => 'region',
        'title' => 'Top Right Content',
        'width' => '33.388332706531045',
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
      ),
      'footer_1' => array(
        'type' => 'region',
        'title' => 'Middle Center Content',
        'width' => '33.3022245008694',
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
      ),
      'footer_1__' => array(
        'type' => 'region',
        'title' => 'Bottom Content',
        'width' => 100,
        'width_type' => '%',
        'parent' => '5',
        'class' => 'aap-question-class',
      ),
      'sliding_region' => array(
        'type' => 'region',
        'title' => 'Sliding Region',
        'width' => '77.03870345763595',
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
      'header_menu' => array(
        'type' => 'region',
        'title' => 'Top Menu',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      6 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'footer_bottom_content',
        ),
        'parent' => 'main',
        'class' => 'aap-footer-top-class',
      ),
      'footer_bottom_content' => array(
        'type' => 'region',
        'title' => 'Footer-top',
        'width' => 100,
        'width_type' => '%',
        'parent' => '6',
        'class' => 'aap-footer-top-class',
      ),
      7 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'footer_bottom',
        ),
        'parent' => 'main',
        'class' => 'aap-footer-bottom-class',
      ),
      'footer_bottom' => array(
        'type' => 'region',
        'title' => 'Footer-Bottom',
        'width' => 100,
        'width_type' => '%',
        'parent' => '7',
        'class' => 'aap-footer-bottom-class',
      ),
      'middle_left_content' => array(
        'type' => 'region',
        'title' => 'Middle Left Content',
        'width' => '33.31061479850407',
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
      ),
      'right_middle_content' => array(
        'type' => 'region',
        'title' => 'Right Middle Content',
        'width' => '33.38716070062653',
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
      ),
    ),
  );
  $export['aap_layout'] = $layout;

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'testpanel';
  $layout->admin_title = 'TestPanel';
  $layout->admin_description = 'This is a test panel. ';
  $layout->category = '';
  $layout->plugin = 'flexible';
  $layout->settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_region',
          1 => 'right_region',
        ),
        'parent' => 'main',
      ),
      'left_region' => array(
        'type' => 'region',
        'title' => 'Left Region',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'right_region' => array(
        'type' => 'region',
        'title' => 'Right Region',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $export['testpanel'] = $layout;

  return $export;
}
