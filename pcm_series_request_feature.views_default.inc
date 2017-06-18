<?php
/**
 * @file
 * pcm_series_request_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pcm_series_request_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'series_request_airing_cleanup';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'cm_airing';
  $view->human_name = 'Series Request: Airing Cleanup';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Series Request: Airing Cleanup';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['empty'] = TRUE;
  $handler->display->display_options['header']['php']['php_output'] = '<?php 
print cm_series_request_status_widget(arg(4));
print "<br/>";
print cm_series_slot_grid_link(arg(4));
?>';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No Airings for this Series Request';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_airing_show_ref_target_id']['id'] = 'field_airing_show_ref_target_id';
  $handler->display->display_options['relationships']['field_airing_show_ref_target_id']['table'] = 'field_data_field_airing_show_ref';
  $handler->display->display_options['relationships']['field_airing_show_ref_target_id']['field'] = 'field_airing_show_ref_target_id';
  /* Field: Bulk operations: Airing */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'cm_airing';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::cm_series_request_schedule_airing_cleanup' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Airing: Airing ID */
  $handler->display->display_options['fields']['airing_id']['id'] = 'airing_id';
  $handler->display->display_options['fields']['airing_id']['table'] = 'cm_airing';
  $handler->display->display_options['fields']['airing_id']['field'] = 'airing_id';
  $handler->display->display_options['fields']['airing_id']['label'] = '';
  $handler->display->display_options['fields']['airing_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['airing_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['airing_id']['separator'] = '';
  /* Field: Airing: Title */
  $handler->display->display_options['fields']['field_airing_title']['id'] = 'field_airing_title';
  $handler->display->display_options['fields']['field_airing_title']['table'] = 'field_data_field_airing_title';
  $handler->display->display_options['fields']['field_airing_title']['field'] = 'field_airing_title';
  $handler->display->display_options['fields']['field_airing_title']['label'] = 'Airing';
  $handler->display->display_options['fields']['field_airing_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_airing_title']['alter']['text'] = '[field_airing_title] ';
  $handler->display->display_options['fields']['field_airing_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_airing_title']['alter']['path'] = 'airing/[airing_id] ';
  /* Field: Airing: Date */
  $handler->display->display_options['fields']['field_airing_date']['id'] = 'field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['table'] = 'field_data_field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['field'] = 'field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['label'] = 'Time';
  $handler->display->display_options['fields']['field_airing_date']['settings'] = array(
    'format_type' => 'time_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Premiere Date */
  $handler->display->display_options['fields']['field_premier_date']['id'] = 'field_premier_date';
  $handler->display->display_options['fields']['field_premier_date']['table'] = 'field_data_field_premier_date';
  $handler->display->display_options['fields']['field_premier_date']['field'] = 'field_premier_date';
  $handler->display->display_options['fields']['field_premier_date']['relationship'] = 'field_airing_show_ref_target_id';
  $handler->display->display_options['fields']['field_premier_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_premier_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_premier_date']['alter']['text'] = ' - [field_premier_date]';
  $handler->display->display_options['fields']['field_premier_date']['settings'] = array(
    'format_type' => 'short_date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Airing: Show */
  $handler->display->display_options['fields']['field_airing_show_ref']['id'] = 'field_airing_show_ref';
  $handler->display->display_options['fields']['field_airing_show_ref']['table'] = 'field_data_field_airing_show_ref';
  $handler->display->display_options['fields']['field_airing_show_ref']['field'] = 'field_airing_show_ref';
  $handler->display->display_options['fields']['field_airing_show_ref']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_airing_show_ref']['alter']['text'] = '[field_airing_show_ref][field_premier_date]';
  $handler->display->display_options['fields']['field_airing_show_ref']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: TV Guide Title */
  $handler->display->display_options['fields']['field_tv_guide_title']['id'] = 'field_tv_guide_title';
  $handler->display->display_options['fields']['field_tv_guide_title']['table'] = 'field_data_field_tv_guide_title';
  $handler->display->display_options['fields']['field_tv_guide_title']['field'] = 'field_tv_guide_title';
  $handler->display->display_options['fields']['field_tv_guide_title']['relationship'] = 'field_airing_show_ref_target_id';
  /* Field: Airing: Subsequent Airings */
  $handler->display->display_options['fields']['field_subsequent_airings']['id'] = 'field_subsequent_airings';
  $handler->display->display_options['fields']['field_subsequent_airings']['table'] = 'field_data_field_subsequent_airings';
  $handler->display->display_options['fields']['field_subsequent_airings']['field'] = 'field_subsequent_airings';
  $handler->display->display_options['fields']['field_subsequent_airings']['label'] = 'Repeats';
  $handler->display->display_options['fields']['field_subsequent_airings']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_subsequent_airings']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_subsequent_airings']['multi_type'] = 'ul';
  /* Contextual filter: Airing: Series Request (field_series_request) */
  $handler->display->display_options['arguments']['field_series_request_target_id']['id'] = 'field_series_request_target_id';
  $handler->display->display_options['arguments']['field_series_request_target_id']['table'] = 'field_data_field_series_request';
  $handler->display->display_options['arguments']['field_series_request_target_id']['field'] = 'field_series_request_target_id';
  $handler->display->display_options['arguments']['field_series_request_target_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_series_request_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_series_request_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_series_request_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_series_request_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Airing: Is Show Premiere Date? (field_is_show_premiere_date) */
  $handler->display->display_options['filters']['field_is_show_premiere_date_value']['id'] = 'field_is_show_premiere_date_value';
  $handler->display->display_options['filters']['field_is_show_premiere_date_value']['table'] = 'field_data_field_is_show_premiere_date';
  $handler->display->display_options['filters']['field_is_show_premiere_date_value']['field'] = 'field_is_show_premiere_date_value';
  $handler->display->display_options['filters']['field_is_show_premiere_date_value']['value'] = array(
    1 => '1',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/programming/series-request/airing-cleanup';
  $export['series_request_airing_cleanup'] = $view;

  $view = new view();
  $view->name = 'series_request_airings';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'cm_airing';
  $view->human_name = 'Series Request: Airings';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Series Request: Airings';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Airing: Airing ID */
  $handler->display->display_options['fields']['airing_id']['id'] = 'airing_id';
  $handler->display->display_options['fields']['airing_id']['table'] = 'cm_airing';
  $handler->display->display_options['fields']['airing_id']['field'] = 'airing_id';
  $handler->display->display_options['fields']['airing_id']['label'] = '';
  $handler->display->display_options['fields']['airing_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['airing_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['airing_id']['separator'] = '';
  /* Field: Airing: Title */
  $handler->display->display_options['fields']['field_airing_title']['id'] = 'field_airing_title';
  $handler->display->display_options['fields']['field_airing_title']['table'] = 'field_data_field_airing_title';
  $handler->display->display_options['fields']['field_airing_title']['field'] = 'field_airing_title';
  $handler->display->display_options['fields']['field_airing_title']['label'] = '';
  $handler->display->display_options['fields']['field_airing_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_airing_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_airing_title']['alter']['path'] = 'airing/[airing_id]';
  $handler->display->display_options['fields']['field_airing_title']['element_label_colon'] = FALSE;
  /* Field: Airing: Date */
  $handler->display->display_options['fields']['field_airing_date']['id'] = 'field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['table'] = 'field_data_field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['field'] = 'field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['label'] = '';
  $handler->display->display_options['fields']['field_airing_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_airing_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_airing_date']['settings'] = array(
    'format_type' => 'time_only',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Airing: Airing Grid Link */
  $handler->display->display_options['fields']['field_airing_grid_link']['id'] = 'field_airing_grid_link';
  $handler->display->display_options['fields']['field_airing_grid_link']['table'] = 'field_data_field_airing_grid_link';
  $handler->display->display_options['fields']['field_airing_grid_link']['field'] = 'field_airing_grid_link';
  $handler->display->display_options['fields']['field_airing_grid_link']['label'] = '';
  $handler->display->display_options['fields']['field_airing_grid_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_airing_grid_link']['alter']['text'] = '[field_airing_title] [field_airing_date] -- ([field_airing_grid_link]) ';
  $handler->display->display_options['fields']['field_airing_grid_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_airing_grid_link']['type'] = 'computed_field_unsanitized';
  /* Sort criterion: Airing: Date -  start date (field_airing_date) */
  $handler->display->display_options['sorts']['field_airing_date_value']['id'] = 'field_airing_date_value';
  $handler->display->display_options['sorts']['field_airing_date_value']['table'] = 'field_data_field_airing_date';
  $handler->display->display_options['sorts']['field_airing_date_value']['field'] = 'field_airing_date_value';
  /* Contextual filter: Airing: Series Request (field_series_request) */
  $handler->display->display_options['arguments']['field_series_request_target_id']['id'] = 'field_series_request_target_id';
  $handler->display->display_options['arguments']['field_series_request_target_id']['table'] = 'field_data_field_series_request';
  $handler->display->display_options['arguments']['field_series_request_target_id']['field'] = 'field_series_request_target_id';
  $handler->display->display_options['arguments']['field_series_request_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_series_request_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_series_request_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_series_request_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_series_request_target_id']['summary_options']['items_per_page'] = '25';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['series_request_airings'] = $view;

  $view = new view();
  $view->name = 'series_request_airings_scheduled';
  $view->description = 'Series request approved and scheduled - used for email confirmaion';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Series Request: Airings Scheduled';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Series Request: Batch Emailer';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    16 => '16',
    7 => '7',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'nid' => 'nid',
    'title' => 'title',
    'nid_1' => 'nid_1',
    'field_request_project' => 'field_request_project',
    'field_cm_project_types' => 'field_cm_project_types',
    'field_season_request_dates' => 'field_season_request_dates',
    'name' => 'name',
    'mail' => 'mail',
  );
  $handler->display->display_options['style_options']['default'] = 'nid';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_request_project' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cm_project_types' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_season_request_dates' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_request_project_target_id']['id'] = 'field_request_project_target_id';
  $handler->display->display_options['relationships']['field_request_project_target_id']['table'] = 'field_data_field_request_project';
  $handler->display->display_options['relationships']['field_request_project_target_id']['field'] = 'field_request_project_target_id';
  $handler->display->display_options['relationships']['field_request_project_target_id']['label'] = 'field_request_project';
  $handler->display->display_options['relationships']['field_request_project_target_id']['required'] = TRUE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['relationship'] = 'field_request_project_target_id';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'Operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::cm_series_request_schedule_confirmation_email' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Series Request Nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Series Request Title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'field_request_project_target_id';
  $handler->display->display_options['fields']['nid_1']['label'] = 'Project Nid';
  /* Field: Content: Project */
  $handler->display->display_options['fields']['field_request_project']['id'] = 'field_request_project';
  $handler->display->display_options['fields']['field_request_project']['table'] = 'field_data_field_request_project';
  $handler->display->display_options['fields']['field_request_project']['field'] = 'field_request_project';
  $handler->display->display_options['fields']['field_request_project']['label'] = 'Project Title';
  $handler->display->display_options['fields']['field_request_project']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Project Type */
  $handler->display->display_options['fields']['field_cm_project_types']['id'] = 'field_cm_project_types';
  $handler->display->display_options['fields']['field_cm_project_types']['table'] = 'field_data_field_cm_project_types';
  $handler->display->display_options['fields']['field_cm_project_types']['field'] = 'field_cm_project_types';
  $handler->display->display_options['fields']['field_cm_project_types']['relationship'] = 'field_request_project_target_id';
  $handler->display->display_options['fields']['field_cm_project_types']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Season Dates */
  $handler->display->display_options['fields']['field_season_request_dates']['id'] = 'field_season_request_dates';
  $handler->display->display_options['fields']['field_season_request_dates']['table'] = 'field_data_field_season_request_dates';
  $handler->display->display_options['fields']['field_season_request_dates']['field'] = 'field_season_request_dates';
  $handler->display->display_options['fields']['field_season_request_dates']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Producer\'s Name';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'uid';
  $handler->display->display_options['fields']['mail']['label'] = 'Producer\'s Email';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'series_request' => 'series_request',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Series Request Status (field_series_request_status) */
  $handler->display->display_options['filters']['field_series_request_status_value']['id'] = 'field_series_request_status_value';
  $handler->display->display_options['filters']['field_series_request_status_value']['table'] = 'field_data_field_series_request_status';
  $handler->display->display_options['filters']['field_series_request_status_value']['field'] = 'field_series_request_status_value';
  $handler->display->display_options['filters']['field_series_request_status_value']['value'] = array(
    'Scheduled' => 'Scheduled',
  );
  $handler->display->display_options['filters']['field_series_request_status_value']['group'] = 1;
  /* Filter criterion: Content: Season Dates -  start date (field_season_request_dates) */
  $handler->display->display_options['filters']['field_season_request_dates_value']['id'] = 'field_season_request_dates_value';
  $handler->display->display_options['filters']['field_season_request_dates_value']['table'] = 'field_data_field_season_request_dates';
  $handler->display->display_options['filters']['field_season_request_dates_value']['field'] = 'field_season_request_dates_value';
  $handler->display->display_options['filters']['field_season_request_dates_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_season_request_dates_value']['expose']['operator_id'] = 'field_season_request_dates_value_op';
  $handler->display->display_options['filters']['field_season_request_dates_value']['expose']['label'] = 'Season Start Date ';
  $handler->display->display_options['filters']['field_season_request_dates_value']['expose']['operator'] = 'field_season_request_dates_value_op';
  $handler->display->display_options['filters']['field_season_request_dates_value']['expose']['identifier'] = 'field_season_request_dates_value';
  $handler->display->display_options['filters']['field_season_request_dates_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
  );
  $handler->display->display_options['filters']['field_season_request_dates_value']['form_type'] = 'date_popup';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Series Request Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    20 => 0,
  );
  $handler->display->display_options['filters']['title']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/series-request/airings-scheduled';
  $export['series_request_airings_scheduled'] = $view;

  $view = new view();
  $view->name = 'series_request_pending';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Series Request: Pending';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Pending Series Requests';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    16 => '16',
    7 => '7',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'field_request_project' => 'field_request_project',
    'title' => 'title',
    'draggableviews' => 'draggableviews',
    'field_series_frequency' => 'field_series_frequency',
    'field_runtime_default' => 'field_runtime_default',
    'field_series_keep_schedule' => 'field_series_keep_schedule',
    'field_playback_preferences' => 'field_playback_preferences',
    'field_series_request_priority' => 'field_series_request_priority',
    'display_name' => 'display_name',
    'name' => 'name',
    'field_cablecast_project_id' => 'field_cablecast_project_id',
    'field_live' => 'field_live',
    'field_request_call_in' => 'field_live',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_request_project' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'draggableviews' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_series_frequency' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_runtime_default' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_series_keep_schedule' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_playback_preferences' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_series_request_priority' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'display_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cablecast_project_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_live' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '/',
      'empty_column' => 0,
    ),
    'field_request_call_in' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Reorder the priority by dragging the items. 
You Must hit the Save button at the bottom for your changes to be stored';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No Series Rquests';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no series requests pending at this time.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Field: Content: Project */
  $handler->display->display_options['fields']['field_request_project']['id'] = 'field_request_project';
  $handler->display->display_options['fields']['field_request_project']['table'] = 'field_data_field_request_project';
  $handler->display->display_options['fields']['field_request_project']['field'] = 'field_request_project';
  $handler->display->display_options['fields']['field_request_project']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Series Request Project Name';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'node/[nid]/edit?destination=admin/programming/series_requests/pending&override=yes';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['handler'] = 'draggableviews_handler_fieldapi';
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['draggableviews_handler_fieldapi'] = array(
    'field' => 'field_data_field_series_request_sorted_rank:field_series_request_sorted_rank_value',
  );
  /* Field: Content: Series Frequency */
  $handler->display->display_options['fields']['field_series_frequency']['id'] = 'field_series_frequency';
  $handler->display->display_options['fields']['field_series_frequency']['table'] = 'field_data_field_series_frequency';
  $handler->display->display_options['fields']['field_series_frequency']['field'] = 'field_series_frequency';
  $handler->display->display_options['fields']['field_series_frequency']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Runtime */
  $handler->display->display_options['fields']['field_runtime_default']['id'] = 'field_runtime_default';
  $handler->display->display_options['fields']['field_runtime_default']['table'] = 'field_data_field_runtime_default';
  $handler->display->display_options['fields']['field_runtime_default']['field'] = 'field_runtime_default';
  $handler->display->display_options['fields']['field_runtime_default']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Keep Current Programming Schedule? */
  $handler->display->display_options['fields']['field_series_keep_schedule']['id'] = 'field_series_keep_schedule';
  $handler->display->display_options['fields']['field_series_keep_schedule']['table'] = 'field_data_field_series_keep_schedule';
  $handler->display->display_options['fields']['field_series_keep_schedule']['field'] = 'field_series_keep_schedule';
  /* Field: Content: Playback Preferences */
  $handler->display->display_options['fields']['field_playback_preferences']['id'] = 'field_playback_preferences';
  $handler->display->display_options['fields']['field_playback_preferences']['table'] = 'field_data_field_playback_preferences';
  $handler->display->display_options['fields']['field_playback_preferences']['field'] = 'field_playback_preferences';
  $handler->display->display_options['fields']['field_playback_preferences']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_playback_preferences']['delta_offset'] = '0';
  /* Field: Content: Live */
  $handler->display->display_options['fields']['field_live']['id'] = 'field_live';
  $handler->display->display_options['fields']['field_live']['table'] = 'field_data_field_live';
  $handler->display->display_options['fields']['field_live']['field'] = 'field_live';
  $handler->display->display_options['fields']['field_live']['label'] = 'Live/Call-In';
  /* Field: Content: Call-In */
  $handler->display->display_options['fields']['field_request_call_in']['id'] = 'field_request_call_in';
  $handler->display->display_options['fields']['field_request_call_in']['table'] = 'field_data_field_request_call_in';
  $handler->display->display_options['fields']['field_request_call_in']['field'] = 'field_request_call_in';
  /* Field: Content: Initial Priority Ranking */
  $handler->display->display_options['fields']['field_series_request_priority']['id'] = 'field_series_request_priority';
  $handler->display->display_options['fields']['field_series_request_priority']['table'] = 'field_data_field_series_request_priority';
  $handler->display->display_options['fields']['field_series_request_priority']['field'] = 'field_series_request_priority';
  $handler->display->display_options['fields']['field_series_request_priority']['label'] = 'Series Request Priority';
  $handler->display->display_options['fields']['field_series_request_priority']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_series_request_priority']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: CiviCRM Contacts: Display Name */
  $handler->display->display_options['fields']['display_name']['id'] = 'display_name';
  $handler->display->display_options['fields']['display_name']['table'] = 'civicrm_contact';
  $handler->display->display_options['fields']['display_name']['field'] = 'display_name';
  $handler->display->display_options['fields']['display_name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['display_name']['label'] = 'CiviCRM Contact';
  $handler->display->display_options['fields']['display_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['display_name']['link_to_civicrm_contact'] = 1;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Producer links';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = 'Contact Record: 
[display_name]
-
Drupal Profile: 
[name] ';
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = TRUE;
  /* Field: Content: Cablecast Project ID */
  $handler->display->display_options['fields']['field_cablecast_project_id']['id'] = 'field_cablecast_project_id';
  $handler->display->display_options['fields']['field_cablecast_project_id']['table'] = 'field_data_field_cablecast_project_id';
  $handler->display->display_options['fields']['field_cablecast_project_id']['field'] = 'field_cablecast_project_id';
  /* Field: Content: Initial Priority Ranking */
  $handler->display->display_options['fields']['field_series_request_priority_1']['id'] = 'field_series_request_priority_1';
  $handler->display->display_options['fields']['field_series_request_priority_1']['table'] = 'field_data_field_series_request_priority';
  $handler->display->display_options['fields']['field_series_request_priority_1']['field'] = 'field_series_request_priority';
  $handler->display->display_options['fields']['field_series_request_priority_1']['label'] = 'Initial Request Priority';
  $handler->display->display_options['fields']['field_series_request_priority_1']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Sorted Priority Ranking */
  $handler->display->display_options['fields']['field_series_request_sorted_rank']['id'] = 'field_series_request_sorted_rank';
  $handler->display->display_options['fields']['field_series_request_sorted_rank']['table'] = 'field_data_field_series_request_sorted_rank';
  $handler->display->display_options['fields']['field_series_request_sorted_rank']['field'] = 'field_series_request_sorted_rank';
  $handler->display->display_options['fields']['field_series_request_sorted_rank']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Slot Grid';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href = "/admin/programming/slot_grid?series_request_nid=[nid]">Slot Grid</a> ';
  /* Sort criterion: Content: Sorted Priority Ranking (field_series_request_sorted_rank) */
  $handler->display->display_options['sorts']['field_series_request_sorted_rank_value']['id'] = 'field_series_request_sorted_rank_value';
  $handler->display->display_options['sorts']['field_series_request_sorted_rank_value']['table'] = 'field_data_field_series_request_sorted_rank';
  $handler->display->display_options['sorts']['field_series_request_sorted_rank_value']['field'] = 'field_series_request_sorted_rank_value';
  /* Sort criterion: Content: Initial Priority Ranking (field_series_request_priority) */
  $handler->display->display_options['sorts']['field_series_request_priority_value']['id'] = 'field_series_request_priority_value';
  $handler->display->display_options['sorts']['field_series_request_priority_value']['table'] = 'field_data_field_series_request_priority';
  $handler->display->display_options['sorts']['field_series_request_priority_value']['field'] = 'field_series_request_priority_value';
  $handler->display->display_options['sorts']['field_series_request_priority_value']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'series_request' => 'series_request',
  );
  /* Filter criterion: Content: Series Request Status (field_series_request_status) */
  $handler->display->display_options['filters']['field_series_request_status_value']['id'] = 'field_series_request_status_value';
  $handler->display->display_options['filters']['field_series_request_status_value']['table'] = 'field_data_field_series_request_status';
  $handler->display->display_options['filters']['field_series_request_status_value']['field'] = 'field_series_request_status_value';
  $handler->display->display_options['filters']['field_series_request_status_value']['value'] = array(
    'Pending' => 'Pending',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Reorder the priority by dragging the items. 
You Must hit the Save button at the bottom for your changes to be stored.

<a href="/admin/programming/series_requests/pending/reset">Click here</a> to reset the order.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['path'] = 'admin/programming/series_requests/pending';

  /* Display: Reset Sort */
  $handler = $view->new_display('page', 'Reset Sort', 'page_1');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<a href="/admin/programming/series_requests/pending">Go back to the sort</a>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'Reset Sort Order';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::cm_series_request_reset_rank' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Field: Content: Project */
  $handler->display->display_options['fields']['field_request_project']['id'] = 'field_request_project';
  $handler->display->display_options['fields']['field_request_project']['table'] = 'field_data_field_request_project';
  $handler->display->display_options['fields']['field_request_project']['field'] = 'field_request_project';
  $handler->display->display_options['fields']['field_request_project']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Series Request Project Name';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'node/[nid]/edit?destination=admin/programming/series_requests/pending&override=yes';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Initial Priority Ranking */
  $handler->display->display_options['fields']['field_series_request_priority_1']['id'] = 'field_series_request_priority_1';
  $handler->display->display_options['fields']['field_series_request_priority_1']['table'] = 'field_data_field_series_request_priority';
  $handler->display->display_options['fields']['field_series_request_priority_1']['field'] = 'field_series_request_priority';
  $handler->display->display_options['fields']['field_series_request_priority_1']['label'] = 'Initial Request Priority';
  $handler->display->display_options['fields']['field_series_request_priority_1']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Sorted Priority Ranking */
  $handler->display->display_options['fields']['field_series_request_sorted_rank']['id'] = 'field_series_request_sorted_rank';
  $handler->display->display_options['fields']['field_series_request_sorted_rank']['table'] = 'field_data_field_series_request_sorted_rank';
  $handler->display->display_options['fields']['field_series_request_sorted_rank']['field'] = 'field_series_request_sorted_rank';
  $handler->display->display_options['fields']['field_series_request_sorted_rank']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['path'] = 'admin/programming/series_requests/pending/reset';
  $export['series_request_pending'] = $view;

  $view = new view();
  $view->name = 'series_request_playback_preferences';
  $view->description = 'Lists the playback preferences for a givin series request';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Series Request: Playback Preferences';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Playback Preferences (field_playback_preferences) */
  $handler->display->display_options['relationships']['field_playback_preferences_value']['id'] = 'field_playback_preferences_value';
  $handler->display->display_options['relationships']['field_playback_preferences_value']['table'] = 'field_data_field_playback_preferences';
  $handler->display->display_options['relationships']['field_playback_preferences_value']['field'] = 'field_playback_preferences_value';
  $handler->display->display_options['relationships']['field_playback_preferences_value']['delta'] = '-1';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Field: Day */
  $handler->display->display_options['fields']['field_playback_interval']['id'] = 'field_playback_interval';
  $handler->display->display_options['fields']['field_playback_interval']['table'] = 'field_data_field_playback_interval';
  $handler->display->display_options['fields']['field_playback_interval']['field'] = 'field_playback_interval';
  $handler->display->display_options['fields']['field_playback_interval']['relationship'] = 'field_playback_preferences_value';
  $handler->display->display_options['fields']['field_playback_interval']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Time */
  $handler->display->display_options['fields']['field_day_part']['id'] = 'field_day_part';
  $handler->display->display_options['fields']['field_day_part']['table'] = 'field_data_field_day_part';
  $handler->display->display_options['fields']['field_day_part']['field'] = 'field_day_part';
  $handler->display->display_options['fields']['field_day_part']['relationship'] = 'field_playback_preferences_value';
  $handler->display->display_options['fields']['field_day_part']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Playback Comments */
  $handler->display->display_options['fields']['field_playback_comments']['id'] = 'field_playback_comments';
  $handler->display->display_options['fields']['field_playback_comments']['table'] = 'field_data_field_playback_comments';
  $handler->display->display_options['fields']['field_playback_comments']['field'] = 'field_playback_comments';
  $handler->display->display_options['fields']['field_playback_comments']['relationship'] = 'field_playback_preferences_value';
  $handler->display->display_options['fields']['field_playback_comments']['type'] = 'text_plain';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Season Dates -  start date (field_season_request_dates) */
  $handler->display->display_options['arguments']['field_season_request_dates_value']['id'] = 'field_season_request_dates_value';
  $handler->display->display_options['arguments']['field_season_request_dates_value']['table'] = 'field_data_field_season_request_dates';
  $handler->display->display_options['arguments']['field_season_request_dates_value']['field'] = 'field_season_request_dates_value';
  $handler->display->display_options['arguments']['field_season_request_dates_value']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['field_season_request_dates_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_season_request_dates_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_season_request_dates_value']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'series_request' => 'series_request',
  );
  $export['series_request_playback_preferences'] = $view;

  $view = new view();
  $view->name = 'series_request_project_settings';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Series Request: Project Settings';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Confirm Project Settings';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'field_pub_contact_email' => 'field_pub_contact_email',
    'field_pub_website' => 'field_pub_website',
    'field_format' => 'field_format',
    'field_short_description' => 'field_short_description',
    'body' => 'body',
    'field_pub_producer_name' => 'field_pub_producer_name',
    'field_pbcore_genres' => 'field_pbcore_genres',
    'field_pbcore_languages' => 'field_pbcore_languages',
    'field_pbcore_fcc_ratings' => 'field_pbcore_fcc_ratings',
    'field_objectionable_content' => 'field_objectionable_content',
    'field_filler' => 'field_filler',
    'field_filler_end_date' => 'field_filler_end_date',
  );
  $handler->display->display_options['row_options']['separator'] = '<br/>';
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<h4>Review all your project settings below. Click Edit if you need to change them, otherwise click the "Confirm Project Settings" button on the bottom.</h4>
<h4>Project settings set the default value for each field specified below. Fields with default values will be auto populated in any new content you create. You can modify the value of auto populated fields when you are creating new content.</h4>';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Content: Department */
  $handler->display->display_options['fields']['field_department']['id'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['table'] = 'field_data_field_department';
  $handler->display->display_options['fields']['field_department']['field'] = 'field_department';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_pub_contact_email']['id'] = 'field_pub_contact_email';
  $handler->display->display_options['fields']['field_pub_contact_email']['table'] = 'field_data_field_pub_contact_email';
  $handler->display->display_options['fields']['field_pub_contact_email']['field'] = 'field_pub_contact_email';
  /* Field: Content: Estimated Completion Date */
  $handler->display->display_options['fields']['field_estimated_completion_date']['id'] = 'field_estimated_completion_date';
  $handler->display->display_options['fields']['field_estimated_completion_date']['table'] = 'field_data_field_estimated_completion_date';
  $handler->display->display_options['fields']['field_estimated_completion_date']['field'] = 'field_estimated_completion_date';
  $handler->display->display_options['fields']['field_estimated_completion_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Filler */
  $handler->display->display_options['fields']['field_filler']['id'] = 'field_filler';
  $handler->display->display_options['fields']['field_filler']['table'] = 'field_data_field_filler';
  $handler->display->display_options['fields']['field_filler']['field'] = 'field_filler';
  /* Field: Content: Filler End Date */
  $handler->display->display_options['fields']['field_filler_end_date']['id'] = 'field_filler_end_date';
  $handler->display->display_options['fields']['field_filler_end_date']['table'] = 'field_data_field_filler_end_date';
  $handler->display->display_options['fields']['field_filler_end_date']['field'] = 'field_filler_end_date';
  $handler->display->display_options['fields']['field_filler_end_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Genres */
  $handler->display->display_options['fields']['field_pbcore_genres']['id'] = 'field_pbcore_genres';
  $handler->display->display_options['fields']['field_pbcore_genres']['table'] = 'field_data_field_pbcore_genres';
  $handler->display->display_options['fields']['field_pbcore_genres']['field'] = 'field_pbcore_genres';
  $handler->display->display_options['fields']['field_pbcore_genres']['delta_offset'] = '0';
  /* Field: Content: Languages */
  $handler->display->display_options['fields']['field_pbcore_languages']['id'] = 'field_pbcore_languages';
  $handler->display->display_options['fields']['field_pbcore_languages']['table'] = 'field_data_field_pbcore_languages';
  $handler->display->display_options['fields']['field_pbcore_languages']['field'] = 'field_pbcore_languages';
  $handler->display->display_options['fields']['field_pbcore_languages']['delta_offset'] = '0';
  /* Field: Content: Producer Name */
  $handler->display->display_options['fields']['field_pub_producer_name']['id'] = 'field_pub_producer_name';
  $handler->display->display_options['fields']['field_pub_producer_name']['table'] = 'field_data_field_pub_producer_name';
  $handler->display->display_options['fields']['field_pub_producer_name']['field'] = 'field_pub_producer_name';
  /* Field: Content: Production Notes */
  $handler->display->display_options['fields']['field_production_notes']['id'] = 'field_production_notes';
  $handler->display->display_options['fields']['field_production_notes']['table'] = 'field_data_field_production_notes';
  $handler->display->display_options['fields']['field_production_notes']['field'] = 'field_production_notes';
  /* Field: Content: Production Type */
  $handler->display->display_options['fields']['field_format']['id'] = 'field_format';
  $handler->display->display_options['fields']['field_format']['table'] = 'field_data_field_format';
  $handler->display->display_options['fields']['field_format']['field'] = 'field_format';
  /* Field: Content: PBCore FCC Ratings */
  $handler->display->display_options['fields']['field_pbcore_fcc_ratings']['id'] = 'field_pbcore_fcc_ratings';
  $handler->display->display_options['fields']['field_pbcore_fcc_ratings']['table'] = 'field_data_field_pbcore_fcc_ratings';
  $handler->display->display_options['fields']['field_pbcore_fcc_ratings']['field'] = 'field_pbcore_fcc_ratings';
  $handler->display->display_options['fields']['field_pbcore_fcc_ratings']['label'] = 'Rating';
  /* Field: Content: Runtime */
  $handler->display->display_options['fields']['field_runtime_default']['id'] = 'field_runtime_default';
  $handler->display->display_options['fields']['field_runtime_default']['table'] = 'field_data_field_runtime_default';
  $handler->display->display_options['fields']['field_runtime_default']['field'] = 'field_runtime_default';
  /* Field: Content: Short Description */
  $handler->display->display_options['fields']['field_short_description']['id'] = 'field_short_description';
  $handler->display->display_options['fields']['field_short_description']['table'] = 'field_data_field_short_description';
  $handler->display->display_options['fields']['field_short_description']['field'] = 'field_short_description';
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_pub_website']['id'] = 'field_pub_website';
  $handler->display->display_options['fields']['field_pub_website']['table'] = 'field_data_field_pub_website';
  $handler->display->display_options['fields']['field_pub_website']['field'] = 'field_pub_website';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['code'] = 'return $_GET[\'field_request_project\'];';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cm_project' => 'cm_project',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_pub_contact_email']['id'] = 'field_pub_contact_email';
  $handler->display->display_options['fields']['field_pub_contact_email']['table'] = 'field_data_field_pub_contact_email';
  $handler->display->display_options['fields']['field_pub_contact_email']['field'] = 'field_pub_contact_email';
  $handler->display->display_options['fields']['field_pub_contact_email']['alter']['text'] = 'Email: [field_pub_contact_email]';
  $handler->display->display_options['fields']['field_pub_contact_email']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_pub_contact_email']['type'] = 'editable';
  $handler->display->display_options['fields']['field_pub_contact_email']['settings'] = array(
    'click_to_edit' => 1,
    'empty_text' => '',
    'fallback_format' => 'text_default',
  );
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_pub_website']['id'] = 'field_pub_website';
  $handler->display->display_options['fields']['field_pub_website']['table'] = 'field_data_field_pub_website';
  $handler->display->display_options['fields']['field_pub_website']['field'] = 'field_pub_website';
  $handler->display->display_options['fields']['field_pub_website']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_pub_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_pub_website']['type'] = 'editable';
  $handler->display->display_options['fields']['field_pub_website']['settings'] = array(
    'click_to_edit' => 1,
    'empty_text' => '',
    'fallback_format' => 'link_title_plain',
  );
  /* Field: Content: Production Type */
  $handler->display->display_options['fields']['field_format']['id'] = 'field_format';
  $handler->display->display_options['fields']['field_format']['table'] = 'field_data_field_format';
  $handler->display->display_options['fields']['field_format']['field'] = 'field_format';
  $handler->display->display_options['fields']['field_format']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_format']['type'] = 'editable';
  $handler->display->display_options['fields']['field_format']['settings'] = array(
    'click_to_edit' => 1,
    'empty_text' => '',
    'fallback_format' => 'taxonomy_term_reference_plain',
  );
  /* Field: Content: Short Description */
  $handler->display->display_options['fields']['field_short_description']['id'] = 'field_short_description';
  $handler->display->display_options['fields']['field_short_description']['table'] = 'field_data_field_short_description';
  $handler->display->display_options['fields']['field_short_description']['field'] = 'field_short_description';
  $handler->display->display_options['fields']['field_short_description']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_short_description']['type'] = 'editable';
  $handler->display->display_options['fields']['field_short_description']['settings'] = array(
    'click_to_edit' => 1,
    'empty_text' => '',
    'fallback_format' => 'text_default',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Long Description';
  $handler->display->display_options['fields']['body']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['body']['type'] = 'editable';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'click_to_edit' => 1,
    'empty_text' => '',
    'fallback_format' => 'text_default',
  );
  /* Field: Content: Producer Name */
  $handler->display->display_options['fields']['field_pub_producer_name']['id'] = 'field_pub_producer_name';
  $handler->display->display_options['fields']['field_pub_producer_name']['table'] = 'field_data_field_pub_producer_name';
  $handler->display->display_options['fields']['field_pub_producer_name']['field'] = 'field_pub_producer_name';
  $handler->display->display_options['fields']['field_pub_producer_name']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_pub_producer_name']['type'] = 'editable';
  $handler->display->display_options['fields']['field_pub_producer_name']['settings'] = array(
    'click_to_edit' => 1,
    'empty_text' => '',
    'fallback_format' => 'text_default',
  );
  /* Field: Content: Genres */
  $handler->display->display_options['fields']['field_pbcore_genres']['id'] = 'field_pbcore_genres';
  $handler->display->display_options['fields']['field_pbcore_genres']['table'] = 'field_data_field_pbcore_genres';
  $handler->display->display_options['fields']['field_pbcore_genres']['field'] = 'field_pbcore_genres';
  $handler->display->display_options['fields']['field_pbcore_genres']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_pbcore_genres']['type'] = 'editable';
  $handler->display->display_options['fields']['field_pbcore_genres']['settings'] = array(
    'click_to_edit' => 1,
    'empty_text' => '',
    'fallback_format' => 'taxonomy_term_reference_plain',
  );
  $handler->display->display_options['fields']['field_pbcore_genres']['delta_offset'] = '0';
  /* Field: Content: Languages */
  $handler->display->display_options['fields']['field_pbcore_languages']['id'] = 'field_pbcore_languages';
  $handler->display->display_options['fields']['field_pbcore_languages']['table'] = 'field_data_field_pbcore_languages';
  $handler->display->display_options['fields']['field_pbcore_languages']['field'] = 'field_pbcore_languages';
  $handler->display->display_options['fields']['field_pbcore_languages']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_pbcore_languages']['type'] = 'editable';
  $handler->display->display_options['fields']['field_pbcore_languages']['settings'] = array(
    'click_to_edit' => 1,
    'empty_text' => '',
    'fallback_format' => 'taxonomy_term_reference_plain',
  );
  $handler->display->display_options['fields']['field_pbcore_languages']['delta_offset'] = '0';
  /* Field: Content: PBCore FCC Ratings */
  $handler->display->display_options['fields']['field_pbcore_fcc_ratings']['id'] = 'field_pbcore_fcc_ratings';
  $handler->display->display_options['fields']['field_pbcore_fcc_ratings']['table'] = 'field_data_field_pbcore_fcc_ratings';
  $handler->display->display_options['fields']['field_pbcore_fcc_ratings']['field'] = 'field_pbcore_fcc_ratings';
  $handler->display->display_options['fields']['field_pbcore_fcc_ratings']['label'] = 'Rating';
  $handler->display->display_options['fields']['field_pbcore_fcc_ratings']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_pbcore_fcc_ratings']['type'] = 'editable';
  $handler->display->display_options['fields']['field_pbcore_fcc_ratings']['settings'] = array(
    'click_to_edit' => 1,
    'empty_text' => '',
    'fallback_format' => 'taxonomy_term_reference_plain',
  );
  /* Field: Content: Filler */
  $handler->display->display_options['fields']['field_filler']['id'] = 'field_filler';
  $handler->display->display_options['fields']['field_filler']['table'] = 'field_data_field_filler';
  $handler->display->display_options['fields']['field_filler']['field'] = 'field_filler';
  $handler->display->display_options['fields']['field_filler']['label'] = 'Allow Project To Be Used as a Filler';
  $handler->display->display_options['fields']['field_filler']['element_type'] = '0';
  $handler->display->display_options['fields']['field_filler']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_filler']['type'] = 'editable';
  $handler->display->display_options['fields']['field_filler']['settings'] = array(
    'click_to_edit' => 1,
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Field: Content: Filler End Date */
  $handler->display->display_options['fields']['field_filler_end_date']['id'] = 'field_filler_end_date';
  $handler->display->display_options['fields']['field_filler_end_date']['table'] = 'field_data_field_filler_end_date';
  $handler->display->display_options['fields']['field_filler_end_date']['field'] = 'field_filler_end_date';
  $handler->display->display_options['fields']['field_filler_end_date']['label'] = 'Date to stop using this Project for Filler';
  $handler->display->display_options['fields']['field_filler_end_date']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_filler_end_date']['type'] = 'editable';
  $handler->display->display_options['fields']['field_filler_end_date']['settings'] = array(
    'click_to_edit' => 1,
    'empty_text' => '',
    'fallback_format' => 'date_default',
    'fallback_settings' => array(
      'format_type' => 'short',
      'fromto' => 'both',
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_to' => '',
      'show_repeat_rule' => 'show',
    ),
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['code'] = 'return $_GET[\'field_request_project\'];';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'series-request-project-confirm';
  $export['series_request_project_settings'] = $view;

  $view = new view();
  $view->name = 'series_request_scheduled_slots';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Series Request: Scheduled Slots';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'item_id' => 'item_id',
    'field_live_source' => 'field_live_source',
    'field_airing_channel' => 'field_airing_channel',
    'field_start_day' => 'field_start_day',
    'field_start_time' => 'field_start_time',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'item_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_live_source' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_airing_channel' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_start_day' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_start_time' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Field collection item: Entity with the Scheduling (field_series_request_admin) */
  $handler->display->display_options['relationships']['field_series_request_admin_node']['id'] = 'field_series_request_admin_node';
  $handler->display->display_options['relationships']['field_series_request_admin_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_series_request_admin_node']['field'] = 'field_series_request_admin_node';
  $handler->display->display_options['relationships']['field_series_request_admin_node']['required'] = TRUE;
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  /* Field: Field: Live Source */
  $handler->display->display_options['fields']['field_live_source']['id'] = 'field_live_source';
  $handler->display->display_options['fields']['field_live_source']['table'] = 'field_data_field_live_source';
  $handler->display->display_options['fields']['field_live_source']['field'] = 'field_live_source';
  /* Field: Field: Channel */
  $handler->display->display_options['fields']['field_airing_channel']['id'] = 'field_airing_channel';
  $handler->display->display_options['fields']['field_airing_channel']['table'] = 'field_data_field_airing_channel';
  $handler->display->display_options['fields']['field_airing_channel']['field'] = 'field_airing_channel';
  /* Field: Field collection item: Start Day */
  $handler->display->display_options['fields']['field_start_day']['id'] = 'field_start_day';
  $handler->display->display_options['fields']['field_start_day']['table'] = 'field_data_field_start_day';
  $handler->display->display_options['fields']['field_start_day']['field'] = 'field_start_day';
  /* Field: Field collection item: Start Time */
  $handler->display->display_options['fields']['field_start_time']['id'] = 'field_start_time';
  $handler->display->display_options['fields']['field_start_time']['table'] = 'field_data_field_start_time';
  $handler->display->display_options['fields']['field_start_time']['field'] = 'field_start_time';
  /* Field: Content: Season Dates */
  $handler->display->display_options['fields']['field_season_request_dates']['id'] = 'field_season_request_dates';
  $handler->display->display_options['fields']['field_season_request_dates']['table'] = 'field_data_field_season_request_dates';
  $handler->display->display_options['fields']['field_season_request_dates']['field'] = 'field_season_request_dates';
  $handler->display->display_options['fields']['field_season_request_dates']['relationship'] = 'field_series_request_admin_node';
  $handler->display->display_options['fields']['field_season_request_dates']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_series_request_admin_node';
  $handler->display->display_options['fields']['nid']['label'] = 'Series Request nid';
  /* Field: Content: Runtime */
  $handler->display->display_options['fields']['field_runtime_default']['id'] = 'field_runtime_default';
  $handler->display->display_options['fields']['field_runtime_default']['table'] = 'field_data_field_runtime_default';
  $handler->display->display_options['fields']['field_runtime_default']['field'] = 'field_runtime_default';
  $handler->display->display_options['fields']['field_runtime_default']['relationship'] = 'field_series_request_admin_node';
  $handler->display->display_options['fields']['field_runtime_default']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Series Frequency */
  $handler->display->display_options['fields']['field_series_frequency']['id'] = 'field_series_frequency';
  $handler->display->display_options['fields']['field_series_frequency']['table'] = 'field_data_field_series_frequency';
  $handler->display->display_options['fields']['field_series_frequency']['field'] = 'field_series_frequency';
  $handler->display->display_options['fields']['field_series_frequency']['relationship'] = 'field_series_request_admin_node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_series_request_admin_node';
  /* Contextual filter: Content: Season Dates -  start date (field_season_request_dates) */
  $handler->display->display_options['arguments']['field_season_request_dates_value']['id'] = 'field_season_request_dates_value';
  $handler->display->display_options['arguments']['field_season_request_dates_value']['table'] = 'field_data_field_season_request_dates';
  $handler->display->display_options['arguments']['field_season_request_dates_value']['field'] = 'field_season_request_dates_value';
  $handler->display->display_options['arguments']['field_season_request_dates_value']['relationship'] = 'field_series_request_admin_node';
  $handler->display->display_options['arguments']['field_season_request_dates_value']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_season_request_dates_value']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['field_season_request_dates_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_season_request_dates_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_season_request_dates_value']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Series Request Status (field_series_request_status) */
  $handler->display->display_options['filters']['field_series_request_status_value']['id'] = 'field_series_request_status_value';
  $handler->display->display_options['filters']['field_series_request_status_value']['table'] = 'field_data_field_series_request_status';
  $handler->display->display_options['filters']['field_series_request_status_value']['field'] = 'field_series_request_status_value';
  $handler->display->display_options['filters']['field_series_request_status_value']['relationship'] = 'field_series_request_admin_node';
  $handler->display->display_options['filters']['field_series_request_status_value']['value'] = array(
    'Approved' => 'Approved',
    'Scheduled' => 'Scheduled',
  );
  $export['series_request_scheduled_slots'] = $view;

  $view = new view();
  $view->name = 'series_request_scheduling_information';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Series Request: Schedule Info Block';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Series Request Scheduling Information';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: table class block-table/col open */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'table class block-table/col open';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<table id="block-table">
<tr>
<th>Scheduling Info</th>
<th>Equipment Info</th>
<th>Editing Info</th>
<th>Studio Info</th>
</tr>
<tr>
<td>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Keep Current Programming Schedule? */
  $handler->display->display_options['fields']['field_series_keep_schedule']['id'] = 'field_series_keep_schedule';
  $handler->display->display_options['fields']['field_series_keep_schedule']['table'] = 'field_data_field_series_keep_schedule';
  $handler->display->display_options['fields']['field_series_keep_schedule']['field'] = 'field_series_keep_schedule';
  $handler->display->display_options['fields']['field_series_keep_schedule']['label'] = '';
  $handler->display->display_options['fields']['field_series_keep_schedule']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_series_keep_schedule']['alter']['text'] = '<strong>Keep Current Schedule?:</strong> Yes';
  $handler->display->display_options['fields']['field_series_keep_schedule']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series_keep_schedule']['empty'] = '<strong>Keep Current Schedule?:</strong> No';
  $handler->display->display_options['fields']['field_series_keep_schedule']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_series_keep_schedule']['type'] = 'list_key';
  /* Field: Content: Live */
  $handler->display->display_options['fields']['field_live']['id'] = 'field_live';
  $handler->display->display_options['fields']['field_live']['table'] = 'field_data_field_live';
  $handler->display->display_options['fields']['field_live']['field'] = 'field_live';
  $handler->display->display_options['fields']['field_live']['label'] = '';
  $handler->display->display_options['fields']['field_live']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_live']['alter']['text'] = '<strong>Live</strong>: [field_live]';
  $handler->display->display_options['fields']['field_live']['element_label_colon'] = FALSE;
  /* Field: Content: Call-In */
  $handler->display->display_options['fields']['field_request_call_in']['id'] = 'field_request_call_in';
  $handler->display->display_options['fields']['field_request_call_in']['table'] = 'field_data_field_request_call_in';
  $handler->display->display_options['fields']['field_request_call_in']['field'] = 'field_request_call_in';
  $handler->display->display_options['fields']['field_request_call_in']['label'] = '';
  $handler->display->display_options['fields']['field_request_call_in']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_request_call_in']['alter']['text'] = '<strong>Call-In</strong>: [field_request_call_in]';
  $handler->display->display_options['fields']['field_request_call_in']['element_label_colon'] = FALSE;
  /* Field: Content: Series Frequency */
  $handler->display->display_options['fields']['field_series_frequency']['id'] = 'field_series_frequency';
  $handler->display->display_options['fields']['field_series_frequency']['table'] = 'field_data_field_series_frequency';
  $handler->display->display_options['fields']['field_series_frequency']['field'] = 'field_series_frequency';
  $handler->display->display_options['fields']['field_series_frequency']['label'] = '';
  $handler->display->display_options['fields']['field_series_frequency']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_series_frequency']['alter']['text'] = '<strong>Series Frequency</strong>: [field_series_frequency]';
  $handler->display->display_options['fields']['field_series_frequency']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series_frequency']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Runtime */
  $handler->display->display_options['fields']['field_runtime_default']['id'] = 'field_runtime_default';
  $handler->display->display_options['fields']['field_runtime_default']['table'] = 'field_data_field_runtime_default';
  $handler->display->display_options['fields']['field_runtime_default']['field'] = 'field_runtime_default';
  $handler->display->display_options['fields']['field_runtime_default']['label'] = '';
  $handler->display->display_options['fields']['field_runtime_default']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_runtime_default']['alter']['text'] = '<strong>Runtime Default:</strong> [field_runtime_default] ';
  $handler->display->display_options['fields']['field_runtime_default']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_runtime_default']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Playback Preferences */
  $handler->display->display_options['fields']['field_playback_preferences']['id'] = 'field_playback_preferences';
  $handler->display->display_options['fields']['field_playback_preferences']['table'] = 'field_data_field_playback_preferences';
  $handler->display->display_options['fields']['field_playback_preferences']['field'] = 'field_playback_preferences';
  $handler->display->display_options['fields']['field_playback_preferences']['label'] = '';
  $handler->display->display_options['fields']['field_playback_preferences']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_playback_preferences']['alter']['text'] = '<br /><strong>Playback Preferences:</strong>[field_playback_preferences]';
  $handler->display->display_options['fields']['field_playback_preferences']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_playback_preferences']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_playback_preferences']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_playback_preferences']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_playback_preferences']['separator'] = '';
  /* Field: Content: Season Dates */
  $handler->display->display_options['fields']['field_season_request_dates']['id'] = 'field_season_request_dates';
  $handler->display->display_options['fields']['field_season_request_dates']['table'] = 'field_data_field_season_request_dates';
  $handler->display->display_options['fields']['field_season_request_dates']['field'] = 'field_season_request_dates';
  $handler->display->display_options['fields']['field_season_request_dates']['label'] = '';
  $handler->display->display_options['fields']['field_season_request_dates']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_season_request_dates']['alter']['text'] = '<strong>Season Dates:</strong> [field_season_request_dates]';
  $handler->display->display_options['fields']['field_season_request_dates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_season_request_dates']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: col close/col open - Equipment Info */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'col close/col open - Equipment Info';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '</td><td>';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  /* Field: Content: Camera Checkout */
  $handler->display->display_options['fields']['field_camera_checkout_q']['id'] = 'field_camera_checkout_q';
  $handler->display->display_options['fields']['field_camera_checkout_q']['table'] = 'field_data_field_camera_checkout_q';
  $handler->display->display_options['fields']['field_camera_checkout_q']['field'] = 'field_camera_checkout_q';
  $handler->display->display_options['fields']['field_camera_checkout_q']['label'] = '';
  $handler->display->display_options['fields']['field_camera_checkout_q']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_camera_checkout_q']['alter']['text'] = '<strong>Camera Checkout:</strong>[field_camera_checkout_q]';
  $handler->display->display_options['fields']['field_camera_checkout_q']['element_label_colon'] = FALSE;
  /* Field: Content: Camera Request */
  $handler->display->display_options['fields']['field_camera_request']['id'] = 'field_camera_request';
  $handler->display->display_options['fields']['field_camera_request']['table'] = 'field_data_field_camera_request';
  $handler->display->display_options['fields']['field_camera_request']['field'] = 'field_camera_request';
  $handler->display->display_options['fields']['field_camera_request']['label'] = '';
  $handler->display->display_options['fields']['field_camera_request']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_camera_request']['alter']['text'] = '<strong>Camera Request:</strong>[field_camera_request]';
  $handler->display->display_options['fields']['field_camera_request']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_camera_request']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_camera_request']['settings'] = array(
    'view_mode' => 'full',
  );
  /* Field: col open/col close - Editing Info */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = 'col open/col close - Editing Info';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '</td><td>';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  /* Field: Content: Editing Session */
  $handler->display->display_options['fields']['field_editing_session_q']['id'] = 'field_editing_session_q';
  $handler->display->display_options['fields']['field_editing_session_q']['table'] = 'field_data_field_editing_session_q';
  $handler->display->display_options['fields']['field_editing_session_q']['field'] = 'field_editing_session_q';
  $handler->display->display_options['fields']['field_editing_session_q']['label'] = '';
  $handler->display->display_options['fields']['field_editing_session_q']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_editing_session_q']['alter']['text'] = '<strong>Editing Session:</strong>[field_editing_session_q]';
  $handler->display->display_options['fields']['field_editing_session_q']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_editing_session_q']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_editing_session_q']['separator'] = '';
  /* Field: Content: Editing Request */
  $handler->display->display_options['fields']['field_editing_request']['id'] = 'field_editing_request';
  $handler->display->display_options['fields']['field_editing_request']['table'] = 'field_data_field_editing_request';
  $handler->display->display_options['fields']['field_editing_request']['field'] = 'field_editing_request';
  $handler->display->display_options['fields']['field_editing_request']['label'] = '';
  $handler->display->display_options['fields']['field_editing_request']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_editing_request']['alter']['text'] = '<strong>Editing Request:</strong>[field_editing_request]<br />';
  $handler->display->display_options['fields']['field_editing_request']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_editing_request']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_editing_request']['settings'] = array(
    'view_mode' => 'full',
  );
  /* Field: col open/col close - Studio Info */
  $handler->display->display_options['fields']['nothing_4']['id'] = 'nothing_4';
  $handler->display->display_options['fields']['nothing_4']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_4']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_4']['ui_name'] = 'col open/col close - Studio Info';
  $handler->display->display_options['fields']['nothing_4']['label'] = '';
  $handler->display->display_options['fields']['nothing_4']['alter']['text'] = '</td><td>';
  $handler->display->display_options['fields']['nothing_4']['element_label_colon'] = FALSE;
  /* Field: Content: Studio Session */
  $handler->display->display_options['fields']['field_studio_session_q']['id'] = 'field_studio_session_q';
  $handler->display->display_options['fields']['field_studio_session_q']['table'] = 'field_data_field_studio_session_q';
  $handler->display->display_options['fields']['field_studio_session_q']['field'] = 'field_studio_session_q';
  $handler->display->display_options['fields']['field_studio_session_q']['label'] = '';
  $handler->display->display_options['fields']['field_studio_session_q']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_studio_session_q']['alter']['text'] = '<strong>Studio Session:</strong>[field_studio_session_q]';
  $handler->display->display_options['fields']['field_studio_session_q']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_studio_session_q']['delta_offset'] = '0';
  /* Field: Content: Studio Requests */
  $handler->display->display_options['fields']['field_studio_request']['id'] = 'field_studio_request';
  $handler->display->display_options['fields']['field_studio_request']['table'] = 'field_data_field_studio_request';
  $handler->display->display_options['fields']['field_studio_request']['field'] = 'field_studio_request';
  $handler->display->display_options['fields']['field_studio_request']['label'] = '';
  $handler->display->display_options['fields']['field_studio_request']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_studio_request']['alter']['text'] = '<strong>Studio Requests:</strong>[field_studio_request]';
  $handler->display->display_options['fields']['field_studio_request']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_studio_request']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_studio_request']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_studio_request']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_studio_request']['separator'] = '';
  /* Field: col close/row close/ table close */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'col close/row close/ table close';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '</td><tr></table>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'series_request' => 'series_request',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['series_request_scheduling_information'] = $view;

  $view = new view();
  $view->name = 'series_request_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Series Request: Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Series Request: Search';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    15 => '15',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'nid' => 'nid',
    'field_request_project' => 'field_request_project',
    'title' => 'title',
    'field_series_request_status' => 'field_series_request_status',
    'field_series_frequency' => 'field_series_frequency',
    'field_runtime_default' => 'field_runtime_default',
    'field_series_keep_schedule' => 'field_series_keep_schedule',
    'field_playback_preferences' => 'field_playback_preferences',
    'field_series_request_priority' => 'field_series_request_priority',
    'display_name' => 'display_name',
    'name' => 'name',
    'created' => 'created',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_request_project' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'field_series_request_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_series_frequency' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_runtime_default' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_series_keep_schedule' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_playback_preferences' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_series_request_priority' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'display_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no series requests.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Project */
  $handler->display->display_options['fields']['field_request_project']['id'] = 'field_request_project';
  $handler->display->display_options['fields']['field_request_project']['table'] = 'field_data_field_request_project';
  $handler->display->display_options['fields']['field_request_project']['field'] = 'field_request_project';
  $handler->display->display_options['fields']['field_request_project']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Series Request';
  $handler->display->display_options['fields']['title']['alter']['path'] = 'node/[nid]/edit?destination=admin/programming/series_requests/search';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Series Request Status */
  $handler->display->display_options['fields']['field_series_request_status']['id'] = 'field_series_request_status';
  $handler->display->display_options['fields']['field_series_request_status']['table'] = 'field_data_field_series_request_status';
  $handler->display->display_options['fields']['field_series_request_status']['field'] = 'field_series_request_status';
  /* Field: Content: Series Frequency */
  $handler->display->display_options['fields']['field_series_frequency']['id'] = 'field_series_frequency';
  $handler->display->display_options['fields']['field_series_frequency']['table'] = 'field_data_field_series_frequency';
  $handler->display->display_options['fields']['field_series_frequency']['field'] = 'field_series_frequency';
  $handler->display->display_options['fields']['field_series_frequency']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Live */
  $handler->display->display_options['fields']['field_live']['id'] = 'field_live';
  $handler->display->display_options['fields']['field_live']['table'] = 'field_data_field_live';
  $handler->display->display_options['fields']['field_live']['field'] = 'field_live';
  /* Field: Content: Runtime */
  $handler->display->display_options['fields']['field_runtime_default']['id'] = 'field_runtime_default';
  $handler->display->display_options['fields']['field_runtime_default']['table'] = 'field_data_field_runtime_default';
  $handler->display->display_options['fields']['field_runtime_default']['field'] = 'field_runtime_default';
  $handler->display->display_options['fields']['field_runtime_default']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Keep Current Programming Schedule? */
  $handler->display->display_options['fields']['field_series_keep_schedule']['id'] = 'field_series_keep_schedule';
  $handler->display->display_options['fields']['field_series_keep_schedule']['table'] = 'field_data_field_series_keep_schedule';
  $handler->display->display_options['fields']['field_series_keep_schedule']['field'] = 'field_series_keep_schedule';
  /* Field: Content: Playback Preferences */
  $handler->display->display_options['fields']['field_playback_preferences']['id'] = 'field_playback_preferences';
  $handler->display->display_options['fields']['field_playback_preferences']['table'] = 'field_data_field_playback_preferences';
  $handler->display->display_options['fields']['field_playback_preferences']['field'] = 'field_playback_preferences';
  $handler->display->display_options['fields']['field_playback_preferences']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_playback_preferences']['delta_offset'] = '0';
  /* Field: Content: Initial Priority Ranking */
  $handler->display->display_options['fields']['field_series_request_priority']['id'] = 'field_series_request_priority';
  $handler->display->display_options['fields']['field_series_request_priority']['table'] = 'field_data_field_series_request_priority';
  $handler->display->display_options['fields']['field_series_request_priority']['field'] = 'field_series_request_priority';
  $handler->display->display_options['fields']['field_series_request_priority']['label'] = 'Series Request Priority';
  $handler->display->display_options['fields']['field_series_request_priority']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: CiviCRM Contacts: Display Name */
  $handler->display->display_options['fields']['display_name']['id'] = 'display_name';
  $handler->display->display_options['fields']['display_name']['table'] = 'civicrm_contact';
  $handler->display->display_options['fields']['display_name']['field'] = 'display_name';
  $handler->display->display_options['fields']['display_name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['display_name']['label'] = 'CiviCRM Contact';
  $handler->display->display_options['fields']['display_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['display_name']['link_to_civicrm_contact'] = 1;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Producer links';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = 'Contact Record: 
[display_name]
-
Drupal Profile: 
[name] ';
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = TRUE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Links';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
  print cm_series_slot_series_request_links($row->nid);
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Sort criterion: Content: Initial Priority Ranking (field_series_request_priority) */
  $handler->display->display_options['sorts']['field_series_request_priority_value']['id'] = 'field_series_request_priority_value';
  $handler->display->display_options['sorts']['field_series_request_priority_value']['table'] = 'field_data_field_series_request_priority';
  $handler->display->display_options['sorts']['field_series_request_priority_value']['field'] = 'field_series_request_priority_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'series_request' => 'series_request',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
  );
  /* Filter criterion: Content: Series Frequency (field_series_frequency) */
  $handler->display->display_options['filters']['field_series_frequency_tid']['id'] = 'field_series_frequency_tid';
  $handler->display->display_options['filters']['field_series_frequency_tid']['table'] = 'field_data_field_series_frequency';
  $handler->display->display_options['filters']['field_series_frequency_tid']['field'] = 'field_series_frequency_tid';
  $handler->display->display_options['filters']['field_series_frequency_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_series_frequency_tid']['expose']['operator_id'] = 'field_series_frequency_tid_op';
  $handler->display->display_options['filters']['field_series_frequency_tid']['expose']['label'] = 'Series Frequency';
  $handler->display->display_options['filters']['field_series_frequency_tid']['expose']['operator'] = 'field_series_frequency_tid_op';
  $handler->display->display_options['filters']['field_series_frequency_tid']['expose']['identifier'] = 'field_series_frequency_tid';
  $handler->display->display_options['filters']['field_series_frequency_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
  );
  $handler->display->display_options['filters']['field_series_frequency_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_series_frequency_tid']['vocabulary'] = 'frequency';
  /* Filter criterion: Content: Series Request Status (field_series_request_status) */
  $handler->display->display_options['filters']['field_series_request_status_value']['id'] = 'field_series_request_status_value';
  $handler->display->display_options['filters']['field_series_request_status_value']['table'] = 'field_data_field_series_request_status';
  $handler->display->display_options['filters']['field_series_request_status_value']['field'] = 'field_series_request_status_value';
  $handler->display->display_options['filters']['field_series_request_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_series_request_status_value']['expose']['operator_id'] = 'field_series_request_status_value_op';
  $handler->display->display_options['filters']['field_series_request_status_value']['expose']['label'] = 'Series Request Status';
  $handler->display->display_options['filters']['field_series_request_status_value']['expose']['operator'] = 'field_series_request_status_value_op';
  $handler->display->display_options['filters']['field_series_request_status_value']['expose']['identifier'] = 'field_series_request_status_value';
  $handler->display->display_options['filters']['field_series_request_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
  );
  /* Filter criterion: Content: Post date */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'node';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['exposed'] = TRUE;
  $handler->display->display_options['filters']['created']['expose']['operator_id'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['label'] = 'Post date';
  $handler->display->display_options['filters']['created']['expose']['operator'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['identifier'] = 'created';
  /* Filter criterion: Content: Live (field_live) */
  $handler->display->display_options['filters']['field_live_value']['id'] = 'field_live_value';
  $handler->display->display_options['filters']['field_live_value']['table'] = 'field_data_field_live';
  $handler->display->display_options['filters']['field_live_value']['field'] = 'field_live_value';
  $handler->display->display_options['filters']['field_live_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_live_value']['expose']['operator_id'] = 'field_live_value_op';
  $handler->display->display_options['filters']['field_live_value']['expose']['label'] = 'Live?';
  $handler->display->display_options['filters']['field_live_value']['expose']['operator'] = 'field_live_value_op';
  $handler->display->display_options['filters']['field_live_value']['expose']['identifier'] = 'field_live_value';
  $handler->display->display_options['filters']['field_live_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['path'] = 'admin/programming/series_requests/search';

  /* Display: Admin Block */
  $handler = $view->new_display('block', 'Admin Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recent Series Requests';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<a href="/admin/programming/series-requests/series-requests-search">See All</a>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Series Request';
  $handler->display->display_options['fields']['title']['alter']['path'] = 'node/[nid]/edit?destination=/admin/programming/series_request/search';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  /* Field: Content: Series Request Status */
  $handler->display->display_options['fields']['field_series_request_status']['id'] = 'field_series_request_status';
  $handler->display->display_options['fields']['field_series_request_status']['table'] = 'field_data_field_series_request_status';
  $handler->display->display_options['fields']['field_series_request_status']['field'] = 'field_series_request_status';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'LInks';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
  print cm_series_slot_series_request_links($row->nid);
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'series_request' => 'series_request',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Super Admin */
  $handler = $view->new_display('page', 'Super Admin', 'page_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Project */
  $handler->display->display_options['fields']['field_request_project']['id'] = 'field_request_project';
  $handler->display->display_options['fields']['field_request_project']['table'] = 'field_data_field_request_project';
  $handler->display->display_options['fields']['field_request_project']['field'] = 'field_request_project';
  $handler->display->display_options['fields']['field_request_project']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Series Request';
  $handler->display->display_options['fields']['title']['alter']['path'] = 'node/[nid]/edit?destination=admin/programming/series_requests/search';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Series Request Status */
  $handler->display->display_options['fields']['field_series_request_status']['id'] = 'field_series_request_status';
  $handler->display->display_options['fields']['field_series_request_status']['table'] = 'field_data_field_series_request_status';
  $handler->display->display_options['fields']['field_series_request_status']['field'] = 'field_series_request_status';
  /* Field: Content: Series Frequency */
  $handler->display->display_options['fields']['field_series_frequency']['id'] = 'field_series_frequency';
  $handler->display->display_options['fields']['field_series_frequency']['table'] = 'field_data_field_series_frequency';
  $handler->display->display_options['fields']['field_series_frequency']['field'] = 'field_series_frequency';
  $handler->display->display_options['fields']['field_series_frequency']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Runtime */
  $handler->display->display_options['fields']['field_runtime_default']['id'] = 'field_runtime_default';
  $handler->display->display_options['fields']['field_runtime_default']['table'] = 'field_data_field_runtime_default';
  $handler->display->display_options['fields']['field_runtime_default']['field'] = 'field_runtime_default';
  $handler->display->display_options['fields']['field_runtime_default']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Keep Current Programming Schedule? */
  $handler->display->display_options['fields']['field_series_keep_schedule']['id'] = 'field_series_keep_schedule';
  $handler->display->display_options['fields']['field_series_keep_schedule']['table'] = 'field_data_field_series_keep_schedule';
  $handler->display->display_options['fields']['field_series_keep_schedule']['field'] = 'field_series_keep_schedule';
  /* Field: Content: Playback Preferences */
  $handler->display->display_options['fields']['field_playback_preferences']['id'] = 'field_playback_preferences';
  $handler->display->display_options['fields']['field_playback_preferences']['table'] = 'field_data_field_playback_preferences';
  $handler->display->display_options['fields']['field_playback_preferences']['field'] = 'field_playback_preferences';
  $handler->display->display_options['fields']['field_playback_preferences']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_playback_preferences']['delta_offset'] = '0';
  /* Field: Content: Initial Priority Ranking */
  $handler->display->display_options['fields']['field_series_request_priority']['id'] = 'field_series_request_priority';
  $handler->display->display_options['fields']['field_series_request_priority']['table'] = 'field_data_field_series_request_priority';
  $handler->display->display_options['fields']['field_series_request_priority']['field'] = 'field_series_request_priority';
  $handler->display->display_options['fields']['field_series_request_priority']['label'] = 'Series Request Priority';
  $handler->display->display_options['fields']['field_series_request_priority']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_series_request_priority']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: CiviCRM Contacts: Display Name */
  $handler->display->display_options['fields']['display_name']['id'] = 'display_name';
  $handler->display->display_options['fields']['display_name']['table'] = 'civicrm_contact';
  $handler->display->display_options['fields']['display_name']['field'] = 'display_name';
  $handler->display->display_options['fields']['display_name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['display_name']['label'] = 'CiviCRM Contact';
  $handler->display->display_options['fields']['display_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['display_name']['link_to_civicrm_contact'] = 1;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Producer links';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = 'Contact Record: 
[display_name]
-
Drupal Profile: 
[name] ';
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = TRUE;
  /* Field: Content: Cablecast Project ID */
  $handler->display->display_options['fields']['field_cablecast_project_id']['id'] = 'field_cablecast_project_id';
  $handler->display->display_options['fields']['field_cablecast_project_id']['table'] = 'field_data_field_cablecast_project_id';
  $handler->display->display_options['fields']['field_cablecast_project_id']['field'] = 'field_cablecast_project_id';
  /* Field: Content: Series Request Status */
  $handler->display->display_options['fields']['field_series_request_status_1']['id'] = 'field_series_request_status_1';
  $handler->display->display_options['fields']['field_series_request_status_1']['table'] = 'field_data_field_series_request_status';
  $handler->display->display_options['fields']['field_series_request_status_1']['field'] = 'field_series_request_status';
  $handler->display->display_options['fields']['field_series_request_status_1']['type'] = 'editable';
  $handler->display->display_options['fields']['field_series_request_status_1']['settings'] = array(
    'click_to_edit' => 0,
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Links';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
  print cm_series_slot_series_request_links($row->nid);
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['path'] = 'admin/programming/series_requests/search/super-admin';
  $export['series_request_search'] = $view;

  $view = new view();
  $view->name = 'series_request_series_slot_master_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Series Request: Series Slot Master List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Series Slots Master List';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer cm_airing';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'php_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'title' => 'title',
    'x' => 'x',
    'y' => 'y',
    'start_timestamp' => 'start_timestamp',
    'end_timestamp' => 'end_timestamp',
    'php_1' => 'php_1',
    'php_2' => 'php_2',
    'php_3' => 'php_3',
    'airing_id' => 'airing_id',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'x' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'y' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'start_timestamp' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'end_timestamp' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php_2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php_3' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'airing_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: CM Series Slot: X coordinate on the Slot Grid */
  $handler->display->display_options['fields']['x']['id'] = 'x';
  $handler->display->display_options['fields']['x']['table'] = 'cm_series_slot';
  $handler->display->display_options['fields']['x']['field'] = 'x';
  $handler->display->display_options['fields']['x']['label'] = '';
  $handler->display->display_options['fields']['x']['exclude'] = TRUE;
  $handler->display->display_options['fields']['x']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['x']['separator'] = '';
  /* Field: CM Series Slot: Y coordinate on the Grid */
  $handler->display->display_options['fields']['y']['id'] = 'y';
  $handler->display->display_options['fields']['y']['table'] = 'cm_series_slot';
  $handler->display->display_options['fields']['y']['field'] = 'y';
  $handler->display->display_options['fields']['y']['label'] = '';
  $handler->display->display_options['fields']['y']['exclude'] = TRUE;
  $handler->display->display_options['fields']['y']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['y']['separator'] = '';
  /* Field: CM Series Slot: Slot Start Timestamp */
  $handler->display->display_options['fields']['start_timestamp']['id'] = 'start_timestamp';
  $handler->display->display_options['fields']['start_timestamp']['table'] = 'cm_series_slot';
  $handler->display->display_options['fields']['start_timestamp']['field'] = 'start_timestamp';
  $handler->display->display_options['fields']['start_timestamp']['label'] = 'Start';
  $handler->display->display_options['fields']['start_timestamp']['date_format'] = 'short';
  $handler->display->display_options['fields']['start_timestamp']['second_date_format'] = 'long';
  /* Field: CM Series Slot: Slot End Timestamp */
  $handler->display->display_options['fields']['end_timestamp']['id'] = 'end_timestamp';
  $handler->display->display_options['fields']['end_timestamp']['table'] = 'cm_series_slot';
  $handler->display->display_options['fields']['end_timestamp']['field'] = 'end_timestamp';
  $handler->display->display_options['fields']['end_timestamp']['label'] = 'End';
  $handler->display->display_options['fields']['end_timestamp']['date_format'] = 'time_only';
  $handler->display->display_options['fields']['end_timestamp']['second_date_format'] = 'long';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = 'Channel';
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
print cm_series_slot_id_to_label_view_field($row, \'channel\');
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_2']['id'] = 'php_2';
  $handler->display->display_options['fields']['php_2']['table'] = 'views';
  $handler->display->display_options['fields']['php_2']['field'] = 'php';
  $handler->display->display_options['fields']['php_2']['label'] = 'Live Source';
  $handler->display->display_options['fields']['php_2']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_2']['php_output'] = '<?php
print cm_series_slot_id_to_label_view_field($row, \'live_source\');
?>';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_3']['id'] = 'php_3';
  $handler->display->display_options['fields']['php_3']['table'] = 'views';
  $handler->display->display_options['fields']['php_3']['field'] = 'php';
  $handler->display->display_options['fields']['php_3']['label'] = 'Series Request';
  $handler->display->display_options['fields']['php_3']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_3']['php_output'] = '<?php
print cm_series_slot_id_to_label_view_field($row, \'series_request\');
?>';
  $handler->display->display_options['fields']['php_3']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_3']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Premiere?';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
print cm_series_slot_id_to_label_view_field($row, \'premiere\');
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: CM Series Slot: Airing ID */
  $handler->display->display_options['fields']['airing_id']['id'] = 'airing_id';
  $handler->display->display_options['fields']['airing_id']['table'] = 'cm_series_slot';
  $handler->display->display_options['fields']['airing_id']['field'] = 'airing_id';
  $handler->display->display_options['fields']['airing_id']['label'] = 'Airing';
  $handler->display->display_options['fields']['airing_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['airing_id']['alter']['text'] = '<a href="/airing/[airing_id]">View Scheduled Airing</a>';
  $handler->display->display_options['fields']['airing_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['airing_id']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['airing_id']['separator'] = '';
  /* Sort criterion: CM Series Slot: Channel */
  $handler->display->display_options['sorts']['channel']['id'] = 'channel';
  $handler->display->display_options['sorts']['channel']['table'] = 'cm_series_slot';
  $handler->display->display_options['sorts']['channel']['field'] = 'channel';
  /* Sort criterion: CM Series Slot: Slot Start Time */
  $handler->display->display_options['sorts']['start_time']['id'] = 'start_time';
  $handler->display->display_options['sorts']['start_time']['table'] = 'cm_series_slot';
  $handler->display->display_options['sorts']['start_time']['field'] = 'start_time';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'series_request' => 'series_request',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'allwords';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
  );
  $handler->display->display_options['filters']['title']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: Season Dates -  start date (field_season_request_dates) */
  $handler->display->display_options['filters']['field_season_request_dates_value']['id'] = 'field_season_request_dates_value';
  $handler->display->display_options['filters']['field_season_request_dates_value']['table'] = 'field_data_field_season_request_dates';
  $handler->display->display_options['filters']['field_season_request_dates_value']['field'] = 'field_season_request_dates_value';
  $handler->display->display_options['filters']['field_season_request_dates_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_season_request_dates_value']['group'] = 1;
  $handler->display->display_options['filters']['field_season_request_dates_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_season_request_dates_value']['expose']['operator_id'] = 'field_season_request_dates_value_op';
  $handler->display->display_options['filters']['field_season_request_dates_value']['expose']['label'] = 'Season Dates';
  $handler->display->display_options['filters']['field_season_request_dates_value']['expose']['operator'] = 'field_season_request_dates_value_op';
  $handler->display->display_options['filters']['field_season_request_dates_value']['expose']['identifier'] = 'field_season_request_dates_value';
  $handler->display->display_options['filters']['field_season_request_dates_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
  );
  $handler->display->display_options['filters']['field_season_request_dates_value']['default_date'] = 'now -6 month';
  $handler->display->display_options['filters']['field_season_request_dates_value']['default_to_date'] = 'now +6 month';
  /* Filter criterion: Content: Live (field_live) */
  $handler->display->display_options['filters']['field_live_value']['id'] = 'field_live_value';
  $handler->display->display_options['filters']['field_live_value']['table'] = 'field_data_field_live';
  $handler->display->display_options['filters']['field_live_value']['field'] = 'field_live_value';
  $handler->display->display_options['filters']['field_live_value']['group'] = 1;
  $handler->display->display_options['filters']['field_live_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_live_value']['expose']['operator_id'] = 'field_live_value_op';
  $handler->display->display_options['filters']['field_live_value']['expose']['label'] = 'Live?';
  $handler->display->display_options['filters']['field_live_value']['expose']['operator'] = 'field_live_value_op';
  $handler->display->display_options['filters']['field_live_value']['expose']['identifier'] = 'field_live_value';
  $handler->display->display_options['filters']['field_live_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
  );
  /* Filter criterion: CM Series Slot: Channel */
  $handler->display->display_options['filters']['channel']['id'] = 'channel';
  $handler->display->display_options['filters']['channel']['table'] = 'cm_series_slot';
  $handler->display->display_options['filters']['channel']['field'] = 'channel';
  $handler->display->display_options['filters']['channel']['group'] = 1;
  $handler->display->display_options['filters']['channel']['exposed'] = TRUE;
  $handler->display->display_options['filters']['channel']['expose']['operator_id'] = 'channel_op';
  $handler->display->display_options['filters']['channel']['expose']['label'] = 'Channel';
  $handler->display->display_options['filters']['channel']['expose']['operator'] = 'channel_op';
  $handler->display->display_options['filters']['channel']['expose']['identifier'] = 'channel';
  $handler->display->display_options['filters']['channel']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
  );
  $handler->display->display_options['filters']['channel']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['channel']['group_info']['label'] = 'Channel';
  $handler->display->display_options['filters']['channel']['group_info']['identifier'] = 'channel';
  $handler->display->display_options['filters']['channel']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Channel 11',
      'operator' => '=',
      'value' => array(
        'value' => '814',
        'min' => '',
        'max' => '',
      ),
    ),
    2 => array(
      'title' => 'Channel 22',
      'operator' => '=',
      'value' => array(
        'value' => '815',
        'min' => '',
        'max' => '',
      ),
    ),
    3 => array(
      'title' => 'Channel 23',
      'operator' => '=',
      'value' => array(
        'value' => '816',
        'min' => '',
        'max' => '',
      ),
    ),
    4 => array(
      'title' => 'Channel 29',
      'operator' => '=',
      'value' => array(
        'value' => '817',
        'min' => '',
        'max' => '',
      ),
    ),
    5 => array(
      'title' => 'Channel 30',
      'operator' => '=',
      'value' => array(
        'value' => '818',
        'min' => '',
        'max' => '',
      ),
    ),
    6 => array(
      'title' => 'Channel 30E',
      'operator' => '=',
      'value' => array(
        'value' => '819',
        'min' => '',
        'max' => '',
      ),
    ),
  );
  /* Filter criterion: CM Series Slot: Live Source */
  $handler->display->display_options['filters']['live_source']['id'] = 'live_source';
  $handler->display->display_options['filters']['live_source']['table'] = 'cm_series_slot';
  $handler->display->display_options['filters']['live_source']['field'] = 'live_source';
  $handler->display->display_options['filters']['live_source']['exposed'] = TRUE;
  $handler->display->display_options['filters']['live_source']['expose']['operator_id'] = 'live_source_op';
  $handler->display->display_options['filters']['live_source']['expose']['label'] = 'Live Source';
  $handler->display->display_options['filters']['live_source']['expose']['operator'] = 'live_source_op';
  $handler->display->display_options['filters']['live_source']['expose']['identifier'] = 'live_source';
  $handler->display->display_options['filters']['live_source']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
  );
  $handler->display->display_options['filters']['live_source']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['live_source']['group_info']['label'] = 'Live Source';
  $handler->display->display_options['filters']['live_source']['group_info']['identifier'] = 'live_source';
  $handler->display->display_options['filters']['live_source']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Studio A',
      'operator' => '=',
      'value' => array(
        'value' => '0',
        'min' => '',
        'max' => '',
      ),
    ),
    2 => array(
      'title' => 'Studio B',
      'operator' => '=',
      'value' => array(
        'value' => '1',
        'min' => '',
        'max' => '',
      ),
    ),
    3 => array(
      'title' => 'Video Server',
      'operator' => '=',
      'value' => array(
        'value' => '2',
        'min' => '',
        'max' => '',
      ),
    ),
    4 => array(
      'title' => 'Remote - PDX Bldg',
      'operator' => '=',
      'value' => array(
        'value' => '3',
        'min' => '',
        'max' => '',
      ),
    ),
    5 => array(
      'title' => 'Remote - PDX City Hall',
      'operator' => '=',
      'value' => array(
        'value' => '4',
        'min' => '',
        'max' => '',
      ),
    ),
    6 => array(
      'title' => 'CAN11 MetroEast',
      'operator' => '=',
      'value' => array(
        'value' => '5',
        'min' => '',
        'max' => '',
      ),
    ),
    7 => array(
      'title' => '29 MetroEast',
      'operator' => '=',
      'value' => array(
        'value' => '6',
        'min' => '',
        'max' => '',
      ),
    ),
    8 => array(
      'title' => '30E MetroEast',
      'operator' => '=',
      'value' => array(
        'value' => '7',
        'min' => '',
        'max' => '',
      ),
    ),
    9 => array(
      'title' => 'Remote - MCC',
      'operator' => '=',
      'value' => array(
        'value' => '8',
        'min' => '',
        'max' => '',
      ),
    ),
    10 => array(
      'title' => 'Remote - Metro',
      'operator' => '=',
      'value' => array(
        'value' => '9',
        'min' => '',
        'max' => '',
      ),
    ),
    11 => array(
      'title' => 'Live Drop',
      'operator' => '=',
      'value' => array(
        'value' => '10',
        'min' => '',
        'max' => '',
      ),
    ),
    12 => array(
      'title' => 'IRD Spare',
      'operator' => '=',
      'value' => array(
        'value' => '11',
        'min' => '',
        'max' => '',
      ),
    ),
    13 => array(
      'title' => 'SAT1 - Link TV',
      'operator' => '=',
      'value' => array(
        'value' => '12',
        'min' => '',
        'max' => '',
      ),
    ),
    14 => array(
      'title' => 'SAT2 - NASA',
      'operator' => '=',
      'value' => array(
        'value' => '13',
        'min' => '',
        'max' => '',
      ),
    ),
    15 => array(
      'title' => 'SAT3 - Free Speech TV',
      'operator' => '=',
      'value' => array(
        'value' => '14',
        'min' => '',
        'max' => '',
      ),
    ),
    16 => array(
      'title' => 'SAT4 - Classic Arts',
      'operator' => '=',
      'value' => array(
        'value' => '15',
        'min' => '',
        'max' => '',
      ),
    ),
    17 => array(
      'title' => 'CAN11 WFTV',
      'operator' => '=',
      'value' => array(
        'value' => '16',
        'min' => '',
        'max' => '',
      ),
    ),
    18 => array(
      'title' => 'CAN11 TVCTV',
      'operator' => '=',
      'value' => array(
        'value' => '17',
        'min' => '',
        'max' => '',
      ),
    ),
    19 => array(
      'title' => 'CAN11 MILW',
      'operator' => '=',
      'value' => array(
        'value' => '18',
        'min' => '',
        'max' => '',
      ),
    ),
    20 => array(
      'title' => 'UNKNOWN',
      'operator' => '=',
      'value' => array(
        'value' => '19',
        'min' => '',
        'max' => '',
      ),
    ),
  );
  /* Filter criterion: CM Series Slot: X coordinate on the Slot Grid */
  $handler->display->display_options['filters']['x']['id'] = 'x';
  $handler->display->display_options['filters']['x']['table'] = 'cm_series_slot';
  $handler->display->display_options['filters']['x']['field'] = 'x';
  $handler->display->display_options['filters']['x']['operator'] = '>';
  $handler->display->display_options['filters']['x']['value']['value'] = '0';
  /* Filter criterion: CM Series Slot: Slot Start Timestamp */
  $handler->display->display_options['filters']['start_timestamp']['id'] = 'start_timestamp';
  $handler->display->display_options['filters']['start_timestamp']['table'] = 'cm_series_slot';
  $handler->display->display_options['filters']['start_timestamp']['field'] = 'start_timestamp';
  $handler->display->display_options['filters']['start_timestamp']['operator'] = 'between';
  $handler->display->display_options['filters']['start_timestamp']['exposed'] = TRUE;
  $handler->display->display_options['filters']['start_timestamp']['expose']['operator_id'] = 'start_timestamp_op';
  $handler->display->display_options['filters']['start_timestamp']['expose']['label'] = 'Slot Start';
  $handler->display->display_options['filters']['start_timestamp']['expose']['operator'] = 'start_timestamp_op';
  $handler->display->display_options['filters']['start_timestamp']['expose']['identifier'] = 'start_timestamp';
  $handler->display->display_options['filters']['start_timestamp']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'admin/programming/series-slot/master-list';
  $export['series_request_series_slot_master_list'] = $view;

  $view = new view();
  $view->name = 'series_request_series_slot_view_field';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Series Request: Series Slot View Field';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Series Request Scheduling Information';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'php' => 'php',
    'x' => 'x',
    'y' => 'y',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'x' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'y' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Footer: Global: PHP */
  $handler->display->display_options['footer']['php']['id'] = 'php';
  $handler->display->display_options['footer']['php']['table'] = 'views';
  $handler->display->display_options['footer']['php']['field'] = 'php';
  $handler->display->display_options['footer']['php']['empty'] = TRUE;
  $handler->display->display_options['footer']['php']['php_output'] = '<?php
print cm_series_slot_series_request_links(arg(1));
?>';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: CM Series Slot: X coordinate on the Slot Grid */
  $handler->display->display_options['fields']['x']['id'] = 'x';
  $handler->display->display_options['fields']['x']['table'] = 'cm_series_slot';
  $handler->display->display_options['fields']['x']['field'] = 'x';
  $handler->display->display_options['fields']['x']['label'] = '';
  $handler->display->display_options['fields']['x']['exclude'] = TRUE;
  $handler->display->display_options['fields']['x']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['x']['separator'] = '';
  /* Field: CM Series Slot: Y coordinate on the Grid */
  $handler->display->display_options['fields']['y']['id'] = 'y';
  $handler->display->display_options['fields']['y']['table'] = 'cm_series_slot';
  $handler->display->display_options['fields']['y']['field'] = 'y';
  $handler->display->display_options['fields']['y']['label'] = '';
  $handler->display->display_options['fields']['y']['exclude'] = TRUE;
  $handler->display->display_options['fields']['y']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['y']['separator'] = '';
  /* Field: CM Series Slot: Slot Start Timestamp */
  $handler->display->display_options['fields']['start_timestamp']['id'] = 'start_timestamp';
  $handler->display->display_options['fields']['start_timestamp']['table'] = 'cm_series_slot';
  $handler->display->display_options['fields']['start_timestamp']['field'] = 'start_timestamp';
  $handler->display->display_options['fields']['start_timestamp']['label'] = 'Start';
  $handler->display->display_options['fields']['start_timestamp']['date_format'] = 'short';
  $handler->display->display_options['fields']['start_timestamp']['second_date_format'] = 'long';
  /* Field: CM Series Slot: Slot End Timestamp */
  $handler->display->display_options['fields']['end_timestamp']['id'] = 'end_timestamp';
  $handler->display->display_options['fields']['end_timestamp']['table'] = 'cm_series_slot';
  $handler->display->display_options['fields']['end_timestamp']['field'] = 'end_timestamp';
  $handler->display->display_options['fields']['end_timestamp']['label'] = 'End';
  $handler->display->display_options['fields']['end_timestamp']['date_format'] = 'time_only';
  $handler->display->display_options['fields']['end_timestamp']['second_date_format'] = 'long';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = 'Channel';
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
print cm_series_slot_id_to_label_view_field($row, \'channel\');
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_2']['id'] = 'php_2';
  $handler->display->display_options['fields']['php_2']['table'] = 'views';
  $handler->display->display_options['fields']['php_2']['field'] = 'php';
  $handler->display->display_options['fields']['php_2']['label'] = 'Live Source';
  $handler->display->display_options['fields']['php_2']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_2']['php_output'] = '<?php
print cm_series_slot_id_to_label_view_field($row, \'live_source\');
?>';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Premiere?';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
print cm_series_slot_id_to_label_view_field($row, \'premiere\');
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: CM Series Slot: Airing ID */
  $handler->display->display_options['fields']['airing_id']['id'] = 'airing_id';
  $handler->display->display_options['fields']['airing_id']['table'] = 'cm_series_slot';
  $handler->display->display_options['fields']['airing_id']['field'] = 'airing_id';
  $handler->display->display_options['fields']['airing_id']['label'] = 'Airing';
  $handler->display->display_options['fields']['airing_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['airing_id']['alter']['text'] = '<a href="/airing/[airing_id]">View Scheduled Airing</a>';
  $handler->display->display_options['fields']['airing_id']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['airing_id']['separator'] = '';
  /* Sort criterion: CM Series Slot: Slot Start Time */
  $handler->display->display_options['sorts']['start_time']['id'] = 'start_time';
  $handler->display->display_options['sorts']['start_time']['table'] = 'cm_series_slot';
  $handler->display->display_options['sorts']['start_time']['field'] = 'start_time';
  /* Sort criterion: CM Series Slot: X coordinate on the Slot Grid */
  $handler->display->display_options['sorts']['x']['id'] = 'x';
  $handler->display->display_options['sorts']['x']['table'] = 'cm_series_slot';
  $handler->display->display_options['sorts']['x']['field'] = 'x';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'series_request' => 'series_request',
  );
  /* Filter criterion: CM Series Slot: X coordinate on the Slot Grid */
  $handler->display->display_options['filters']['x']['id'] = 'x';
  $handler->display->display_options['filters']['x']['table'] = 'cm_series_slot';
  $handler->display->display_options['filters']['x']['field'] = 'x';
  $handler->display->display_options['filters']['x']['operator'] = '>';
  $handler->display->display_options['filters']['x']['value']['value'] = '0';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['series_request_series_slot_view_field'] = $view;

  $view = new view();
  $view->name = 'series_request_show_cleanup';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Series Request: Show Cleanup';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Series Request: LIve Show Cleanup';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
    16 => '16',
    7 => '7',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'title' => 'title',
    'title_2' => 'title_2',
    'title_1' => 'title_1',
    'field_premier_date' => 'field_premier_date',
    'field_show_airings_view' => 'field_show_airings_view',
    'field_episode_number' => 'field_episode_number',
    'field_tv_guide_title' => 'field_tv_guide_title',
    'field_short_description' => 'field_short_description',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_premier_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_show_airings_view' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_episode_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tv_guide_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_short_description' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: OG membership: Group Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_airing_show_ref_airing']['id'] = 'reverse_field_airing_show_ref_airing';
  $handler->display->display_options['relationships']['reverse_field_airing_show_ref_airing']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_airing_show_ref_airing']['field'] = 'reverse_field_airing_show_ref_airing';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_series_request_target_id']['id'] = 'field_series_request_target_id';
  $handler->display->display_options['relationships']['field_series_request_target_id']['table'] = 'field_data_field_series_request';
  $handler->display->display_options['relationships']['field_series_request_target_id']['field'] = 'field_series_request_target_id';
  $handler->display->display_options['relationships']['field_series_request_target_id']['relationship'] = 'reverse_field_airing_show_ref_airing';
  $handler->display->display_options['relationships']['field_series_request_target_id']['required'] = TRUE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::cm_series_request_schedule_show_cleanup' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::cm_series_request_schedule_show_title_cleanup' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Show';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['relationship'] = 'field_series_request_target_id';
  $handler->display->display_options['fields']['title_2']['label'] = 'Series Request';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title_1']['label'] = 'Project';
  /* Field: Content: Premiere Date */
  $handler->display->display_options['fields']['field_premier_date']['id'] = 'field_premier_date';
  $handler->display->display_options['fields']['field_premier_date']['table'] = 'field_data_field_premier_date';
  $handler->display->display_options['fields']['field_premier_date']['field'] = 'field_premier_date';
  $handler->display->display_options['fields']['field_premier_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Scheduled Airings */
  $handler->display->display_options['fields']['field_show_airings_view']['id'] = 'field_show_airings_view';
  $handler->display->display_options['fields']['field_show_airings_view']['table'] = 'field_data_field_show_airings_view';
  $handler->display->display_options['fields']['field_show_airings_view']['field'] = 'field_show_airings_view';
  $handler->display->display_options['fields']['field_show_airings_view']['click_sort_column'] = 'vname';
  /* Field: Content: Episode Number */
  $handler->display->display_options['fields']['field_episode_number']['id'] = 'field_episode_number';
  $handler->display->display_options['fields']['field_episode_number']['table'] = 'field_data_field_episode_number';
  $handler->display->display_options['fields']['field_episode_number']['field'] = 'field_episode_number';
  $handler->display->display_options['fields']['field_episode_number']['type'] = 'editable';
  $handler->display->display_options['fields']['field_episode_number']['settings'] = array(
    'click_to_edit' => 0,
    'empty_text' => '',
    'fallback_format' => 'number_integer',
    'fallback_settings' => array(
      'thousand_separator' => '',
      'prefix_suffix' => 1,
    ),
  );
  /* Field: Content: TV Guide Title */
  $handler->display->display_options['fields']['field_tv_guide_title']['id'] = 'field_tv_guide_title';
  $handler->display->display_options['fields']['field_tv_guide_title']['table'] = 'field_data_field_tv_guide_title';
  $handler->display->display_options['fields']['field_tv_guide_title']['field'] = 'field_tv_guide_title';
  $handler->display->display_options['fields']['field_tv_guide_title']['settings'] = array(
    'click_to_edit' => 0,
    'empty_text' => '',
    'fallback_format' => 'text_default',
  );
  /* Field: Content: Short Description */
  $handler->display->display_options['fields']['field_short_description']['id'] = 'field_short_description';
  $handler->display->display_options['fields']['field_short_description']['table'] = 'field_data_field_short_description';
  $handler->display->display_options['fields']['field_short_description']['field'] = 'field_short_description';
  $handler->display->display_options['fields']['field_short_description']['settings'] = array(
    'click_to_edit' => 0,
    'empty_text' => '',
    'fallback_format' => 'text_default',
  );
  /* Sort criterion: Content: Episode Number (field_episode_number) */
  $handler->display->display_options['sorts']['field_episode_number_value']['id'] = 'field_episode_number_value';
  $handler->display->display_options['sorts']['field_episode_number_value']['table'] = 'field_data_field_episode_number';
  $handler->display->display_options['sorts']['field_episode_number_value']['field'] = 'field_episode_number_value';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_series_request_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cm_show' => 'cm_show',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Airing: Is Show Premiere Date? (field_is_show_premiere_date) */
  $handler->display->display_options['filters']['field_is_show_premiere_date_value']['id'] = 'field_is_show_premiere_date_value';
  $handler->display->display_options['filters']['field_is_show_premiere_date_value']['table'] = 'field_data_field_is_show_premiere_date';
  $handler->display->display_options['filters']['field_is_show_premiere_date_value']['field'] = 'field_is_show_premiere_date_value';
  $handler->display->display_options['filters']['field_is_show_premiere_date_value']['relationship'] = 'reverse_field_airing_show_ref_airing';
  $handler->display->display_options['filters']['field_is_show_premiere_date_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Is Placeholder? (field_is_placeholder) */
  $handler->display->display_options['filters']['field_is_placeholder_value']['id'] = 'field_is_placeholder_value';
  $handler->display->display_options['filters']['field_is_placeholder_value']['table'] = 'field_data_field_is_placeholder';
  $handler->display->display_options['filters']['field_is_placeholder_value']['field'] = 'field_is_placeholder_value';
  $handler->display->display_options['filters']['field_is_placeholder_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_is_placeholder_value']['value'] = array(
    1 => '1',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['empty'] = TRUE;
  $handler->display->display_options['header']['php']['php_output'] = '<?php 
print cm_series_slot_grid_link(arg(4));
?>';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no shows associated with this series request.  If there are airings scheduled it means that the airing ares for this Series Reqeust are all  tied to the placeholder show and therefore there are no shows to manage.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['path'] = 'admin/programming/series-request/show-cleanup';

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Series Request Status */
  $handler->display->display_options['fields']['field_series_request_status']['id'] = 'field_series_request_status';
  $handler->display->display_options['fields']['field_series_request_status']['table'] = 'field_data_field_series_request_status';
  $handler->display->display_options['fields']['field_series_request_status']['field'] = 'field_series_request_status';
  $handler->display->display_options['fields']['field_series_request_status']['label'] = '';
  $handler->display->display_options['fields']['field_series_request_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series_request_status']['type'] = 'editable';
  $handler->display->display_options['fields']['field_series_request_status']['settings'] = array(
    'click_to_edit' => 0,
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['code'] = 'admin/programming/series-request/show-cleanup

dsm(arg(3), \'3\');
dsm(arg(4), \'4\');
return arg4;';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'series_request' => 'series_request',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $export['series_request_show_cleanup'] = $view;

  $view = new view();
  $view->name = 'series_request_status_widget';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Series Request: Status Widget';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Series Request Status */
  $handler->display->display_options['fields']['field_series_request_status']['id'] = 'field_series_request_status';
  $handler->display->display_options['fields']['field_series_request_status']['table'] = 'field_data_field_series_request_status';
  $handler->display->display_options['fields']['field_series_request_status']['field'] = 'field_series_request_status';
  $handler->display->display_options['fields']['field_series_request_status']['label'] = '';
  $handler->display->display_options['fields']['field_series_request_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series_request_status']['type'] = 'editable';
  $handler->display->display_options['fields']['field_series_request_status']['settings'] = array(
    'click_to_edit' => 0,
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'series_request' => 'series_request',
  );
  $export['series_request_status_widget'] = $view;

  $view = new view();
  $view->name = 'series_request_viewfields';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Series Request: Viewfields';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Series Request Viewfields (all)';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Series Request Status */
  $handler->display->display_options['fields']['field_series_request_status']['id'] = 'field_series_request_status';
  $handler->display->display_options['fields']['field_series_request_status']['table'] = 'field_data_field_series_request_status';
  $handler->display->display_options['fields']['field_series_request_status']['field'] = 'field_series_request_status';
  $handler->display->display_options['fields']['field_series_request_status']['label'] = '';
  $handler->display->display_options['fields']['field_series_request_status']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_series_request_status']['alter']['text'] = '[title] ([field_series_request_status])';
  $handler->display->display_options['fields']['field_series_request_status']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Season Dates -  start date (field_season_request_dates) */
  $handler->display->display_options['sorts']['field_season_request_dates_value']['id'] = 'field_season_request_dates_value';
  $handler->display->display_options['sorts']['field_season_request_dates_value']['table'] = 'field_data_field_season_request_dates';
  $handler->display->display_options['sorts']['field_season_request_dates_value']['field'] = 'field_season_request_dates_value';
  $handler->display->display_options['sorts']['field_season_request_dates_value']['order'] = 'DESC';
  /* Contextual filter: Content: Project (field_request_project) */
  $handler->display->display_options['arguments']['field_request_project_target_id']['id'] = 'field_request_project_target_id';
  $handler->display->display_options['arguments']['field_request_project_target_id']['table'] = 'field_data_field_request_project';
  $handler->display->display_options['arguments']['field_request_project_target_id']['field'] = 'field_request_project_target_id';
  $handler->display->display_options['arguments']['field_request_project_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_request_project_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_request_project_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_request_project_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_request_project_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'series_request' => 'series_request',
  );

  /* Display: Series Request (all) */
  $handler = $view->new_display('block', 'Series Request (all)', 'block');

  /* Display: Series Request (most recent) */
  $handler = $view->new_display('block', 'Series Request (most recent)', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Series Request Viewfields (most recent)';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $export['series_request_viewfields'] = $view;

  $view = new view();
  $view->name = 'series_requests_approved';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Series Request: Batch Scheduler';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Series Requests: Batch Scheduler';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::cm_series_request_batch_schedule' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Series Request';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'node/[nid]/edit';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'series_request' => 'series_request',
  );
  /* Filter criterion: Content: Series Request Status (field_series_request_status) */
  $handler->display->display_options['filters']['field_series_request_status_value']['id'] = 'field_series_request_status_value';
  $handler->display->display_options['filters']['field_series_request_status_value']['table'] = 'field_data_field_series_request_status';
  $handler->display->display_options['filters']['field_series_request_status_value']['field'] = 'field_series_request_status_value';
  $handler->display->display_options['filters']['field_series_request_status_value']['value'] = array(
    'Approved' => 'Approved',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/series-requests/batch_scheduler';
  $export['series_requests_approved'] = $view;

  return $export;
}
