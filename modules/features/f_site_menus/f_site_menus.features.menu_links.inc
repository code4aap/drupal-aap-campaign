<?php
/**
 * @file
 * f_site_menus.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function f_site_menus_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:<front>
  $menu_links['main-menu:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Key Agenda Items ',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'node/286',
  );
  // Exported menu link: main-menu:blog
  $menu_links['main-menu:blog'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'blog',
    'router_path' => 'blog',
    'link_title' => 'Blogs',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-38',
  );
  // Exported menu link: main-menu:events
  $menu_links['main-menu:events'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'events',
    'router_path' => 'events',
    'link_title' => 'Events',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: main-menu:http://delhi.aamaadmiparty.org
  $menu_links['main-menu:http://delhi.aamaadmiparty.org'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://delhi.aamaadmiparty.org',
    'router_path' => '',
    'link_title' => 'Delhi Election 2013',
    'options' => array(
      'attributes' => array(
        'title' => 'Link to the page showing the clikable assembly imagemap',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Exported menu link: main-menu:http://www.aamaadmiparty.org
  $menu_links['main-menu:http://www.aamaadmiparty.org'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://www.aamaadmiparty.org',
    'router_path' => '',
    'link_title' => 'Manifesto',
    'options' => array(
      'attributes' => array(
        'title' => 'Link for manifesto Page',
      ),
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-37',
  );
  // Exported menu link: main-menu:http://www.youtube.com/andolanlive
  $menu_links['main-menu:http://www.youtube.com/andolanlive'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://www.youtube.com/andolanlive',
    'router_path' => '',
    'link_title' => 'Live TV',
    'options' => array(
      'attributes' => array(
        'title' => 'Live TV link on You Tuve',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
  );
  // Exported menu link: main-menu:key-issues
  $menu_links['main-menu:key-issues'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'key-issues',
    'router_path' => 'key-issues',
    'link_title' => 'Key Issues',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-39',
  );
  // Exported menu link: main-menu:news
  $menu_links['main-menu:news'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'news',
    'router_path' => 'news',
    'link_title' => 'News',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => '<front>',
  );
  // Exported menu link: main-menu:node/285
  $menu_links['main-menu:node/285'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/285',
    'router_path' => 'node/%',
    'link_title' => 'About Us',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: main-menu:node/286
  $menu_links['main-menu:node/286'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/286',
    'router_path' => 'node/%',
    'link_title' => 'Vision',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: main-menu:node/287
  $menu_links['main-menu:node/287'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/287',
    'router_path' => 'node/%',
    'link_title' => 'Constitution',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'node/286',
  );
  // Exported menu link: main-menu:node/288
  $menu_links['main-menu:node/288'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/288',
    'router_path' => 'node/%',
    'link_title' => 'Organization and Structure',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
    'parent_path' => 'node/285',
  );
  // Exported menu link: main-menu:node/289
  $menu_links['main-menu:node/289'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/289',
    'router_path' => 'node/%',
    'link_title' => 'National Executive',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'node/285',
  );
  // Exported menu link: main-menu:node/290
  $menu_links['main-menu:node/290'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/290',
    'router_path' => 'node/%',
    'link_title' => 'How are we Different?',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-43',
    'parent_path' => 'node/285',
  );
  // Exported menu link: main-menu:node/291
  $menu_links['main-menu:node/291'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/291',
    'router_path' => 'node/%',
    'link_title' => ' Internal Lokpal',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-42',
    'parent_path' => 'node/285',
  );
  // Exported menu link: main-menu:node/292
  $menu_links['main-menu:node/292'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/292',
    'router_path' => 'node/%',
    'link_title' => 'Goal of Swaraj',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-41',
    'parent_path' => 'node/285',
  );
  // Exported menu link: main-menu:node/293
  $menu_links['main-menu:node/293'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/293',
    'router_path' => 'node/%',
    'link_title' => 'Political Affairs Committee',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-38',
    'parent_path' => 'node/285',
  );
  // Exported menu link: main-menu:node/294
  $menu_links['main-menu:node/294'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/294',
    'router_path' => 'node/%',
    'link_title' => 'Jan Lokpal Bill',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => '<front>',
  );
  // Exported menu link: main-menu:node/295
  $menu_links['main-menu:node/295'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/295',
    'router_path' => 'node/%',
    'link_title' => 'Right to Reject',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => '<front>',
  );
  // Exported menu link: main-menu:node/296
  $menu_links['main-menu:node/296'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/296',
    'router_path' => 'node/%',
    'link_title' => 'Right to Recall',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
    'parent_path' => '<front>',
  );
  // Exported menu link: main-menu:node/297
  $menu_links['main-menu:node/297'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/297',
    'router_path' => 'node/%',
    'link_title' => 'Political Decentralization',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
    'parent_path' => '<front>',
  );
  // Exported menu link: main-menu:node/298
  $menu_links['main-menu:node/298'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/298',
    'router_path' => 'node/%',
    'link_title' => 'Rising Prices',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-42',
    'parent_path' => '<front>',
  );
  // Exported menu link: main-menu:node/38
  $menu_links['main-menu:node/38'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/38',
    'router_path' => 'node/%',
    'link_title' => 'Contact Us',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-43',
  );
  // Exported menu link: main-menu:opinion-polls
  $menu_links['main-menu:opinion-polls'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'opinion-polls',
    'router_path' => 'opinion-polls',
    'link_title' => 'Opinion Polls',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-40',
  );
  // Exported menu link: menu-contact-us-footer:<front>
  $menu_links['menu-contact-us-footer:<front>'] = array(
    'menu_name' => 'menu-contact-us-footer',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Party Offices',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-footer-1:http://donations.aamaadmiparty.org
  $menu_links['menu-footer-1:http://donations.aamaadmiparty.org'] = array(
    'menu_name' => 'menu-footer-1',
    'link_path' => 'http://donations.aamaadmiparty.org',
    'router_path' => '',
    'link_title' => 'Donate',
    'options' => array(
      'attributes' => array(
        'title' => 'AAP Party Website',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-footer-1:node/299
  $menu_links['menu-footer-1:node/299'] = array(
    'menu_name' => 'menu-footer-1',
    'link_path' => 'node/299',
    'router_path' => 'node/%',
    'link_title' => 'Donation Policies',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: menu-footer-1:node/300
  $menu_links['menu-footer-1:node/300'] = array(
    'menu_name' => 'menu-footer-1',
    'link_path' => 'node/300',
    'router_path' => 'node/%',
    'link_title' => 'Donate - By Cheque/Demand Draft',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-footer-1:node/314
  $menu_links['menu-footer-1:node/314'] = array(
    'menu_name' => 'menu-footer-1',
    'link_path' => 'node/314',
    'router_path' => 'node/%',
    'link_title' => 'List of Donors',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
  );
  // Exported menu link: menu-footer-2:join-us
  $menu_links['menu-footer-2:join-us'] = array(
    'menu_name' => 'menu-footer-2',
    'link_path' => 'join-us',
    'router_path' => 'join-us',
    'link_title' => 'Join Us',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-footer-2:spread-message
  $menu_links['menu-footer-2:spread-message'] = array(
    'menu_name' => 'menu-footer-2',
    'link_path' => 'spread-message',
    'router_path' => 'spread-message',
    'link_title' => 'Spread our message',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-footer-2:talk-to-us
  $menu_links['menu-footer-2:talk-to-us'] = array(
    'menu_name' => 'menu-footer-2',
    'link_path' => 'talk-to-us',
    'router_path' => 'talk-to-us',
    'link_title' => 'Highlight an issue',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
  );
  // Exported menu link: menu-footer-3:<front>
  $menu_links['menu-footer-3:<front>'] = array(
    'menu_name' => 'menu-footer-3',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Photographs',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
  );
  // Exported menu link: menu-footer-3:node/301
  $menu_links['menu-footer-3:node/301'] = array(
    'menu_name' => 'menu-footer-3',
    'link_path' => 'node/301',
    'router_path' => 'node/%',
    'link_title' => 'Videos',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-how-can-you-help:http://aamaadmiparty.org/donate/Donate.aspx
  $menu_links['menu-how-can-you-help:http://aamaadmiparty.org/donate/Donate.aspx'] = array(
    'menu_name' => 'menu-how-can-you-help',
    'link_path' => 'http://aamaadmiparty.org/donate/Donate.aspx',
    'router_path' => '',
    'link_title' => 'Donate',
    'options' => array(
      'attributes' => array(
        'title' => 'Donate',
        'class' => array(
          0 => 'link-donate',
        ),
        'target' => '_blank',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-how-can-you-help:http://donate.aamaadmiparty.org
  $menu_links['menu-how-can-you-help:http://donate.aamaadmiparty.org'] = array(
    'menu_name' => 'menu-how-can-you-help',
    'link_path' => 'http://donate.aamaadmiparty.org',
    'router_path' => '',
    'link_title' => 'Donate',
    'options' => array(
      'attributes' => array(
        'title' => 'Donate',
        'class' => array(
          0 => 'link-donate',
        ),
        'target' => '_blank',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-how-can-you-help:http://link5.com
  $menu_links['menu-how-can-you-help:http://link5.com'] = array(
    'menu_name' => 'menu-how-can-you-help',
    'link_path' => 'http://link5.com',
    'router_path' => '',
    'link_title' => 'Invite Friends',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'link-invite-friends',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: menu-how-can-you-help:join-us
  $menu_links['menu-how-can-you-help:join-us'] = array(
    'menu_name' => 'menu-how-can-you-help',
    'link_path' => 'join-us',
    'router_path' => 'join-us',
    'link_title' => 'Join Us',
    'options' => array(
      'attributes' => array(
        'title' => 'Join AAP',
        'class' => array(
          0 => 'link-join-us',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-how-can-you-help:spread-message
  $menu_links['menu-how-can-you-help:spread-message'] = array(
    'menu_name' => 'menu-how-can-you-help',
    'link_path' => 'spread-message',
    'router_path' => 'spread-message',
    'link_title' => 'Spread Message',
    'options' => array(
      'attributes' => array(
        'title' => 'Talk to your friends about AAP',
        'class' => array(
          0 => 'link-spread-message',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: menu-how-can-you-help:talk-to-us
  $menu_links['menu-how-can-you-help:talk-to-us'] = array(
    'menu_name' => 'menu-how-can-you-help',
    'link_path' => 'talk-to-us',
    'router_path' => 'talk-to-us',
    'link_title' => 'Talk To Us',
    'options' => array(
      'attributes' => array(
        'title' => 'Share your thoughts',
        'class' => array(
          0 => 'link-talk-to-us',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-right-navigation:<front>
  $menu_links['menu-right-navigation:<front>'] = array(
    'menu_name' => 'menu-right-navigation',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Volunteer',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'right-nav_3-class',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-right-navigation:https://donate.aamaadmiparty.org/
  $menu_links['menu-right-navigation:https://donate.aamaadmiparty.org/'] = array(
    'menu_name' => 'menu-right-navigation',
    'link_path' => 'https://donate.aamaadmiparty.org/',
    'router_path' => '',
    'link_title' => 'Donate',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'right-nav_1-class',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-right-navigation:join-us
  $menu_links['menu-right-navigation:join-us'] = array(
    'menu_name' => 'menu-right-navigation',
    'link_path' => 'join-us',
    'router_path' => 'join-us',
    'link_title' => 'Join AAP',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'right-nav_2-class',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-social-connectors:<front>
  $menu_links['menu-social-connectors:<front>'] = array(
    'menu_name' => 'menu-social-connectors',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Youtu',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'youtube-social-connector',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-4',
  );
  // Exported menu link: menu-social-connectors:https://twitter.com/AamAadmiParty
  $menu_links['menu-social-connectors:https://twitter.com/AamAadmiParty'] = array(
    'menu_name' => 'menu-social-connectors',
    'link_path' => 'https://twitter.com/AamAadmiParty',
    'router_path' => '',
    'link_title' => 'Twite',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'twitter-social-connector',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-5',
  );
  // Exported menu link: menu-social-connectors:https://www.facebook.com/AamAadmiParty
  $menu_links['menu-social-connectors:https://www.facebook.com/AamAadmiParty'] = array(
    'menu_name' => 'menu-social-connectors',
    'link_path' => 'https://www.facebook.com/AamAadmiParty',
    'router_path' => '',
    'link_title' => 'Face',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'fb-connector',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-6',
  );
  // Exported menu link: menu-support-us:<front>
  $menu_links['menu-support-us:<front>'] = array(
    'menu_name' => 'menu-support-us',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Common Misconceptions about AAP',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-support-us:join-us
  $menu_links['menu-support-us:join-us'] = array(
    'menu_name' => 'menu-support-us',
    'link_path' => 'join-us',
    'router_path' => 'join-us',
    'link_title' => 'Join Us',
    'options' => array(
      'attributes' => array(
        'title' => 'Join AAP',
        'class' => array(
          0 => 'link-join-us',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-support-us:spread-message
  $menu_links['menu-support-us:spread-message'] = array(
    'menu_name' => 'menu-support-us',
    'link_path' => 'spread-message',
    'router_path' => 'spread-message',
    'link_title' => 'Spread Message',
    'options' => array(
      'attributes' => array(
        'title' => 'Talk to your friends about AAP',
        'class' => array(
          0 => 'link-spread-message',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t(' Internal Lokpal');
  t('About Us');
  t('Blogs');
  t('Common Misconceptions about AAP');
  t('Constitution');
  t('Contact Us');
  t('Delhi Election 2013');
  t('Donate');
  t('Donate - By Cheque/Demand Draft');
  t('Donation Policies');
  t('Events');
  t('Face');
  t('Goal of Swaraj');
  t('Highlight an issue');
  t('How are we Different?');
  t('Invite Friends');
  t('Jan Lokpal Bill');
  t('Join AAP');
  t('Join Us');
  t('Key Agenda Items ');
  t('Key Issues');
  t('List of Donors');
  t('Live TV');
  t('Manifesto');
  t('National Executive');
  t('News');
  t('Opinion Polls');
  t('Organization and Structure');
  t('Party Offices');
  t('Photographs');
  t('Political Affairs Committee');
  t('Political Decentralization');
  t('Right to Recall');
  t('Right to Reject');
  t('Rising Prices');
  t('Spread Message');
  t('Spread our message');
  t('Talk To Us');
  t('Twite');
  t('Videos');
  t('Vision');
  t('Volunteer');
  t('Youtu');


  return $menu_links;
}
