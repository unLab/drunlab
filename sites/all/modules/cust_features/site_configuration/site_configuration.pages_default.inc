<?php
/**
 * @file
 * site_configuration.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function site_configuration_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template_panel_context';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Default',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'drunlab_main';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'header' => NULL,
      'left' => NULL,
      'center' => NULL,
      'right' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4ec893ef-41c7-488a-855c-89a52687e5af';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-65eb10fa-2e77-4207-a90d-1f7aa8d77a77';
    $pane->panel = 'center';
    $pane->type = 'page_messages';
    $pane->subtype = 'page_messages';
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
    $pane->uuid = '65eb10fa-2e77-4207-a90d-1f7aa8d77a77';
    $display->content['new-65eb10fa-2e77-4207-a90d-1f7aa8d77a77'] = $pane;
    $display->panels['center'][0] = 'new-65eb10fa-2e77-4207-a90d-1f7aa8d77a77';
    $pane = new stdClass();
    $pane->pid = 'new-ea724e5d-6793-4f50-9833-a7a69c9e7f79';
    $pane->panel = 'center';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => '',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ea724e5d-6793-4f50-9833-a7a69c9e7f79';
    $display->content['new-ea724e5d-6793-4f50-9833-a7a69c9e7f79'] = $pane;
    $display->panels['center'][1] = 'new-ea724e5d-6793-4f50-9833-a7a69c9e7f79';
    $pane = new stdClass();
    $pane->pid = 'new-8ad01ff2-bbce-4202-b126-15edcd44786d';
    $pane->panel = 'center';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'both',
      'id' => 'tabs',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '8ad01ff2-bbce-4202-b126-15edcd44786d';
    $display->content['new-8ad01ff2-bbce-4202-b126-15edcd44786d'] = $pane;
    $display->panels['center'][2] = 'new-8ad01ff2-bbce-4202-b126-15edcd44786d';
    $pane = new stdClass();
    $pane->pid = 'new-37f29b4f-67ca-4c6e-becb-bd2a7f393b2c';
    $pane->panel = 'center';
    $pane->type = 'page_content';
    $pane->subtype = 'page_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_page_content_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '37f29b4f-67ca-4c6e-becb-bd2a7f393b2c';
    $display->content['new-37f29b4f-67ca-4c6e-becb-bd2a7f393b2c'] = $pane;
    $display->panels['center'][3] = 'new-37f29b4f-67ca-4c6e-becb-bd2a7f393b2c';
    $pane = new stdClass();
    $pane->pid = 'new-1a6771c4-7a08-4d64-a711-02074fe57ed5';
    $pane->panel = 'header';
    $pane->type = 'pane_header';
    $pane->subtype = 'pane_header';
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
    $pane->uuid = '1a6771c4-7a08-4d64-a711-02074fe57ed5';
    $display->content['new-1a6771c4-7a08-4d64-a711-02074fe57ed5'] = $pane;
    $display->panels['header'][0] = 'new-1a6771c4-7a08-4d64-a711-02074fe57ed5';
    $pane = new stdClass();
    $pane->pid = 'new-2d0c6905-c10b-4e61-a342-47b92036d875';
    $pane->panel = 'left';
    $pane->type = 'menu_tree';
    $pane->subtype = 'main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'main-menu',
      'parent_mlid' => 'main-menu:0',
      'title_link' => 0,
      'admin_title' => '',
      'level' => '1',
      'follow' => 0,
      'depth' => '1',
      'expanded' => 0,
      'sort' => 0,
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
    $pane->uuid = '2d0c6905-c10b-4e61-a342-47b92036d875';
    $display->content['new-2d0c6905-c10b-4e61-a342-47b92036d875'] = $pane;
    $display->panels['left'][0] = 'new-2d0c6905-c10b-4e61-a342-47b92036d875';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-ea724e5d-6793-4f50-9833-a7a69c9e7f79';
  $handler->conf['display'] = $display;
  $export['site_template_panel_context'] = $handler;

  return $export;
}
