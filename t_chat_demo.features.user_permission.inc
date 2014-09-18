<?php
/**
 * @file
 * t_chat_demo.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function t_chat_demo_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'switch users'.
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'use chat'.
  $permissions['use chat'] = array(
    'name' => 'use chat',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 't_chat',
  );

  return $permissions;
}
