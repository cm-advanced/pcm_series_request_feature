<?php
/**
 * @file
 * pcm_series_request_feature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function pcm_series_request_feature_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_admin|node|series_request|default';
  $field_group->group_name = 'group_admin';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'series_request';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Admin',
    'weight' => '1',
    'children' => array(
      0 => 'field_season_request_dates',
      1 => 'field_series_request_admin',
      2 => 'field_series_request_priority',
      3 => 'field_series_request_rejection_r',
      4 => 'field_series_request_sorted_rank',
      5 => 'field_series_request_status',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-admin field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_admin|node|series_request|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_admin|node|series_request|form';
  $field_group->group_name = 'group_admin';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'series_request';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Admin',
    'weight' => '0',
    'children' => array(
      0 => 'field_series_request_admin',
      1 => 'field_series_request_priority',
      2 => 'field_series_request_rejection_r',
      3 => 'field_series_request_sorted_rank',
      4 => 'field_series_request_status',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-admin field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_admin|node|series_request|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_equipment_and_studio|node|series_request|default';
  $field_group->group_name = 'group_equipment_and_studio';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'series_request';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Equipment And Studio Info',
    'weight' => '4',
    'children' => array(
      0 => 'field_camera_checkout_q',
      1 => 'field_camera_request',
      2 => 'field_editing_request',
      3 => 'field_editing_session_q',
      4 => 'field_studio_request',
      5 => 'field_studio_session_q',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-equipment-and-studio field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_equipment_and_studio|node|series_request|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_equipment_and_studio|node|series_request|form';
  $field_group->group_name = 'group_equipment_and_studio';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'series_request';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Equipment And Studio Info',
    'weight' => '3',
    'children' => array(
      0 => 'field_camera_checkout_q',
      1 => 'field_camera_request',
      2 => 'field_editing_request',
      3 => 'field_editing_session_q',
      4 => 'field_studio_request',
      5 => 'field_studio_session_q',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-equipment-and-studio field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_equipment_and_studio|node|series_request|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_info|node|series_request|default';
  $field_group->group_name = 'group_project_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'series_request';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Project Info',
    'weight' => '2',
    'children' => array(
      0 => 'field_live',
      1 => 'field_objectionable_content',
      2 => 'field_objectionable_content_conf',
      3 => 'field_request_call_in',
      4 => 'field_request_project',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-project-info field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_project_info|node|series_request|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_info|node|series_request|form';
  $field_group->group_name = 'group_project_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'series_request';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Project Info',
    'weight' => '1',
    'children' => array(
      0 => 'field_live',
      1 => 'field_objectionable_content',
      2 => 'field_objectionable_content_conf',
      3 => 'field_request_call_in',
      4 => 'field_request_project',
      5 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-project-info field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_project_info|node|series_request|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_scheduling_info|node|series_request|default';
  $field_group->group_name = 'group_scheduling_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'series_request';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Scheduling Info',
    'weight' => '3',
    'children' => array(
      0 => 'field_playback_preferences',
      1 => 'field_runtime_default',
      2 => 'field_season_request_airings',
      3 => 'field_series_frequency',
      4 => 'field_series_keep_schedule',
      5 => 'field_series_slots',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-scheduling-info field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_scheduling_info|node|series_request|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_scheduling_info|node|series_request|form';
  $field_group->group_name = 'group_scheduling_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'series_request';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Scheduling Info',
    'weight' => '2',
    'children' => array(
      0 => 'field_playback_preferences',
      1 => 'field_runtime_default',
      2 => 'field_series_frequency',
      3 => 'field_series_keep_schedule',
      4 => 'field_series_playback_pref_notes',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-scheduling-info field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_scheduling_info|node|series_request|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Admin');
  t('Equipment And Studio Info');
  t('Project Info');
  t('Scheduling Info');

  return $field_groups;
}
