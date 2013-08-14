<?php
/**
 * @file
 * f_site_views.features.inc
 */

/**
 * Implements hook_views_api().
 */
function f_site_views_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function f_site_views_flag_default_flags() {
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
    'module' => 'f_site_views',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  // Exported flag: "Show in Banner".
  $flags['show_in_banner'] = array(
    'content_type' => 'node',
    'title' => 'Show in Banner',
    'global' => '1',
    'types' => array(
      0 => 'basic_page',
      1 => 'event',
      2 => 'news',
    ),
    'flag_short' => 'Show content on Banner',
    'flag_long' => 'Content Image has shown on banner.',
    'flag_message' => 'Content Image is showing on banner',
    'unflag_short' => 'Remove content from banner',
    'unflag_long' => 'Content Image has removed from banner.',
    'unflag_message' => 'Content Image is not showing on banner',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '2',
        1 => '5',
      ),
      'unflag' => array(
        0 => '2',
        1 => '5',
      ),
    ),
    'weight' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'f_site_views',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  return $flags;

}

/**
 * Implements hook_image_default_styles().
 */
function f_site_views_image_default_styles() {
  $styles = array();

  // Exported image style: image_slideshow.
  $styles['image_slideshow'] = array(
    'name' => 'image_slideshow',
    'effects' => array(
      1 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => '670',
          'height' => '270',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}
