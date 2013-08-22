<?php
/**
 * @file
 * f_delhi_panel_layout.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function f_delhi_panel_layout_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template_panel_context_5';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Delhi Front Layout',
    'no_blocks' => 1,
    'css_id' => '',
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
      ),
      'logic' => 'and',
    ),
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'aap-body-class',
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
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 1,
          2 => 2,
          3 => 6,
          4 => 7,
          5 => 8,
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
          0 => 'delhi_content',
          1 => 'right_navigation',
        ),
        'parent' => 'main',
        'class' => 'aap-background-class',
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
        'width' => '26.569821930646665',
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
      8 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(),
        'parent' => 'main',
        'class' => '',
      ),
      'delhi_content' => array(
        'type' => 'region',
        'title' => 'Delhi Content',
        'width' => '73.43017806935333',
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'content' => NULL,
      'sidebar' => NULL,
      'header' => NULL,
      'header_logo' => NULL,
      'right_navigation' => NULL,
      'header_menu' => NULL,
      'footer_bottom_content' => NULL,
      'footer_bottom' => NULL,
      'delhi_content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
    $pane->panel = 'delhi_content';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="home-box-top"><!-- TODO main banner image below --><a href="http://aamaadmiparty.org/news/aam-aadmi-party-gets-broom-as-its-election-symbol"><img alt="Election Symbol" src="http://aamaadmiparty.org/sites/default/files/AAP%20Symbol_2.jpg" style="height: 273px; width: 673px;" /></a></div><div class="home-box-bottom"><div class="movstrip clearfix"><ul><li><!-- TODO small banner image for slot 1 --><a href="/news/campaign-in-full-swing-in-rkpuram" title="Women Security Force"><img alt="Durga Nagpal Press Conference" src="/sites/default/files/RKPuram-Aug%2012.jpg" style="height: 108px; width: 200px;" /></a>&nbsp;<b>Shazia Ilmi </b>leads the <strong><a href="/news/campaign-in-full-swing-in-rkpuram">R.K.Puram campaign</a></strong></li><li><!-- TODO small banner image for slot 2 --><a href="http://delhi.aamaadmiparty.org/Delhi-Elections-2013/CandidateList"><img alt="Candidate List" src="/sites/default/files/CandidateListBanner.jpeg" style="height: 108px; width: 200px;" /></a>&nbsp;Delhi Election Candidate List - <a href="/Delhi-Elections-2013/CandidateList"><strong>The latest updates</strong></a></li><li><!-- TODO Multiple small banner images for slot 3 --><b><a href="http://aamaadmiparty.org/news/delhi-2013-arvinds-campaign-meeting"><img src="http://aamaadmiparty.org/sites/default/files/styles/image_slideshow/public/Jansabha-Nehru%20Place-Delhi.jpg" style="width: 200px; height: 108px;" /></a>&nbsp;Arvind&#39;s&nbsp;</b><a href="http://aamaadmiparty.org/news/delhi-2013-arvinds-campaign-meeting"><strong>meeting with traders</strong></a> at Nehru Place, Delhi</li><li><!-- TODO small banner image for slot 4 --><b><a href="http://delhi.aamaadmiparty.org/news/fifth-list-of-candidates-for-7-assembly-seats-declared-youngsters-prefered"><img src="/sites/default/files/FifthCandidateList.jpg" style="width: 200px; height: 106px;" /></a><b>Fifth Candidate List</b>&nbsp;- </b>AAP has announced its <a href="/news/fifth-list-of-candidates-for-7-assembly-seats-declared-youngsters-prefered"><strong>fifth candidate list</strong></a> for 7 additional constituencies</li></ul></div></div><center><p><b><a href="https://www.facebook.com/AamAadmiParty" target="_blank"><img height="55" src="/sites/default/files/facebook-icon.png" width="55" /></a><a href="https://twitter.com/aamaadmiparty" target="_blank"><img height="55" src="/sites/default/files/twitter-icon.png" width="55" /></a><a href="http://www.youtube.com/user/indiACor2010" target="_blank"><img height="55" src="/sites/default/files/youtube-icon.png" width="55" /></a></b></p><p><b><a href="mailto:blogs@delhi.aamaadmiparty.org">Share your thoughts with us</a></b></p><p><b>&nbsp;</b></p></center>',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-1'] = $pane;
    $display->panels['delhi_content'][0] = 'new-1';
    $pane = new stdClass();
    $pane->pid = 'new-2';
    $pane->panel = 'footer_bottom';
    $pane->type = 'panels_mini';
    $pane->subtype = 'footer_bottom';
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
      'css_class' => 'footer-bottom',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-2'] = $pane;
    $display->panels['footer_bottom'][0] = 'new-2';
    $pane = new stdClass();
    $pane->pid = 'new-3';
    $pane->panel = 'footer_bottom_content';
    $pane->type = 'panels_mini';
    $pane->subtype = 'footer';
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
      'css_class' => 'aap-footer-class',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-3'] = $pane;
    $display->panels['footer_bottom_content'][0] = 'new-3';
    $pane = new stdClass();
    $pane->pid = 'new-4';
    $pane->panel = 'header_logo';
    $pane->type = 'panels_mini';
    $pane->subtype = 'header';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-4'] = $pane;
    $display->panels['header_logo'][0] = 'new-4';
    $pane = new stdClass();
    $pane->pid = 'new-5';
    $pane->panel = 'header_menu';
    $pane->type = 'panels_mini';
    $pane->subtype = 'header_menu';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-5'] = $pane;
    $display->panels['header_menu'][0] = 'new-5';
    $pane = new stdClass();
    $pane->pid = 'new-6';
    $pane->panel = 'right_navigation';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-right-navigation';
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
      'css_class' => 'right-navigation-class',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-6'] = $pane;
    $display->panels['right_navigation'][0] = 'new-6';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['site_template_panel_context_5'] = $handler;

  return $export;
}
