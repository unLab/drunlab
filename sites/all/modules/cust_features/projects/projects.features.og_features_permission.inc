<?php
/**
 * @file
 * projects.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function projects_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:project:add user'
  $permissions['node:project:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:administer group'
  $permissions['node:project:administer group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:approve and deny subscription'
  $permissions['node:project:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:create article content'
  $permissions['node:project:create article content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:create discussion content'
  $permissions['node:project:create discussion content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:create events content'
  $permissions['node:project:create events content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:create page content'
  $permissions['node:project:create page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:delete any article content'
  $permissions['node:project:delete any article content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:delete any discussion content'
  $permissions['node:project:delete any discussion content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:delete any events content'
  $permissions['node:project:delete any events content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:delete any page content'
  $permissions['node:project:delete any page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:delete own article content'
  $permissions['node:project:delete own article content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:delete own discussion content'
  $permissions['node:project:delete own discussion content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:delete own events content'
  $permissions['node:project:delete own events content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:delete own page content'
  $permissions['node:project:delete own page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:manage members'
  $permissions['node:project:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:manage permissions'
  $permissions['node:project:manage permissions'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:manage roles'
  $permissions['node:project:manage roles'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:subscribe'
  $permissions['node:project:subscribe'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project:subscribe without approval'
  $permissions['node:project:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:unsubscribe'
  $permissions['node:project:unsubscribe'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:update any article content'
  $permissions['node:project:update any article content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:update any discussion content'
  $permissions['node:project:update any discussion content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:update any events content'
  $permissions['node:project:update any events content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:update any page content'
  $permissions['node:project:update any page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:update group'
  $permissions['node:project:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update own article content'
  $permissions['node:project:update own article content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:update own discussion content'
  $permissions['node:project:update own discussion content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:update own events content'
  $permissions['node:project:update own events content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:update own page content'
  $permissions['node:project:update own page content'] = array(
    'roles' => array(),
  );

  return $permissions;
}
