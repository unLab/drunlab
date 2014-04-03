<?php

/**
 * Basic markup for a slider ul
 */
function theme_ds_field_slider($variables) {
  $output = '';
  $config = $variables['ds-config'];
  $classes = isset($config['classes']) ? ' ' . $config['classes'] : '';

  // Add a simple wrapper.
  $output .= '<div class="field field-name-' . strtr($variables['element']['#field_name'], '_', '-') . $classes . '">';

  // Render the label.
  if (!$variables['label_hidden']) {
    $output .= '<div class="label-' . $variables['element']['#label_display'] . '">' . $variables['label'];
    if (!isset($config['lb-col'])) {
      $output .= ':&nbsp;';
    }
    $output .= '</div>';
  }

  // Render the items.
  if (!empty($variables['items'])) {
    $output .= '<div class="slider"><ul class="slides">';
    foreach ($variables['items'] as $delta => $item) {
      $output .= '<li class="slide">' . drupal_render($item) . '</li>';
    }
    $output .="</ul></div>";
  }

  $output .= "</div>";

  return $output;
}

/**
 * Unordered list markup
 */
function theme_ds_field_ul($variables) {
  return _ds_common_markup_list($variables, 'ul');
}

/**
 * Ordered list markup
 */
function theme_ds_field_ol($variables) {
  return _ds_common_markup_list($variables, 'ol');
}

/**
 * Minimal markup that plays well with display:inline block
 */
function theme_ds_inline_blocks($variables) {
  $output = '';
  $config = $variables['ds-config'];
  $classes = isset($config['classes']) ? '' . $config['classes'] : '';

  // Add a simple wrapper
  $output .= '<div class="field field-name-' . strtr($variables['element']['#field_name'], '_', '-') . $classes . '">';

  // Render the label.
  if (!$variables['label_hidden']) {
    $output .= '<div class="label-' . $variables['element']['#label_display'] . '">' . $variables['label'];
    if (!isset($config['lb-col'])) {
      $output .= ':$nbsp;';
    }
    $output .= '</div>';
  }

  // Render the items.
  $output .= '<div class="field-items">';
  foreach ($variables['items'] as $delta => $item) {
    $output .= '<div class="field-item">' . drupal_render($item) . '</div>';
  }

  $output .= '</div></div>';

  return $output;
}

/*
 * Marks up each element as a link to the parent entity
 */
function theme_ds_field_link($variables) {
  $output = '';
  $config = $variables['ds-config'];
  $classes = isset($config['classes']) ? '' . $config['classes'] : '';
  $uri  = entity_uri($variables['element']['#entity_type'], $variables['element']['#object']);
  $uri['options']['html'] = true;

  // Add a simple wrapper
  $output .= '<div class="field field-name-' . strtr($variables['element']['#field_name'], '_', '-') . $classes . '">';

  // Render the label.
  if (!$variables['label_hidden']) {
    $output .= '<div class="label-' . $variables['element']['#label_display'] . '">' . $variables['label'];
    if (!isset($config['lb-col'])) {
      $output .= ':$nbsp;';
    }
    $output .= '</div>';
  }

  // Render the items.
  $output .= '<div class="field-items">';
  foreach ($variables['items'] as $delta => $item) {
    $link = l(drupal_render($item), $uri['path'], $uri['options']);
    $output .= '<div class="field-item">' . $link . '</div>';
  }

  $output .= '</div></div>';

  return $output;
}


/**
 * Generates list markup
 * @param  Array  $variables the data from DS
 * @param  string $list_type ul or ol
 * @return String            The list markup
 */
function _ds_common_markup_list($variables, $list_type = 'ul') {
  $output = '';
  $config = $variables['ds-config'];
  $classes = isset($config['classes']) ? ' ' . $config['classes'] : '';

  // Add a simple wrapper.
  $output .= '<div class="field field-name-' . strtr($variables['element']['#field_name'], '_', '-') . $classes . '">';

  // Render the label.
  if (!$variables['label_hidden']) {
    $output .= '<div class="label-' . $variables['element']['#label_display'] . '">' . $variables['label'];
    if (!isset($config['lb-col'])) {
      $output .= ':&nbsp;';
    }
    $output .= '</div>';
  }

  // Render the items.
  if (!empty($variables['items'])) {
    $output .= '<ul class="field-items">';
    foreach ($variables['items'] as $delta => $item) {
      $output .= '<li class="field-item">' . drupal_render($item) . '</li>';
    }
    $output .="</ul>";
  }

  $output .= "</div>";

  return $output;
}
