<?php
/**
 * @file
 * cmm_config.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function cmm_config_filter_default_formats() {
  $formats = array();

  // Exported format: Filtered HTML.
  $formats['filtered_html'] = array(
    'format' => 'filtered_html',
    'name' => 'Filtered HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => -10,
    'editor' => 'ckeditor',
    'editor_settings' => 'a:3:{s:7:"toolbar";a:1:{i:0;a:4:{i:0;a:2:{s:4:"name";s:10:"Formatting";s:5:"items";a:3:{i:0;s:6:"Styles";i:1;s:4:"Bold";i:2;s:6:"Italic";}}i:1;a:2:{s:4:"name";s:5:"Lists";s:5:"items";a:4:{i:0;s:12:"BulletedList";i:1;s:12:"NumberedList";i:2;s:10:"DrupalLink";i:3;s:5:"Table";}}i:2;a:2:{s:4:"name";s:5:"Media";s:5:"items";a:2:{i:0;s:5:"media";i:1;s:10:"Blockquote";}}i:3;a:2:{s:4:"name";s:5:"Tools";s:5:"items";a:2:{i:0;s:6:"Source";i:1;s:8:"Maximize";}}}}s:12:"image_upload";a:5:{s:6:"status";i:1;s:6:"scheme";s:6:"public";s:9:"directory";s:13:"inline-images";s:8:"max_size";s:0:"";s:14:"max_dimensions";a:2:{s:5:"width";s:0:"";s:6:"height";s:0:"";}}s:7:"plugins";a:1:{s:5:"style";a:1:{s:10:"style_list";a:1:{i:0;a:3:{s:4:"name";s:14:"Primary Button";s:7:"element";s:1:"a";s:10:"attributes";a:1:{s:5:"class";s:15:"btn.btn-primary";}}}}}}',
    'filters' => array(
      'filter_url' => array(
        'weight' => -48,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_html' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd> <drupal-entity data-entity-type data-entity-uuid data-entity-id data-view-mode data-entity-embed-display data-entity-embed-settings> <table> <thead> <tbody> <tr> <td> <th>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -44,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Full HTML.
  $formats['full_html'] = array(
    'format' => 'full_html',
    'name' => 'Full HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => -9,
    'editor' => '',
    'editor_settings' => 'a:0:{}',
    'filters' => array(
      'filter_url' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_autop' => array(
        'weight' => 1,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Plain text.
  $formats['plain_text'] = array(
    'format' => 'plain_text',
    'name' => 'Plain text',
    'cache' => 1,
    'status' => 1,
    'weight' => -8,
    'editor' => '',
    'editor_settings' => 'a:0:{}',
    'filters' => array(
      'filter_html_escape' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => 1,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_autop' => array(
        'weight' => 2,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
