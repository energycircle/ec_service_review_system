<?php
/**
 * @file
 * ec_service_review_system_demo_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ec_service_review_system_demo_content_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
