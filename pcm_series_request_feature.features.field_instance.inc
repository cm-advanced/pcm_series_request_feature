<?php
/**
 * @file
 * pcm_series_request_feature.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function pcm_series_request_feature_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'field_collection_item-field_camera_request-field_camera_type'
  $field_instances['field_collection_item-field_camera_request-field_camera_type'] = array(
    'bundle' => 'field_camera_request',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_camera_type',
    'label' => 'Camera Type',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_camera_request-field_open_days'
  $field_instances['field_collection_item-field_camera_request-field_open_days'] = array(
    'bundle' => 'field_camera_request',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_open_days',
    'label' => 'Day',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_camera_request-field_studio_timeslot'
  $field_instances['field_collection_item-field_camera_request-field_studio_timeslot'] = array(
    'bundle' => 'field_camera_request',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_studio_timeslot',
    'label' => 'Time',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_editing_request-field_edit_room'
  $field_instances['field_collection_item-field_editing_request-field_edit_room'] = array(
    'bundle' => 'field_editing_request',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_edit_room',
    'label' => 'Edit Room',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_editing_request-field_open_days'
  $field_instances['field_collection_item-field_editing_request-field_open_days'] = array(
    'bundle' => 'field_editing_request',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_open_days',
    'label' => 'Day',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_editing_request-field_request_duration'
  $field_instances['field_collection_item-field_editing_request-field_request_duration'] = array(
    'bundle' => 'field_editing_request',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_request_duration',
    'label' => 'Request Duration',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_editing_request-field_studio_timeslot'
  $field_instances['field_collection_item-field_editing_request-field_studio_timeslot'] = array(
    'bundle' => 'field_editing_request',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_studio_timeslot',
    'label' => 'Time',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_series_request_admin-field_airing_channel'
  $field_instances['field_collection_item-field_series_request_admin-field_airing_channel'] = array(
    'bundle' => 'field_series_request_admin',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_airing_channel',
    'label' => 'Channel',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_series_request_admin-field_live_source'
  $field_instances['field_collection_item-field_series_request_admin-field_live_source'] = array(
    'bundle' => 'field_series_request_admin',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_live_source',
    'label' => 'Live Source',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_series_request_admin-field_start_day'
  $field_instances['field_collection_item-field_series_request_admin-field_start_day'] = array(
    'bundle' => 'field_series_request_admin',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_start_day',
    'label' => 'Start Day',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 36,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_series_request_admin-field_start_time'
  $field_instances['field_collection_item-field_series_request_admin-field_start_time'] = array(
    'bundle' => 'field_series_request_admin',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_start_time',
    'label' => 'Start Time',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 37,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_studio_request-field_open_days'
  $field_instances['field_collection_item-field_studio_request-field_open_days'] = array(
    'bundle' => 'field_studio_request',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_open_days',
    'label' => 'Day',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_studio_request-field_studio_req_duration'
  $field_instances['field_collection_item-field_studio_request-field_studio_req_duration'] = array(
    'bundle' => 'field_studio_request',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_studio_req_duration',
    'label' => 'Request Duration',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_studio_request-field_studio_timeslot'
  $field_instances['field_collection_item-field_studio_request-field_studio_timeslot'] = array(
    'bundle' => 'field_studio_request',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_studio_timeslot',
    'label' => 'Studio Timeslot',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_studio_request-field_studio_type'
  $field_instances['field_collection_item-field_studio_request-field_studio_type'] = array(
    'bundle' => 'field_studio_request',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_studio_type',
    'label' => 'Studio Type',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-series_request-field_camera_checkout_q'
  $field_instances['node-series_request-field_camera_checkout_q'] = array(
    'bundle' => 'series_request',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'custom' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_camera_checkout_q',
    'label' => 'Camera Checkout',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-series_request-field_camera_request'
  $field_instances['node-series_request-field_camera_request'] = array(
    'bundle' => 'series_request',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'custom' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_camera_request',
    'label' => 'Camera Request',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-series_request-field_editing_request'
  $field_instances['node-series_request-field_editing_request'] = array(
    'bundle' => 'series_request',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'custom' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_editing_request',
    'label' => 'Editing Request',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-series_request-field_editing_session_q'
  $field_instances['node-series_request-field_editing_session_q'] = array(
    'bundle' => 'series_request',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'custom' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_editing_session_q',
    'label' => 'Editing Session',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-series_request-field_live'
  $field_instances['node-series_request-field_live'] = array(
    'bundle' => 'series_request',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'custom' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 22,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_live',
    'label' => 'Live',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-series_request-field_objectionable_content'
  $field_instances['node-series_request-field_objectionable_content'] = array(
    'bundle' => 'series_request',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'custom' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 24,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_objectionable_content',
    'label' => 'Adult Content',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-series_request-field_objectionable_content_conf'
  $field_instances['node-series_request-field_objectionable_content_conf'] = array(
    'bundle' => 'series_request',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter your initials to confirm you have complied with section 6.06 of PCM\'s Operating Policies, Rules and Procedures (OPR&P) stating: I have included the required 15-second disclaimer at the beginning of my program.',
    'display' => array(
      'custom' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 25,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_objectionable_content_conf',
    'label' => 'Your Initials',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 3,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-series_request-field_request_call_in'
  $field_instances['node-series_request-field_request_call_in'] = array(
    'bundle' => 'series_request',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 23,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_request_call_in',
    'label' => 'Call-In',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-series_request-field_request_project'
  $field_instances['node-series_request-field_request_project'] = array(
    'bundle' => 'series_request',
    'default_value' => NULL,
    'default_value_function' => 'entityreference_prepopulate_field_default_value',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 21,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_request_project',
    'label' => 'Project',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'action' => 'disable',
          'action_on_edit' => 1,
          'fallback' => 'redirect',
          'providers' => array(
            'og_context' => 0,
            'url' => 1,
          ),
          'skip_perm' => 0,
          'status' => 1,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-series_request-field_runtime_default'
  $field_instances['node-series_request-field_runtime_default'] = array(
    'bundle' => 'series_request',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_runtime_default',
    'label' => 'Runtime',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-series_request-field_season_request_airings'
  $field_instances['node-series_request-field_season_request_airings'] = array(
    'bundle' => 'series_request',
    'default_value' => array(
      0 => array(
        'vname' => 'series_request_airings|default',
        'vargs' => '',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'viewfield',
        'settings' => array(),
        'type' => 'viewfield_default',
        'weight' => 19,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_season_request_airings',
    'label' => 'Scheduled Airings',
    'required' => 0,
    'settings' => array(
      'allowed_views' => array(
        'airing_conflict_block' => 0,
        'airing_detail_for_grid' => 0,
        'airing_devices_for_show' => 0,
        'airing_grid_jump_menus' => 0,
        'airing_master_list' => 0,
        'airings' => 0,
        'airings_missing_show_content' => 0,
        'airings_producer_dashboard' => 0,
        'aspera_show_rss_lookup' => 0,
        'cable_schedule' => 0,
        'civicrm_multiday_event_cal' => 0,
        'civicrm_multiday_event_event_type_legend' => 0,
        'civicrm_multiday_event_list' => 0,
        'civicrm_multiday_event_list_by_type' => 0,
        'civicrm_multiday_event_public_calendar' => 0,
        'civicrm_multiday_event_upcoming_events' => 0,
        'clone_of_series_request_pending' => 0,
        'cm_cm_show_airings' => 0,
        'cm_project_shows' => 0,
        'cm_project_unapproved_projects' => 0,
        'content_manage' => 0,
        'field_collection_values' => 0,
        'forms' => 0,
        'legal_terms' => 0,
        'legal_users' => 0,
        'media_default' => 0,
        'my_shows' => 0,
        'og_all_user_group_content' => 0,
        'og_extras_groups' => 0,
        'og_extras_members' => 0,
        'og_extras_nodes' => 0,
        'og_members' => 0,
        'og_members_admin' => 0,
        'og_nodes' => 0,
        'og_user_groups' => 0,
        'om_crew_connect_my_skills' => 0,
        'pbcore_search_terms' => 0,
        'producer_search' => 0,
        'producer_tools' => 0,
        'project_airings' => 0,
        'project_cancel' => 0,
        'project_export' => 0,
        'project_legacy_renewals' => 0,
        'project_members' => 0,
        'project_picker' => 0,
        'series_request_airings' => 'series_request_airings',
        'series_request_pending' => 0,
        'series_request_project_settings' => 0,
        'series_request_scheduled_slots' => 0,
        'series_request_scheduling_information' => 0,
        'series_request_search' => 0,
        'series_request_viewfields' => 0,
        'series_requests_approved' => 0,
        'show_admin_displays' => 0,
        'show_report_export' => 0,
        'show_request_daily_airings' => 0,
        'show_request_scheduling_information' => 0,
        'shows' => 0,
        'simple_show_search' => 0,
        'summer_camps' => 0,
        'taxonomy_term' => 0,
        'upcoming_workshops' => 0,
      ),
      'force_default' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'viewfield',
      'settings' => array(),
      'type' => 'viewfield_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-series_request-field_season_request_dates'
  $field_instances['node-series_request-field_season_request_dates'] = array(
    'bundle' => 'series_request',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 22,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_season_request_dates',
    'label' => 'Season Dates',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'blank',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - g:i:sa',
        'input_format_custom' => '',
        'label_position' => 'above',
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-series_request-field_series_frequency'
  $field_instances['node-series_request-field_series_frequency'] = array(
    'bundle' => 'series_request',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'custom' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_series_frequency',
    'label' => 'Series Frequency',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-series_request-field_series_keep_schedule'
  $field_instances['node-series_request-field_series_keep_schedule'] = array(
    'bundle' => 'series_request',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'custom' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_series_keep_schedule',
    'label' => 'Keep Current Programming Schedule?',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-series_request-field_series_playback_pref_notes'
  $field_instances['node-series_request-field_series_playback_pref_notes'] = array(
    'bundle' => 'series_request',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please tell us more about your Series and your desires for scheduling. Do you prefer weekends or weekdays? Morning, afternoon, evening, or late night?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 26,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_series_playback_pref_notes',
    'label' => 'Playback Preferences Notes',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-series_request-field_series_request_admin'
  $field_instances['node-series_request-field_series_request_admin'] = array(
    'bundle' => 'series_request',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Indicate how this Series Request should be scheduled. The dropdown of times will only reflect open slots and will not show slots that have already been filled by an approved Series Request.  This will not actually create airings, that does not happen until all the Series Requests have been approved and the schedule is considered "locked".',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => '',
          'delete' => '',
          'description' => 0,
          'edit' => '',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 21,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_series_request_admin',
    'label' => 'Scheduling',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-series_request-field_series_request_priority'
  $field_instances['node-series_request-field_series_request_priority'] = array(
    'bundle' => 'series_request',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 25,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_series_request_priority',
    'label' => 'Initial Priority Ranking',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'node-series_request-field_series_request_rejection_r'
  $field_instances['node-series_request-field_series_request_rejection_r'] = array(
    'bundle' => 'series_request',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please enter the reason for the rejection, this will be displayed to the Producer.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 23,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_series_request_rejection_r',
    'label' => 'Series Request Rejection Reason',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-series_request-field_series_request_sorted_rank'
  $field_instances['node-series_request-field_series_request_sorted_rank'] = array(
    'bundle' => 'series_request',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 24,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_series_request_sorted_rank',
    'label' => 'Sorted Priority Ranking',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'node-series_request-field_series_request_status'
  $field_instances['node-series_request-field_series_request_status'] = array(
    'bundle' => 'series_request',
    'default_value' => array(
      0 => array(
        'value' => 'Pending',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 20,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_series_request_status',
    'label' => 'Series Request Status',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-series_request-field_series_slots'
  $field_instances['node-series_request-field_series_slots'] = array(
    'bundle' => 'series_request',
    'default_value' => array(
      0 => array(
        'vname' => 'series_request_series_slot_view_field|block',
        'vargs' => '[node:nid]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'viewfield',
        'settings' => array(),
        'type' => 'viewfield_default',
        'weight' => 18,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_series_slots',
    'label' => 'Series Slots',
    'required' => 0,
    'settings' => array(
      'allowed_views' => array(
        '_project_airings_scheduled' => 0,
        'airing_conflict_block' => 0,
        'airing_detail_for_grid' => 0,
        'airing_devices_for_show' => 0,
        'airing_grid_jump_menus' => 0,
        'airing_master_list' => 0,
        'airings' => 0,
        'airings_airing_group' => 0,
        'airings_airings_scheduled' => 0,
        'airings_for_project' => 0,
        'airings_missing_show_content' => 0,
        'airings_producer_dashboard' => 0,
        'airings_spring_forward_airings' => 0,
        'aspera_show_rss_lookup' => 0,
        'cable_schedule' => 0,
        'civicrm_multiday_event_cal' => 0,
        'civicrm_multiday_event_event_type_legend' => 0,
        'civicrm_multiday_event_list' => 0,
        'civicrm_multiday_event_list_by_type' => 0,
        'civicrm_multiday_event_public_calendar' => 0,
        'civicrm_multiday_event_upcoming_events' => 0,
        'clone_of_show_airings' => 0,
        'cm_cm_show_airings' => 0,
        'cm_project_unapproved_projects' => 0,
        'content_manage' => 0,
        'equipment_sale' => 0,
        'feeds_log' => 0,
        'forms' => 0,
        'help_wanted' => 0,
        'legal_terms' => 0,
        'legal_users' => 0,
        'media_default' => 0,
        'new_user_report' => 0,
        'og_all_user_group_content' => 0,
        'og_extras_groups' => 0,
        'og_extras_members' => 0,
        'og_extras_nodes' => 0,
        'og_members' => 0,
        'og_members_admin' => 0,
        'og_nodes' => 0,
        'og_user_groups' => 0,
        'om_crew_connect_my_skills' => 0,
        'pbcore_search_terms' => 0,
        'pcm_project_shows' => 0,
        'pcm_show_airings' => 0,
        'people' => 0,
        'project_airings' => 0,
        'project_cancel' => 0,
        'project_export' => 0,
        'project_legacy_renewals' => 0,
        'project_members' => 0,
        'project_picker' => 0,
        'project_producer_dashboard' => 0,
        'project_renewals_studios' => 0,
        'projects_active_completion_date_past' => 0,
        'projects_staff_dashboard' => 0,
        'series_renewal_overview' => 0,
        'series_renewals' => 0,
        'series_request_airing_cleanup' => 0,
        'series_request_airings' => 0,
        'series_request_airings_scheduled' => 0,
        'series_request_pending' => 0,
        'series_request_playback_preferences' => 0,
        'series_request_project_settings' => 0,
        'series_request_report' => 0,
        'series_request_scheduled_slots' => 0,
        'series_request_scheduling_information' => 0,
        'series_request_search' => 0,
        'series_request_series_slot_view_field' => 'series_request_series_slot_view_field',
        'series_request_show_cleanup' => 0,
        'series_request_spring_forward_slots' => 0,
        'series_request_status_widget' => 0,
        'series_request_viewfields' => 0,
        'series_requests_approved' => 0,
        'series_slot_master_list' => 0,
        'show_admin_displays' => 0,
        'show_bulk_update_required_fields' => 0,
        'show_report_export' => 0,
        'show_request_daily_airings' => 0,
        'show_request_scheduling_information' => 0,
        'shows' => 0,
        'shows_producer_dashboard' => 0,
        'simple_show_search' => 0,
        'summer_camps' => 0,
        'taxonomy_term' => 0,
        'upcoming_workshops' => 0,
        'workflow_pending' => 0,
        'workflow_summary' => 0,
      ),
      'force_default' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'viewfield',
      'settings' => array(),
      'type' => 'viewfield_select',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-series_request-field_studio_request'
  $field_instances['node-series_request-field_studio_request'] = array(
    'bundle' => 'series_request',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'custom' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_studio_request',
    'label' => 'Studio Requests',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-series_request-field_studio_session_q'
  $field_instances['node-series_request-field_studio_session_q'] = array(
    'bundle' => 'series_request',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'custom' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_studio_session_q',
    'label' => 'Studio Session',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'taxonomy_term-runtime_default-field_runtime_seconds'
  $field_instances['taxonomy_term-runtime_default-field_runtime_seconds'] = array(
    'bundle' => 'runtime_default',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_runtime_seconds',
    'label' => 'Runtime Seconds',
    'required' => 1,
    'settings' => array(
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Adult Content');
  t('Call-In');
  t('Camera Checkout');
  t('Camera Request');
  t('Camera Type');
  t('Channel');
  t('Day');
  t('Edit Room');
  t('Editing Request');
  t('Editing Session');
  t('Enter your initials to confirm you have complied with section 6.06 of PCM\'s Operating Policies, Rules and Procedures (OPR&P) stating: I have included the required 15-second disclaimer at the beginning of my program.');
  t('Indicate how this Series Request should be scheduled. The dropdown of times will only reflect open slots and will not show slots that have already been filled by an approved Series Request.  This will not actually create airings, that does not happen until all the Series Requests have been approved and the schedule is considered "locked".');
  t('Initial Priority Ranking');
  t('Keep Current Programming Schedule?');
  t('Live');
  t('Live Source');
  t('Playback Preferences Notes');
  t('Please enter the reason for the rejection, this will be displayed to the Producer.');
  t('Please tell us more about your Series and your desires for scheduling. Do you prefer weekends or weekdays? Morning, afternoon, evening, or late night?');
  t('Project');
  t('Request Duration');
  t('Runtime');
  t('Runtime Seconds');
  t('Scheduled Airings');
  t('Scheduling');
  t('Season Dates');
  t('Series Frequency');
  t('Series Request Rejection Reason');
  t('Series Request Status');
  t('Series Slots');
  t('Sorted Priority Ranking');
  t('Start Day');
  t('Start Time');
  t('Studio Requests');
  t('Studio Session');
  t('Studio Timeslot');
  t('Studio Type');
  t('Time');
  t('Your Initials');

  return $field_instances;
}
