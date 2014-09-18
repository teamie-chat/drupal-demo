<?php
/**
 * @file
 * t_chat_demo.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function t_chat_demo_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function t_chat_demo_node_info() {
  $items = array(
    'chat_room' => array(
      'name' => t('Chat Room'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
