<?php
/**
 * @file
 * pcm_series_request_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pcm_series_request_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access draggableviews'.
  $permissions['access draggableviews'] = array(
    'name' => 'access draggableviews',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'draggableviews',
  );

  // Exported permission: 'create field_season_request_airings'.
  $permissions['create field_season_request_airings'] = array(
    'name' => 'create field_season_request_airings',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_season_request_dates'.
  $permissions['create field_season_request_dates'] = array(
    'name' => 'create field_season_request_dates',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_series_request_admin'.
  $permissions['create field_series_request_admin'] = array(
    'name' => 'create field_series_request_admin',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_series_request_priority'.
  $permissions['create field_series_request_priority'] = array(
    'name' => 'create field_series_request_priority',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_series_request_sorted_rank'.
  $permissions['create field_series_request_sorted_rank'] = array(
    'name' => 'create field_series_request_sorted_rank',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_series_request_status'.
  $permissions['create field_series_request_status'] = array(
    'name' => 'create field_series_request_status',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_series_slots'.
  $permissions['create field_series_slots'] = array(
    'name' => 'create field_series_slots',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_start_day'.
  $permissions['create field_start_day'] = array(
    'name' => 'create field_start_day',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create series_request content'.
  $permissions['create series_request content'] = array(
    'name' => 'create series_request content',
    'roles' => array(
      'producer' => 'producer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any series_request content'.
  $permissions['delete any series_request content'] = array(
    'name' => 'delete any series_request content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own series_request content'.
  $permissions['delete own series_request content'] = array(
    'name' => 'delete own series_request content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any series_request content'.
  $permissions['edit any series_request content'] = array(
    'name' => 'edit any series_request content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit field_season_request_airings'.
  $permissions['edit field_season_request_airings'] = array(
    'name' => 'edit field_season_request_airings',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_season_request_dates'.
  $permissions['edit field_season_request_dates'] = array(
    'name' => 'edit field_season_request_dates',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_series_request_admin'.
  $permissions['edit field_series_request_admin'] = array(
    'name' => 'edit field_series_request_admin',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_series_request_priority'.
  $permissions['edit field_series_request_priority'] = array(
    'name' => 'edit field_series_request_priority',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_series_request_sorted_rank'.
  $permissions['edit field_series_request_sorted_rank'] = array(
    'name' => 'edit field_series_request_sorted_rank',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_series_request_status'.
  $permissions['edit field_series_request_status'] = array(
    'name' => 'edit field_series_request_status',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_series_slots'.
  $permissions['edit field_series_slots'] = array(
    'name' => 'edit field_series_slots',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_start_day'.
  $permissions['edit field_start_day'] = array(
    'name' => 'edit field_start_day',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_season_request_airings'.
  $permissions['edit own field_season_request_airings'] = array(
    'name' => 'edit own field_season_request_airings',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_season_request_dates'.
  $permissions['edit own field_season_request_dates'] = array(
    'name' => 'edit own field_season_request_dates',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_series_request_admin'.
  $permissions['edit own field_series_request_admin'] = array(
    'name' => 'edit own field_series_request_admin',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_series_request_priority'.
  $permissions['edit own field_series_request_priority'] = array(
    'name' => 'edit own field_series_request_priority',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_series_request_sorted_rank'.
  $permissions['edit own field_series_request_sorted_rank'] = array(
    'name' => 'edit own field_series_request_sorted_rank',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_series_request_status'.
  $permissions['edit own field_series_request_status'] = array(
    'name' => 'edit own field_series_request_status',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_series_slots'.
  $permissions['edit own field_series_slots'] = array(
    'name' => 'edit own field_series_slots',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_start_day'.
  $permissions['edit own field_start_day'] = array(
    'name' => 'edit own field_start_day',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own series_request content'.
  $permissions['edit own series_request content'] = array(
    'name' => 'edit own series_request content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'manage cm_series_request'.
  $permissions['manage cm_series_request'] = array(
    'name' => 'manage cm_series_request',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'cm_series_request',
  );

  // Exported permission: 'view field_season_request_airings'.
  $permissions['view field_season_request_airings'] = array(
    'name' => 'view field_season_request_airings',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_season_request_dates'.
  $permissions['view field_season_request_dates'] = array(
    'name' => 'view field_season_request_dates',
    'roles' => array(
      'CiviAdmin' => 'CiviAdmin',
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_series_request_admin'.
  $permissions['view field_series_request_admin'] = array(
    'name' => 'view field_series_request_admin',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_series_request_priority'.
  $permissions['view field_series_request_priority'] = array(
    'name' => 'view field_series_request_priority',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_series_request_sorted_rank'.
  $permissions['view field_series_request_sorted_rank'] = array(
    'name' => 'view field_series_request_sorted_rank',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_series_request_status'.
  $permissions['view field_series_request_status'] = array(
    'name' => 'view field_series_request_status',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_series_slots'.
  $permissions['view field_series_slots'] = array(
    'name' => 'view field_series_slots',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_start_day'.
  $permissions['view field_start_day'] = array(
    'name' => 'view field_start_day',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_season_request_airings'.
  $permissions['view own field_season_request_airings'] = array(
    'name' => 'view own field_season_request_airings',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_season_request_dates'.
  $permissions['view own field_season_request_dates'] = array(
    'name' => 'view own field_season_request_dates',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_series_request_admin'.
  $permissions['view own field_series_request_admin'] = array(
    'name' => 'view own field_series_request_admin',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_series_request_priority'.
  $permissions['view own field_series_request_priority'] = array(
    'name' => 'view own field_series_request_priority',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_series_request_sorted_rank'.
  $permissions['view own field_series_request_sorted_rank'] = array(
    'name' => 'view own field_series_request_sorted_rank',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_series_request_status'.
  $permissions['view own field_series_request_status'] = array(
    'name' => 'view own field_series_request_status',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_series_slots'.
  $permissions['view own field_series_slots'] = array(
    'name' => 'view own field_series_slots',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_start_day'.
  $permissions['view own field_start_day'] = array(
    'name' => 'view own field_start_day',
    'roles' => array(
      'Staff - Programming' => 'Staff - Programming',
      'System Admin' => 'System Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
