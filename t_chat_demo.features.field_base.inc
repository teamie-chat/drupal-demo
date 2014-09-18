<?php
/**
 * @file
 * t_chat_demo.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function t_chat_demo_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'group_audience'
  $field_bases['group_audience'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'group_audience',
    'foreign keys' => array(
      'og' => array(
        'columns' => array(
          'gid' => 'gid',
        ),
        'table' => 'og',
      ),
    ),
    'indexes' => array(
      'gid' => array(
        0 => 'gid',
      ),
    ),
    'locked' => 0,
    'module' => 'og',
    'no_ui' => TRUE,
    'settings' => array(),
    'translatable' => 0,
    'type' => 'group',
  );

  // Exported field_base: 'group_group'
  $field_bases['group_group'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'group_group',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'no_ui' => TRUE,
    'settings' => array(
      'allowed_values' => array(
        0 => 'Not a group',
        1 => 'Group',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  return $field_bases;
}
