<?php
/**
 * @file
 * site_configuration.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function site_configuration_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_cache_client';
  $strongarm->value = 1;
  $export['admin_menu_cache_client'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_components';
  $strongarm->value = array(
    'admin_menu.icon' => TRUE,
    'admin_menu.menu' => TRUE,
    'admin_menu.users' => TRUE,
    'admin_menu.account' => TRUE,
    'shortcut.links' => FALSE,
    'admin_menu.search' => FALSE,
  );
  $export['admin_menu_components'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_devel_modules_skip';
  $strongarm->value = array(
    'admin_devel' => 0,
    'field_ui' => 0,
    'views_ui' => 0,
  );
  $export['admin_menu_devel_modules_skip'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_margin_top';
  $strongarm->value = 1;
  $export['admin_menu_margin_top'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_position_fixed';
  $strongarm->value = 1;
  $export['admin_menu_position_fixed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_tweak_modules';
  $strongarm->value = 0;
  $export['admin_menu_tweak_modules'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_tweak_permissions';
  $strongarm->value = 0;
  $export['admin_menu_tweak_permissions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_tweak_tabs';
  $strongarm->value = 0;
  $export['admin_menu_tweak_tabs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'shiny';
  $export['admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clean_url';
  $strongarm->value = '1';
  $export['clean_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'coffee_settings_menus';
  $strongarm->value = array(
    'management' => 'management',
    'user-menu' => 'user-menu',
    'features' => 0,
    'main-menu' => 0,
    'navigation' => 0,
  );
  $export['coffee_settings_menus'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ctools_content_all_views';
  $strongarm->value = 0;
  $export['ctools_content_all_views'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_api_version';
  $strongarm->value = '7.2';
  $export['date_api_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_default_timezone';
  $strongarm->value = 'America/Toronto';
  $export['date_default_timezone'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_timepicker';
  $strongarm->value = 'default';
  $export['date_popup_timepicker'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_classes_fields';
  $strongarm->value = '';
  $export['ds_classes_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_classes_regions';
  $strongarm->value = '';
  $export['ds_classes_regions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_common_markup_hidden';
  $strongarm->value = '';
  $export['ds_common_markup_hidden'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_common_markup_hide_defaults';
  $strongarm->value = 1;
  $export['ds_common_markup_hide_defaults'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_common_markup_hide_panels';
  $strongarm->value = 1;
  $export['ds_common_markup_hide_panels'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_common_markup_layouts';
  $strongarm->value = array(
    'dscm-media' => '1',
    'dscm-figure' => '1',
  );
  $export['ds_common_markup_layouts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_common_markup_visible';
  $strongarm->value = 'ds_reset';
  $export['ds_common_markup_visible'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filter_fallback_format';
  $strongarm->value = 'plain_text';
  $export['filter_fallback_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_trail_by_path_active_paths';
  $strongarm->value = array(
    'active_on' => '0',
    'paths' => '',
  );
  $export['menu_trail_by_path_active_paths'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_trail_by_path_breadcrumb_handling';
  $strongarm->value = 1;
  $export['menu_trail_by_path_breadcrumb_handling'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'module_filter_count_enabled';
  $strongarm->value = 1;
  $export['module_filter_count_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'module_filter_dynamic_save_position';
  $strongarm->value = 1;
  $export['module_filter_dynamic_save_position'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'module_filter_hide_empty_tabs';
  $strongarm->value = 0;
  $export['module_filter_hide_empty_tabs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'module_filter_recent_modules';
  $strongarm->value = array();
  $export['module_filter_recent_modules'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'module_filter_remember_active_tab';
  $strongarm->value = 0;
  $export['module_filter_remember_active_tab'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'module_filter_remember_update_state';
  $strongarm->value = 0;
  $export['module_filter_remember_update_state'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'module_filter_set_focus';
  $strongarm->value = 0;
  $export['module_filter_set_focus'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'module_filter_tabs';
  $strongarm->value = 1;
  $export['module_filter_tabs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'module_filter_track_recent_modules';
  $strongarm->value = 0;
  $export['module_filter_track_recent_modules'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'module_filter_use_switch';
  $strongarm->value = 0;
  $export['module_filter_use_switch'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'module_filter_use_url_fragment';
  $strongarm->value = 1;
  $export['module_filter_use_url_fragment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'module_filter_visual_aid';
  $strongarm->value = 1;
  $export['module_filter_visual_aid'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_admin_theme';
  $strongarm->value = 1;
  $export['node_admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_page';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_page';
  $strongarm->value = 0;
  $export['node_submitted_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_everywhere_site_template_enabled';
  $strongarm->value = TRUE;
  $export['panels_everywhere_site_template_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_page_allowed_layouts';
  $strongarm->value = 'O:22:"panels_allowed_layouts":4:{s:9:"allow_new";b:1;s:11:"module_name";s:11:"panels_page";s:23:"allowed_layout_settings";a:10:{s:8:"flexible";b:0;s:17:"threecol_33_34_33";b:0;s:25:"threecol_25_50_25_stacked";b:0;s:25:"threecol_33_34_33_stacked";b:0;s:6:"onecol";b:1;s:13:"twocol_bricks";b:0;s:17:"threecol_25_50_25";b:0;s:14:"twocol_stacked";b:0;s:6:"twocol";b:0;s:12:"drunlab_main";b:1;}s:10:"form_state";N;}';
  $export['panels_page_allowed_layouts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_page_allowed_types';
  $strongarm->value = array(
    'block-comment-recent' => 0,
    'block-diff-inline' => 0,
    'block-menu-features' => 0,
    'block-node-syndicate' => 0,
    'block-node-recent' => 0,
    'block-search-form' => 0,
    'block-shortcut-shortcuts' => 0,
    'block-system-powered-by' => 0,
    'block-system-help' => 0,
    'block-system-navigation' => 0,
    'block-system-management' => 0,
    'block-system-user-menu' => 0,
    'block-system-main-menu' => 0,
    'block-user-login' => 0,
    'block-user-new' => 0,
    'block-user-online' => 0,
    'page_tabs-page_tabs' => 'page_tabs-page_tabs',
    'page_title-page_title' => 'page_title-page_title',
    'page_breadcrumb-page_breadcrumb' => 'page_breadcrumb-page_breadcrumb',
    'page_messages-page_messages' => 'page_messages-page_messages',
    'pane_navigation-pane_navigation' => 'pane_navigation-pane_navigation',
    'page_content-page_content' => 'page_content-page_content',
    'pane_header-pane_header' => 'pane_header-pane_header',
    'page_slogan-page_slogan' => 0,
    'page_primary_links-page_primary_links' => 0,
    'page_actions-page_actions' => 0,
    'page_help-page_help' => 0,
    'page_logo-page_logo' => 0,
    'page_site_name-page_site_name' => 0,
    'page_secondary_links-page_secondary_links' => 0,
    'page_feed_icons-page_feed_icons' => 0,
    'form-form' => 0,
    'user_profile-user_profile' => 0,
    'user_picture-user_picture' => 0,
    'user_signature-user_signature' => 0,
    'comment_reply_form-comment_reply_form' => 0,
    'node_updated-node_updated' => 0,
    'node_body-node_body' => 0,
    'node_created-node_created' => 0,
    'node_links-node_links' => 0,
    'node_attachments-node_attachments' => 0,
    'node_title-node_title' => 0,
    'node_comment_form-node_comment_form' => 0,
    'node_type_desc-node_type_desc' => 0,
    'node_comments-node_comments' => 0,
    'node_author-node_author' => 0,
    'node_terms-node_terms' => 0,
    'node_content-node_content' => 0,
    'node_form_buttons-node_form_buttons' => 0,
    'node_form_title-node_form_title' => 0,
    'node_form_comment-node_form_comment' => 0,
    'node_form_menu-node_form_menu' => 0,
    'node_form_author-node_form_author' => 0,
    'node_form_log-node_form_log' => 0,
    'node_form_language-node_form_language' => 0,
    'node_form_publishing-node_form_publishing' => 0,
    'node_form_path-node_form_path' => 0,
    'search_result-search_result' => 0,
    'search_form-search_form' => 0,
    'vocabulary_terms-vocabulary_terms' => 0,
    'node-node' => 0,
    'term_description-term_description' => 0,
    'term_list-term_list' => 0,
    'membership_links-membership_links' => 0,
    'pane_messages-pane_messages' => 0,
    'views_header-views_header' => 0,
    'views_feed-views_feed' => 0,
    'views_pager-views_pager' => 0,
    'views_row-views_row' => 0,
    'views_view-views_view' => 0,
    'views_empty-views_empty' => 0,
    'views_footer-views_footer' => 0,
    'views_exposed-views_exposed' => 0,
    'views_attachments-views_attachments' => 0,
    'dsc-dsc' => 0,
    'entity_form_field-comment:comment_body' => 0,
    'entity_form_field-node:body' => 0,
    'entity_form_field-node:field_tags' => 0,
    'entity_form_field-node:field_image' => 0,
    'entity_form_field-node:field_images' => 0,
    'entity_form_field-node:og_group_ref' => 0,
    'entity_form_field-node:field_event_date' => 0,
    'entity_form_field-node:field_contact_name' => 0,
    'entity_form_field-node:field_contact_phone' => 0,
    'entity_form_field-node:field_contact_email' => 0,
    'entity_form_field-node:field_event_price' => 0,
    'entity_form_field-node:group_group' => 0,
    'entity_form_field-node:field_started' => 0,
    'entity_form_field-node:field_completed' => 0,
    'entity_form_field-node:field_project_status' => 0,
    'entity_form_field-node:field_project_category' => 0,
    'entity_form_field-og_membership:og_membership_request' => 0,
    'entity_form_field-user:og_user_node' => 0,
    'entity_field-comment:comment_body' => 0,
    'entity_field-node:body' => 0,
    'entity_field-node:field_tags' => 0,
    'entity_field-node:field_image' => 0,
    'entity_field-node:field_images' => 0,
    'entity_field-node:og_group_ref' => 0,
    'entity_field-node:field_event_date' => 0,
    'entity_field-node:field_contact_name' => 0,
    'entity_field-node:field_contact_phone' => 0,
    'entity_field-node:field_contact_email' => 0,
    'entity_field-node:field_event_price' => 0,
    'entity_field-node:group_group' => 0,
    'entity_field-node:field_started' => 0,
    'entity_field-node:field_completed' => 0,
    'entity_field-node:field_project_status' => 0,
    'entity_field-node:field_project_category' => 0,
    'entity_field-og_membership:og_membership_request' => 0,
    'entity_field-user:og_user_node' => 0,
    'entity_field_extra-taxonomy_term:description' => 0,
    'entity_field_extra-user:summary' => 0,
    'custom-custom' => 'custom-custom',
    'token-node:comment-count' => 0,
    'token-node:comment-count-new' => 0,
    'token-node:diff' => 0,
    'token-node:diff-markdown' => 0,
    'token-node:nid' => 0,
    'token-node:vid' => 0,
    'token-node:tnid' => 0,
    'token-node:type' => 0,
    'token-node:type-name' => 0,
    'token-node:title' => 0,
    'token-node:body' => 0,
    'token-node:summary' => 0,
    'token-node:language' => 0,
    'token-node:url' => 0,
    'token-node:edit-url' => 0,
    'token-node:created' => 0,
    'token-node:changed' => 0,
    'token-node:author' => 0,
    'token-comment:cid' => 0,
    'token-comment:hostname' => 0,
    'token-comment:name' => 0,
    'token-comment:mail' => 0,
    'token-comment:homepage' => 0,
    'token-comment:title' => 0,
    'token-comment:body' => 0,
    'token-comment:url' => 0,
    'token-comment:edit-url' => 0,
    'token-comment:created' => 0,
    'token-comment:changed' => 0,
    'token-comment:parent' => 0,
    'token-comment:node' => 0,
    'token-comment:author' => 0,
    'token-date-field-value:date' => 0,
    'token-date-field-value:to-date' => 0,
    'token-site:name' => 0,
    'token-site:slogan' => 0,
    'token-site:mail' => 0,
    'token-site:url' => 0,
    'token-site:url-brief' => 0,
    'token-site:login-url' => 0,
    'token-date:short' => 0,
    'token-date:medium' => 0,
    'token-date:long' => 0,
    'token-date:custom' => 0,
    'token-date:since' => 0,
    'token-date:raw' => 0,
    'token-file:fid' => 0,
    'token-file:name' => 0,
    'token-file:path' => 0,
    'token-file:mime' => 0,
    'token-file:size' => 0,
    'token-file:url' => 0,
    'token-file:timestamp' => 0,
    'token-file:owner' => 0,
    'token-term:tid' => 0,
    'token-term:name' => 0,
    'token-term:description' => 0,
    'token-term:node-count' => 0,
    'token-term:url' => 0,
    'token-term:vocabulary' => 0,
    'token-term:parent' => 0,
    'token-vocabulary:vid' => 0,
    'token-vocabulary:name' => 0,
    'token-vocabulary:description' => 0,
    'token-vocabulary:node-count' => 0,
    'token-vocabulary:term-count' => 0,
    'token-user:uid' => 0,
    'token-user:name' => 0,
    'token-user:mail' => 0,
    'token-user:url' => 0,
    'token-user:edit-url' => 0,
    'token-user:last-login' => 0,
    'token-user:created' => 0,
    'token-view:name' => 0,
    'token-view:description' => 0,
    'token-view:machine-name' => 0,
    'token-view:title' => 0,
    'token-view:url' => 0,
    'entity_view-comment' => 0,
    'entity_view-node' => 0,
    'entity_view-og_membership_type' => 0,
    'entity_view-og_membership' => 0,
    'entity_view-taxonomy_term' => 0,
    'entity_view-user' => 0,
    'menu_tree-_active' => 'menu_tree-_active',
    'menu_tree-main-menu' => 'menu_tree-main-menu',
    'menu_tree-navigation' => 'menu_tree-navigation',
    'menu_tree-user-menu' => 'menu_tree-user-menu',
    'menu_tree-features' => 0,
    'menu_tree-management' => 0,
    'views_panes-og_members-panel_pane_1' => 'views_panes-og_members-panel_pane_1',
    'views_panes-og_nodes-panel_pane_1' => 'views_panes-og_nodes-panel_pane_1',
    'views_panes-og_user_groups-panel_pane_1' => 'views_panes-og_user_groups-panel_pane_1',
    'views_panes-og_all_user_group_content-panel_pane_1' => 'views_panes-og_all_user_group_content-panel_pane_1',
  );
  $export['panels_page_allowed_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_page_default';
  $strongarm->value = array(
    'custom' => 'custom',
    'menu_tree' => 'menu_tree',
    'views_panes' => 'views_panes',
    'block' => 0,
    'entity_form_field' => 0,
    'entity_field' => 0,
    'entity_field_extra' => 0,
    'token' => 0,
    'entity_view' => 0,
    'other' => 0,
  );
  $export['panels_page_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_default_country';
  $strongarm->value = 'CA';
  $export['site_default_country'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'unlab.c572.ca';
  $export['site_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'drunlab';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_drunlab_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
  );
  $export['theme_drunlab_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_shiny_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
  );
  $export['theme_shiny_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'update_notify_emails';
  $strongarm->value = array(
    0 => 'mike@unlab.ca',
  );
  $export['update_notify_emails'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_admin_role';
  $strongarm->value = '3';
  $export['user_admin_role'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_pictures';
  $strongarm->value = '1';
  $export['user_pictures'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_dimensions';
  $strongarm->value = '1024x1024';
  $export['user_picture_dimensions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_file_size';
  $strongarm->value = '800';
  $export['user_picture_file_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_style';
  $strongarm->value = 'thumbnail';
  $export['user_picture_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_register';
  $strongarm->value = 2;
  $export['user_register'] = $strongarm;

  return $export;
}
