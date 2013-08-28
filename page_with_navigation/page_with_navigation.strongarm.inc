<?php
/**
 * @file
 * page_with_navigation.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function page_with_navigation_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_page_with_navigation';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_page_with_navigation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_page_with_navigation';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_page_with_navigation'] = $strongarm;

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

  return $export;
}
