<?php
/**
 * @file
 * cmm_config.default_entity_embed_configurations.inc
 */

/**
 * Implements hook_default_entity_embed_configuration().
 */
function cmm_config_default_entity_embed_configuration() {
  $export = array();

  $configuration = new stdClass();
  $configuration->disabled = FALSE; /* Edit this to true to make a default configuration disabled initially */
  $configuration->api_version = 1;
  $configuration->admin_title = 'Media';
  $configuration->name = 'media';
  $configuration->entity_type = 'file';
  $configuration->entity_type_bundles = array();
  $configuration->button_icon_fid = 154;
  $configuration->display_plugins = array();
  $export['media'] = $configuration;

  return $export;
}
