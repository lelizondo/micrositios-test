<?php
/**
 * @file
 * page_with_navigation.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function page_with_navigation_defaultconfig_features() {
  return array(
    'page_with_navigation' => array(
      'panelizer_defaults' => 'panelizer_defaults',
      'strongarm' => 'strongarm',
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_panelizer_defaults().
 */
function page_with_navigation_defaultconfig_panelizer_defaults() {
  $export = array();

  return $export;
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function page_with_navigation_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_page_with_navigation';
  $strongarm->value = 'edit-panelizer';
  $export['additional_settings__active_tab_page_with_navigation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cpn_js_enabled_page_with_navigation';
  $strongarm->value = 0;
  $export['cpn_js_enabled_page_with_navigation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_enabled_page_with_navigation';
  $strongarm->value = 1;
  $export['date_popup_authored_enabled_page_with_navigation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_format_page_with_navigation';
  $strongarm->value = 'm/d/Y - H:i';
  $export['date_popup_authored_format_page_with_navigation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_year_range_page_with_navigation';
  $strongarm->value = '3';
  $export['date_popup_authored_year_range_page_with_navigation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_page_with_navigation';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_page_with_navigation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_page_with_navigation';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_page_with_navigation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_page_with_navigation';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_page_with_navigation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_page_with_navigation';
  $strongarm->value = array();
  $export['node_options_page_with_navigation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_page_with_navigation';
  $strongarm->value = '0';
  $export['node_preview_page_with_navigation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_page_with_navigation';
  $strongarm->value = 0;
  $export['node_submitted_page_with_navigation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_page_with_navigation';
  $strongarm->value = array(
    'status' => 1,
    'view modes' => array(
      'page_manager' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 1,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'teaser' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'featured' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_node_page_with_navigation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_page_with_navigation';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_page_with_navigation'] = $strongarm;

  return $export;
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function page_with_navigation_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node page_with_navigation breadcrumbs'.
  $permissions['administer panelizer node page_with_navigation breadcrumbs'] = array(
    'name' => 'administer panelizer node page_with_navigation breadcrumbs',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node page_with_navigation content'.
  $permissions['administer panelizer node page_with_navigation content'] = array(
    'name' => 'administer panelizer node page_with_navigation content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node page_with_navigation context'.
  $permissions['administer panelizer node page_with_navigation context'] = array(
    'name' => 'administer panelizer node page_with_navigation context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node page_with_navigation defaults'.
  $permissions['administer panelizer node page_with_navigation defaults'] = array(
    'name' => 'administer panelizer node page_with_navigation defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node page_with_navigation layout'.
  $permissions['administer panelizer node page_with_navigation layout'] = array(
    'name' => 'administer panelizer node page_with_navigation layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node page_with_navigation overview'.
  $permissions['administer panelizer node page_with_navigation overview'] = array(
    'name' => 'administer panelizer node page_with_navigation overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node page_with_navigation settings'.
  $permissions['administer panelizer node page_with_navigation settings'] = array(
    'name' => 'administer panelizer node page_with_navigation settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'create page_with_navigation content'.
  $permissions['create page_with_navigation content'] = array(
    'name' => 'create page_with_navigation content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any page_with_navigation content'.
  $permissions['delete any page_with_navigation content'] = array(
    'name' => 'delete any page_with_navigation content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own page_with_navigation content'.
  $permissions['delete own page_with_navigation content'] = array(
    'name' => 'delete own page_with_navigation content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any page_with_navigation content'.
  $permissions['edit any page_with_navigation content'] = array(
    'name' => 'edit any page_with_navigation content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own page_with_navigation content'.
  $permissions['edit own page_with_navigation content'] = array(
    'name' => 'edit own page_with_navigation content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
