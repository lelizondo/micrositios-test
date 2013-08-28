<?php
/**
 * @file
 * page_with_navigation.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function page_with_navigation_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function page_with_navigation_node_info() {
  $items = array(
    'page_with_navigation' => array(
      'name' => t('Page with Navigation'),
      'base' => 'node_content',
      'description' => t('A page using a custom layout builder to generate pages with multiple rows and columns.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
