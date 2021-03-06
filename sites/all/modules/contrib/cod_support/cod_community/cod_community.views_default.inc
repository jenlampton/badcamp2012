<?php

/**
 * Implementation of hook_views_default_views().
 */
function cod_community_views_default_views() {
  $views = array();

  // Exported view: attendees
  $view = new view;
  $view->name = 'attendees';
  $view->description = 'View of users that have signed up and are attendees';
  $view->tag = '';
  $view->base_table = 'users';
  $view->core = 0;
  $view->api_version = '2';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('relationships', array(
    'uid' => array(
      'label' => 'Signup user',
      'required' => 1,
      'id' => 'uid',
      'table' => 'signup_log',
      'field' => 'uid',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
  ));
  $handler->override_option('fields', array(
    'picture' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'exclude' => 0,
      'id' => 'picture',
      'table' => 'users',
      'field' => 'picture',
      'relationship' => 'none',
    ),
    'value_4' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_user' => 0,
      'exclude' => 1,
      'id' => 'value_4',
      'table' => 'profile_values_profile_first',
      'field' => 'value',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'value_5' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 1,
        'text' => '[value_4] [value_5]',
        'make_link' => 0,
        'path' => 'users/[name]',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_user' => 1,
      'exclude' => 0,
      'id' => 'value_5',
      'table' => 'profile_values_profile_last',
      'field' => 'value',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'name' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 1,
        'text' => '([name])',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_user' => 0,
      'overwrite_anonymous' => 0,
      'anonymous_text' => '',
      'exclude' => 0,
      'id' => 'name',
      'table' => 'users',
      'field' => 'name',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'value_3' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_user' => 0,
      'exclude' => 0,
      'id' => 'value_3',
      'table' => 'profile_values_profile_org',
      'field' => 'value',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
  ));
  $handler->override_option('sorts', array(
    'uid' => array(
      'order' => 'DESC',
      'id' => 'uid',
      'table' => 'users',
      'field' => 'uid',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'picture' => array(
      'id' => 'picture',
      'table' => 'users',
      'field' => 'picture',
    ),
  ));
  $handler->override_option('filters', array(
    'value_4' => array(
      'operator' => '=',
      'value' => '',
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'value_4_op',
        'identifier' => 'value_4',
        'label' => 'First name',
        'optional' => 1,
        'remember' => 0,
      ),
      'case' => 0,
      'id' => 'value_4',
      'table' => 'profile_values_profile_first',
      'field' => 'value',
      'relationship' => 'none',
    ),
    'value_5' => array(
      'operator' => '=',
      'value' => '',
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'value_5_op',
        'identifier' => 'value_5',
        'label' => 'Last name',
        'optional' => 1,
        'remember' => 0,
      ),
      'case' => 0,
      'id' => 'value_5',
      'table' => 'profile_values_profile_last',
      'field' => 'value',
      'relationship' => 'none',
    ),
    'value_3' => array(
      'operator' => '=',
      'value' => '',
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'value_3_op',
        'identifier' => 'organization',
        'label' => 'Organization',
        'optional' => 1,
        'remember' => 0,
      ),
      'case' => 1,
      'id' => 'value_3',
      'table' => 'profile_values_profile_org',
      'field' => 'value',
      'relationship' => 'none',
    ),
    'uid' => array(
      'operator' => 'not in',
      'value' => array(
        0 => 0,
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'uid',
      'table' => 'users',
      'field' => 'uid',
      'relationship' => 'uid',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'uid_1' => array(
      'id' => 'uid_1',
      'table' => 'users',
      'field' => 'uid',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', 'Attendees');
  $handler->override_option('empty', 'No one has signed up for this event yet. Attendees will appear as they sign up.');
  $handler->override_option('empty_format', '1');
  $handler->override_option('items_per_page', 100);
  $handler->override_option('use_pager', '1');
  $handler->override_option('distinct', 1);
  $handler->override_option('style_plugin', 'grid');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'columns' => '4',
    'alignment' => 'horizontal',
    'fill_single_line' => 1,
  ));
  $handler = $view->new_display('page', 'Community Page (primary)', 'page_1');
  $handler->override_option('sorts', array(
    'picture' => array(
      'order' => 'DESC',
      'id' => 'picture',
      'table' => 'users',
      'field' => 'picture',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'value_4' => array(
      'operator' => '=',
      'value' => '',
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'value_4_op',
        'identifier' => 'value_4',
        'label' => 'First name',
        'optional' => 1,
        'remember' => 0,
      ),
      'case' => 0,
      'id' => 'value_4',
      'table' => 'profile_values_profile_first',
      'field' => 'value',
      'relationship' => 'none',
    ),
    'value_5' => array(
      'operator' => '=',
      'value' => '',
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'value_5_op',
        'identifier' => 'value_5',
        'label' => 'Last name',
        'optional' => 1,
        'remember' => 0,
      ),
      'case' => 0,
      'id' => 'value_5',
      'table' => 'profile_values_profile_last',
      'field' => 'value',
      'relationship' => 'none',
    ),
    'value_3' => array(
      'operator' => '=',
      'value' => '',
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'value_3_op',
        'identifier' => 'organization',
        'label' => 'Organization',
        'optional' => 1,
        'remember' => 0,
      ),
      'case' => 1,
      'id' => 'value_3',
      'table' => 'profile_values_profile_org',
      'field' => 'value',
      'relationship' => 'none',
    ),
    'uid' => array(
      'operator' => 'not in',
      'value' => array(
        0 => 0,
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'uid',
      'table' => 'users',
      'field' => 'uid',
      'relationship' => 'uid',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'uid_1' => array(
      'operator' => 'not in',
      'value' => array(
        0 => '1',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'uid_1',
      'table' => 'users',
      'field' => 'uid',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('path', 'attendees/all');
  $handler->override_option('menu', array(
    'type' => 'default tab',
    'title' => 'All Attendees',
    'description' => 'Connect with attendees',
    'weight' => '0',
    'name' => 'primary-links',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'normal',
    'title' => 'Attendees',
    'description' => 'BADcamp Attendees',
    'weight' => '0',
    'name' => 'primary-links',
  ));
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->override_option('fields', array(
    'picture' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 1,
      'empty_zero' => 0,
      'exclude' => 0,
      'id' => 'picture',
      'table' => 'users',
      'field' => 'picture',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Use default',
      ),
    ),
    'value' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_user' => 0,
      'exclude' => 1,
      'id' => 'value',
      'table' => 'profile_values_profile_first',
      'field' => 'value',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'value_1' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 1,
        'text' => '[value] [value_1]',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_user' => 1,
      'exclude' => 0,
      'id' => 'value_1',
      'table' => 'profile_values_profile_last',
      'field' => 'value',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'value_2' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_user' => 1,
      'exclude' => 0,
      'id' => 'value_2',
      'table' => 'profile_values_profile_org',
      'field' => 'value',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array());
  $handler->override_option('items_per_page', 12);
  $handler->override_option('use_pager', FALSE);
  $handler->override_option('use_more', 1);
  $handler->override_option('use_more_always', 0);
  $handler->override_option('use_more_text', 'All Attendees');
  $handler->override_option('style_plugin', 'default');
  $handler->override_option('style_options', array(
    'grouping' => '',
  ));
  $handler->override_option('block_description', 'Attendee block');
  $handler->override_option('block_caching', -1);
  $handler = $view->new_display('page', 'Featured Attendees', 'page_2');
  $handler->override_option('relationships', array(
    'uid' => array(
      'label' => 'Signup user',
      'required' => 1,
      'id' => 'uid',
      'table' => 'signup_log',
      'field' => 'uid',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'flag_content_rel' => array(
      'label' => 'flag',
      'required' => 1,
      'flag' => 'attendee_featured',
      'user_scope' => 'any',
      'id' => 'flag_content_rel',
      'table' => 'users',
      'field' => 'flag_content_rel',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'value_4' => array(
      'operator' => '=',
      'value' => '',
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'value_4_op',
        'identifier' => 'value_4',
        'label' => 'First name',
        'optional' => 1,
        'remember' => 0,
      ),
      'case' => 0,
      'id' => 'value_4',
      'table' => 'profile_values_profile_first',
      'field' => 'value',
      'relationship' => 'none',
    ),
    'value_5' => array(
      'operator' => '=',
      'value' => '',
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'value_5_op',
        'identifier' => 'value_5',
        'label' => 'Last name',
        'optional' => 1,
        'remember' => 0,
      ),
      'case' => 0,
      'id' => 'value_5',
      'table' => 'profile_values_profile_last',
      'field' => 'value',
      'relationship' => 'none',
    ),
    'value_3' => array(
      'operator' => '=',
      'value' => '',
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'value_3_op',
        'identifier' => 'organization',
        'label' => 'Organization',
        'optional' => 1,
        'remember' => 0,
      ),
      'case' => 1,
      'id' => 'value_3',
      'table' => 'profile_values_profile_org',
      'field' => 'value',
      'relationship' => 'none',
    ),
    'uid' => array(
      'operator' => 'not in',
      'value' => array(
        0 => 0,
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'uid',
      'table' => 'users',
      'field' => 'uid',
      'relationship' => 'uid',
    ),
  ));
  $handler->override_option('title', 'Featured Attendees');
  $handler->override_option('path', 'attendees/featured');
  $handler->override_option('menu', array(
    'type' => 'tab',
    'title' => 'Featured Attendees',
    'description' => '',
    'weight' => '0',
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));

  $views[$view->name] = $view;

  return $views;
}
