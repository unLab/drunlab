<?php
/**
 * @file
 * Drunlab theme functions.
 */

/**
 * Implements hook_css_alter().
 */
function drunlab_css_alter(&$css) {
  $system = drupal_get_path('module', 'system');
  unset($css[$system . '/system.menus.css']);
}

/**
 * Implements theme_panels_default_style_render_region().
 */
function drunlab_panels_default_style_render_region($vars) {
  return implode($vars['panes']);
}
