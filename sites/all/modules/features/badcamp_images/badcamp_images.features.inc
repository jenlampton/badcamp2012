<?php

/**
 * Implementation of hook_imagecache_default_presets().
 */
function badcamp_images_imagecache_default_presets() {
  $items = array(
    'attendee' => array(
      'presetname' => 'attendee',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '150',
            'height' => '150',
          ),
        ),
      ),
    ),
    'attendee_scrunch' => array(
      'presetname' => 'attendee_scrunch',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '80px',
            'height' => '80px',
          ),
        ),
      ),
    ),
    'slide' => array(
      'presetname' => 'slide',
      'actions' => array(
        '0' => array(
          'weight' => '-10',
          'module' => 'imagecache',
          'action' => 'imagecache_deprecated_scale',
          'data' => array(
            'fit' => 'outside',
            'width' => '660',
            'height' => '495',
          ),
        ),
        '1' => array(
          'weight' => '-9',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '660',
            'height' => '495',
          ),
        ),
      ),
    ),
  );
  return $items;
}
