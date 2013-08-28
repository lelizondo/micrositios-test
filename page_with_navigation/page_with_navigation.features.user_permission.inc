<?php
/**
 * @file
 * page_with_navigation.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function page_with_navigation_user_default_permissions() {
  $permissions = array();

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
