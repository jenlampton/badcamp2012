<?php

/**
 * Implementation of hook_strongarm().
 */
function cod_base_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_toolbar';
  $strongarm->value = array(
    'layout' => 'vertical',
    'position' => 'nw',
    'behavior' => 'df',
    'blocks' => array(
      'admin-create' => -1,
      'admin-account' => -1,
      'admin-menu' => 1,
      'menu-menu-conference-admin' => -1,
    ),
  );
  $export['admin_toolbar'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'configurable_timezones';
  $strongarm->value = '0';
  $export['configurable_timezones'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'signup_ignore_default_fields';
  $strongarm->value = 1;
  $export['signup_ignore_default_fields'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_footer';
  $strongarm->value = 'Built on <a href="http://usecod.com">COD</a>, hosted on <a href="http://www.getpantheon.com">Pantheon</a> and powered by <a href="http://drupal.org">Drupal</a>';
  $export['site_footer'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 0,
    'toggle_mission' => 1,
    'toggle_node_user_picture' => 0,
    'toggle_comment_user_picture' => 0,
    'toggle_search' => 1,
    'toggle_favicon' => 1,
    'toggle_primary_links' => 1,
    'toggle_secondary_links' => 1,
    'toggle_node_info_event' => 0,
    'toggle_node_info_job' => 0,
    'toggle_node_info_news' => 1,
    'toggle_node_info_page' => 0,
    'toggle_node_info_product' => 0,
    'toggle_node_info_room' => 0,
    'toggle_node_info_schedule_item' => 0,
    'toggle_node_info_session' => 1,
    'toggle_node_info_slide' => 0,
    'toggle_node_info_sponsor' => 0,
    'toggle_node_info_sponsorship' => 0,
    'toggle_node_info_time_slot' => 0,
    'toggle_node_info_training_session' => 0,
    'toggle_node_info_webform' => 0,
    'default_logo' => 0,
    'logo_path' => 'sites/default/files/logo.png',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'nice_menus_custom_css' => '',
  );
  $export['theme_settings'] = $strongarm;

  return $export;
}
