<?php

/**
 * @file
 * Intergrates Entity bundle Redirect with Features.
 */

/**
 * Implements hook_features_export_options().
 */
function entity_bundle_redirect_features_export_options() {

  /*$sql = db_select('whos_amung_us_block', 'b')
    ->fields('b')
    ->execute();
  $options = array();
  while ($row = $sql->fetchAssoc()) {
    $options[$row['machine_name']] = $row['info'];
  }
  return $options;*/

}

/**
 * Implements hook_features_export().
 */
function entity_bundle_redirect_features_export($data, &$export, $module_name = '') {

  /*$export['dependencies']['features'] = 'features';
  $export['dependencies']['whos_amung_us'] = 'whos_amung_us';
  $export['dependencies']['block'] = 'block';
  $sql = db_select('whos_amung_us_block', 'b')
    ->fields('b', array('machine_name'))
    ->execute();
  while ($row = $sql->fetchAssoc()) {
    if (in_array($row['machine_name'], $data)) {
      $export['features']['whos_amung_us'][$row['machine_name']] = $row['machine_name'];
    }
  }
  return $export;*/

}

/**
 * Implements hook_features_export_render().
 */
function entity_bundle_redirect_features_export_render($module, $data) {

  /*$code[] = '  $whos_amung_us = array();';
  $code[] = '';
  foreach ($data as $delta) {
    $block = whos_amung_us_item_load($delta);
    if ($block) {
      unset($block['bid']);
      $block_export = features_var_export($block, '  ');
      $code[] = '  // Exported whos.amung.us block: ' . $block['info'];
      $code[] = '  $whos_amung_us[\'' . $delta . '\'] = ' . $block_export . ';';
      $code[] = '';
    }
  }
  $code[] = '  return $whos_amung_us;';
  $code = implode("\n", $code);
  return array('whos_amung_us_default_blocks' => $code);*/

}

/**
 * Implements hook_features_export_revert().
 */
function entity_bundle_redirect_features_revert($module) {

  /*module_load_include('inc', 'features', 'features.export');
  foreach (features_get_default('whos_amung_us', $module) as $key => $block) {
    whos_amung_us_feature_update_block($block);
  }*/

}

/**
 * Implements hook_features_export_rebuild().
 */
function entity_bundle_redirect_features_export_rebuild($module) {

  entity_bundle_redirect_features_revert($module);

}
