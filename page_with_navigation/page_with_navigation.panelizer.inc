<?php
/**
 * @file
 * page_with_navigation.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function page_with_navigation_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:page_with_navigation:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'page_with_navigation';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'custom';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'col-0' => NULL,
      'col-1' => NULL,
      'col-2' => NULL,
      'col-3' => NULL,
      'col-4' => NULL,
      'col-5' => NULL,
      'col-6' => NULL,
      'col-7' => NULL,
      'col-8' => NULL,
      'col-9' => NULL,
      'col-10' => NULL,
      'col-11' => NULL,
      'col-12' => NULL,
      'col-13' => NULL,
      'col-14' => NULL,
      'col-15' => NULL,
      'col-16' => NULL,
      'col-17' => NULL,
      'col-18' => NULL,
      'col-19' => NULL,
      'col-20' => NULL,
      'col-21' => NULL,
      'col-22' => NULL,
      'col-23' => NULL,
      'col-24' => NULL,
      'col-25' => NULL,
      'col-26' => NULL,
      'col-27' => NULL,
      'col-28' => NULL,
      'col-29' => NULL,
      'col-30' => NULL,
      'col-31' => NULL,
      'col-32' => NULL,
      'col-33' => NULL,
      'col-34' => NULL,
      'col-35' => NULL,
      'col-36' => NULL,
      'col-37' => NULL,
      'col-38' => NULL,
      'col-39' => NULL,
      'col-40' => NULL,
      'col-41' => NULL,
      'col-42' => NULL,
      'col-43' => NULL,
      'col-44' => NULL,
      'col-45' => NULL,
      'col-46' => NULL,
      'col-47' => NULL,
      'col-48' => NULL,
      'col-49' => NULL,
      'col-50' => NULL,
      'col-51' => NULL,
      'col-52' => NULL,
      'col-53' => NULL,
      'col-54' => NULL,
      'col-55' => NULL,
      'col-56' => NULL,
      'col-57' => NULL,
      'col-58' => NULL,
      'col-59' => NULL,
      'col-60' => NULL,
      'col-61' => NULL,
      'col-62' => NULL,
      'col-63' => NULL,
      'col-64' => NULL,
      'col-65' => NULL,
      'col-66' => NULL,
      'col-67' => NULL,
      'col-68' => NULL,
      'col-69' => NULL,
      'col-70' => NULL,
      'col-71' => NULL,
      'col-72' => NULL,
      'col-73' => NULL,
      'col-74' => NULL,
      'col-75' => NULL,
      'col-76' => NULL,
      'col-77' => NULL,
      'col-78' => NULL,
      'col-79' => NULL,
      'col-80' => NULL,
      'col-81' => NULL,
      'col-82' => NULL,
      'col-83' => NULL,
      'col-84' => NULL,
      'col-85' => NULL,
      'col-86' => NULL,
      'col-87' => NULL,
      'col-88' => NULL,
      'col-89' => NULL,
      'col-90' => NULL,
      'col-91' => NULL,
      'col-92' => NULL,
      'col-93' => NULL,
      'col-94' => NULL,
      'col-95' => NULL,
      'col-96' => NULL,
      'col-97' => NULL,
      'col-98' => NULL,
      'col-99' => NULL,
      'col-100' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
    $pane->panel = 'col-0';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'page_manager',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-1'] = $pane;
    $display->panels['col-0'][0] = 'new-1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1';
  $panelizer->display = $display;
  $export['node:page_with_navigation:default'] = $panelizer;

  return $export;
}
