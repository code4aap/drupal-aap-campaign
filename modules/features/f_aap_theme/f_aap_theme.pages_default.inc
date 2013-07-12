<?php
/**
 * @file
 * f_aap_theme.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function f_aap_theme_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template_panel_context_2';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Front Layout',
    'no_blocks' => 1,
    'css_id' => 'page-wrapper',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'front',
          'settings' => NULL,
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '0',
            'paths' => '',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
    ),
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
        'class' => '',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => FALSE,
        'fixed_width' => '',
        'column_separation' => '0.5em',
        'region_separation' => '0.5em',
        'row_separation' => '0.5em',
      ),
      'main' => array(
        'type' => 'column',
        'width' => 99.999999999999,
        'width_type' => '%',
        'children' => array(
          0 => 5,
          1 => 2,
          2 => 1,
          3 => 'main-row',
          4 => 3,
          5 => 4,
          6 => 6,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'content',
          1 => 'sidebar_right',
          2 => 'right_content',
        ),
        'parent' => 'main',
        'class' => 'panels-top-row main-content',
      ),
      'content' => array(
        'type' => 'region',
        'title' => 'Left-Content',
        'width' => '33.32247224382147',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'panel-region-main-content',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'sliding_region',
          1 => 'right_navigation',
        ),
        'parent' => 'main',
        'class' => 'sliding-right-nav-row',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'header_menu',
        ),
        'parent' => 'main',
        'class' => 'main-menu-row',
      ),
      'sidebar_right' => array(
        'type' => 'region',
        'title' => 'Middle Content',
        'width' => '33.28554197621634',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'pre_footer',
          1 => 'bottom_right_content',
        ),
        'parent' => 'main',
        'class' => 'panels-top-row panels-row-pre-footer',
      ),
      'pre_footer' => array(
        'type' => 'region',
        'title' => 'Bottom Left Content',
        'width' => '50',
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'footer_1',
          1 => 'footer_2',
          2 => 'footer_3',
          3 => 'footer_4',
        ),
        'parent' => 'main',
        'class' => 'panels-top-row panels-row-footer',
      ),
      'footer_3' => array(
        'type' => 'region',
        'title' => 'Footer 3',
        'width' => '25.000353998945837',
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
      ),
      'footer_4' => array(
        'type' => 'region',
        'title' => 'Footer 4',
        'width' => '25.009028409703596',
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'header_logo',
          1 => 'header_search_',
        ),
        'parent' => 'main',
        'class' => 'top-header-row',
      ),
      'header_logo' => array(
        'type' => 'region',
        'title' => 'Header Logo',
        'width' => 50,
        'width_type' => '%',
        'parent' => '5',
        'class' => '',
      ),
      'header_search_' => array(
        'type' => 'region',
        'title' => 'Header Search',
        'width' => 50,
        'width_type' => '%',
        'parent' => '5',
        'class' => '',
      ),
      'header_menu' => array(
        'type' => 'region',
        'title' => 'Header Menu',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => 'header-menu',
      ),
      'sliding_region' => array(
        'type' => 'region',
        'title' => 'Sliding Region',
        'width' => 73.227763572059,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'sliding-region-class',
      ),
      'right_navigation' => array(
        'type' => 'region',
        'title' => 'Right Navigation',
        'width' => '26.77223642794133',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      'right_content' => array(
        'type' => 'region',
        'title' => 'Right Content',
        'width' => '33.3919857799632',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      6 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'footer',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'bottom_right_content' => array(
        'type' => 'region',
        'title' => 'Bottom Right Content',
        'width' => '50',
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
      ),
      'footer_2' => array(
        'type' => 'region',
        'title' => 'Footer 2',
        'width' => '24.965275277354017',
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
      ),
      'footer_1' => array(
        'type' => 'region',
        'title' => 'Footer 1',
        'width' => '25.025342313996667',
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
      ),
      'footer' => array(
        'type' => 'region',
        'title' => 'Footer',
        'width' => 100,
        'width_type' => '%',
        'parent' => '6',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'header' => NULL,
      'header_menu' => NULL,
      'sidebar_left' => array(
        'corner_location' => 'pane',
      ),
      'pre_footer' => NULL,
      'footer' => NULL,
      'footer_2' => NULL,
      'footer_3' => NULL,
      'footer_4' => NULL,
      'content' => NULL,
      'sidebar_right' => NULL,
      'header_logo' => NULL,
      'header_search_' => NULL,
      'social_share_region' => NULL,
      'sliding_region' => NULL,
      'right_navigation' => NULL,
      'right_content' => NULL,
      'bottom_right_content' => NULL,
      'footer_1' => NULL,
    ),
    'sidebar_right' => array(
      'style' => '-1',
    ),
    'sidebar_left' => array(
      'style' => 'rounded_corners',
    ),
    'content' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
    $pane->panel = 'content';
    $pane->type = 'views';
    $pane->subtype = 'landing_pages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_2',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'aap-main-content',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-1'] = $pane;
    $display->panels['content'][0] = 'new-1';
    $pane = new stdClass();
    $pane->pid = 'new-2';
    $pane->panel = 'footer';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div></div>',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'footer-bottom',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-2'] = $pane;
    $display->panels['footer'][0] = 'new-2';
    $pane = new stdClass();
    $pane->pid = 'new-3';
    $pane->panel = 'footer_1';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-donate';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'footer-content',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-3'] = $pane;
    $display->panels['footer_1'][0] = 'new-3';
    $pane = new stdClass();
    $pane->pid = 'new-4';
    $pane->panel = 'footer_2';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-talk-to-us';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'footer-content',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-4'] = $pane;
    $display->panels['footer_2'][0] = 'new-4';
    $pane = new stdClass();
    $pane->pid = 'new-5';
    $pane->panel = 'footer_3';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-support-us';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'footer-content',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-5'] = $pane;
    $display->panels['footer_3'][0] = 'new-5';
    $pane = new stdClass();
    $pane->pid = 'new-6';
    $pane->panel = 'footer_4';
    $pane->type = 'contact';
    $pane->subtype = 'contact';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Get in Touch',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-6'] = $pane;
    $display->panels['footer_4'][0] = 'new-6';
    $pane = new stdClass();
    $pane->pid = 'new-7';
    $pane->panel = 'header_logo';
    $pane->type = 'page_logo';
    $pane->subtype = 'page_logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-7'] = $pane;
    $display->panels['header_logo'][0] = 'new-7';
    $pane = new stdClass();
    $pane->pid = 'new-8';
    $pane->panel = 'header_menu';
    $pane->type = 'block';
    $pane->subtype = 'superfish-1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'header-menu',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-8'] = $pane;
    $display->panels['header_menu'][0] = 'new-8';
    $pane = new stdClass();
    $pane->pid = 'new-9';
    $pane->panel = 'header_search_';
    $pane->type = 'search_form';
    $pane->subtype = 'search_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'apachesolr_search',
      'form' => 'advanced',
      'path_type' => 'default',
      'path' => '',
      'override_prompt' => 0,
      'prompt' => '',
      'context' => 'empty',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-9'] = $pane;
    $display->panels['header_search_'][0] = 'new-9';
    $pane = new stdClass();
    $pane->pid = 'new-10';
    $pane->panel = 'right_content';
    $pane->type = 'block';
    $pane->subtype = 'block-1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Facebook Updates',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'aap-main-content',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-10'] = $pane;
    $display->panels['right_content'][0] = 'new-10';
    $pane = new stdClass();
    $pane->pid = 'new-11';
    $pane->panel = 'right_navigation';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-right-navigation';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'right-navigation-class',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-11'] = $pane;
    $display->panels['right_navigation'][0] = 'new-11';
    $pane = new stdClass();
    $pane->pid = 'new-12';
    $pane->panel = 'sidebar_right';
    $pane->type = 'block';
    $pane->subtype = 'block-2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Latest Tweets',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'aap-main-content',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-12'] = $pane;
    $display->panels['sidebar_right'][0] = 'new-12';
    $pane = new stdClass();
    $pane->pid = 'new-13';
    $pane->panel = 'sidebar_right';
    $pane->type = 'block';
    $pane->subtype = 'poll-recent';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Opinion Poll',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'aap-main-content',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-13'] = $pane;
    $display->panels['sidebar_right'][1] = 'new-13';
    $pane = new stdClass();
    $pane->pid = 'new-14';
    $pane->panel = 'sliding_region';
    $pane->type = 'views';
    $pane->subtype = 'home_page_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'sliding_news',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-14'] = $pane;
    $display->panels['sliding_region'][0] = 'new-14';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['site_template_panel_context_2'] = $handler;

  return $export;
}
