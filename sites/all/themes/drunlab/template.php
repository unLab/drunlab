<?php
/**
 * @file
 * Drunlab theme functions.
 */

/**
 * Implements theme_panels_default_style_render_region().
 */
function drunlab_panels_default_style_render_region($vars) {
  return implode($vars['panes']);
}
