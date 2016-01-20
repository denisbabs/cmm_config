<?php
/**
 * @file
 * cmm_config.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cmm_config_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "entity_embed" && $api == "default_entity_embed_configurations") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
