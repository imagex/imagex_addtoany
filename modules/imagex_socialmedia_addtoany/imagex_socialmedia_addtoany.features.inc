<?php
/**
 * @file
 * imagex_socialmedia_addtoany.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function imagex_socialmedia_addtoany_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
