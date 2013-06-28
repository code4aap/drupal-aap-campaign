<?php
/**
 * @file
 * f_home_content_view.features.inc
 */

/**
 * Implements hook_views_api().
 */
function f_home_content_view_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function f_home_content_view_flag_default_flags() {
  $flags = array();
  // Exported flag: "Bookmarks".
  $flags['bookmarks'] = array(
    'content_type' => 'node',
    'title' => 'Bookmarks',
    'global' => '0',
    'types' => array(
      0 => 'blog',
    ),
    'flag_short' => 'Bookmark this',
    'flag_long' => 'Add this post to your bookmarks',
    'flag_message' => 'This post has been added to your bookmarks',
    'unflag_short' => 'Unbookmark this',
    'unflag_long' => 'Remove this post from your bookmarks',
    'unflag_message' => 'This post has been removed from your bookmarks',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => 2,
      ),
      'unflag' => array(
        0 => 2,
      ),
    ),
    'weight' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_contextual_link' => FALSE,
    'i18n' => 0,
    'api_version' => 2,
    'module' => 'f_home_content_view',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "flags contents, which has to  be shown on home page above the banner".
  $flags['flag_content_banner_above'] = array(
    'content_type' => 'node',
    'title' => 'flags contents, which has to  be shown on home page above the banner',
    'global' => '1',
    'types' => array(
      0 => 'basic_page',
      1 => 'blog',
      2 => 'news',
    ),
    'flag_short' => 'Publish this content at home page above banner',
    'flag_long' => 'Click here to show this content on home page above banner',
    'flag_message' => 'This content has been published to home page above banner',
    'unflag_short' => 'Unpublish this content at home page above banner',
    'unflag_long' => 'Click here to unpublish this content on home page above banner',
    'unflag_message' => 'This content has been unpublished from home page above banner',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '4',
        1 => '9',
      ),
      'unflag' => array(
        0 => '4',
        1 => '9',
      ),
    ),
    'weight' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_contextual_link' => 0,
    'i18n' => 0,
    'api_version' => 2,
    'module' => 'f_home_content_view',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "flags contents, which has to  be shown on home page below the banner".
  $flags['flag_content_banner_below'] = array(
    'content_type' => 'node',
    'title' => 'flags contents, which has to  be shown on home page below the banner',
    'global' => '1',
    'types' => array(
      0 => 'basic_page',
      1 => 'blog',
      2 => 'news',
    ),
    'flag_short' => 'Publish this content at home page below banner',
    'flag_long' => 'Click here to show this content on home page below banner',
    'flag_message' => 'This content has been published to home page below banner',
    'unflag_short' => 'Unpublish this content at home page below banner',
    'unflag_long' => 'Click here to unpublish this content on home page below banner',
    'unflag_message' => 'This content has been unpublished from home page below banner',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '5',
        1 => '9',
      ),
      'unflag' => array(
        0 => '5',
        1 => '9',
      ),
    ),
    'weight' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_contextual_link' => 1,
    'i18n' => 0,
    'api_version' => 2,
    'module' => 'f_home_content_view',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}
