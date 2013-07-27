<?php
/**
 * @file
 * f_font_style.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_font_style_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_fontyourface_features_default_font().
 */
function f_font_style_fontyourface_features_default_font() {
  return array(
    'Franklin Gothic Demi Cond normal normal' => array(
      'name' => 'Franklin Gothic Demi Cond normal normal',
      'enabled' => '1',
      'url' => 'http://localhost/#47d95b394d81fd8d30e3acc4a5f34403',
      'provider' => 'local_fonts',
      'css_selector' => 'h1, h2, h3, h4, h5, h6, h1, h2, h3, p, div, a',
      'css_family' => 'Franklin Gothic Demi Cond',
      'css_style' => 'normal',
      'css_weight' => 'normal',
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:88:"public://fontyourface/local_fonts/Franklin_Gothic_Demi_Cond-normal-normal/stylesheet.css";s:8:"font_uri";a:4:{s:3:"eot";s:85:"public://fontyourface/local_fonts/Franklin_Gothic_Demi_Cond-normal-normal/FRADMCN.eot";s:8:"truetype";s:85:"public://fontyourface/local_fonts/Franklin_Gothic_Demi_Cond-normal-normal/FRADMCN.TTF";s:4:"woff";s:86:"public://fontyourface/local_fonts/Franklin_Gothic_Demi_Cond-normal-normal/FRADMCN.woff";s:3:"svg";s:85:"public://fontyourface/local_fonts/Franklin_Gothic_Demi_Cond-normal-normal/FRADMCN.svg";}}',
    ),
  );
}
