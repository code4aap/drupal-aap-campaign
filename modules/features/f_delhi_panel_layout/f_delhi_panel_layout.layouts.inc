<?php
/**
 * @file
 * f_delhi_panel_layout.layouts.inc
 */

/**
 * Implements hook_default_panels_layout().
 */
function f_delhi_panel_layout_default_panels_layout() {
  $export = array();

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'aap_candidate_layout';
  $layout->admin_title = 'AAP Candidate Layout';
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
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'AAP Candidate title',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'aap-candidate-title',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'candidate_thumbnail',
          1 => 'candidate_info',
        ),
        'parent' => 'main',
        'class' => 'aap-candidate-region',
      ),
      'candidate_thumbnail' => array(
        'type' => 'region',
        'title' => 'Candidate Thumbnail',
        'width' => '15.750591712858162',
        'width_type' => '%',
        'parent' => '1',
        'class' => 'aap-candidate-thumbnail',
      ),
      'candidate_info' => array(
        'type' => 'region',
        'title' => 'Candidate Info',
        'width' => '84.24940828714185',
        'width_type' => '%',
        'parent' => '1',
        'class' => 'aap-candidate-info',
      ),
    ),
  );
  $export['aap_candidate_layout'] = $layout;

  return $export;
}
