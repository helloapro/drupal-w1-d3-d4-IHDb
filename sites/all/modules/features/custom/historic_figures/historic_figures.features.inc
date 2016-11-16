<?php
/**
 * @file
 * historic_figures.features.inc
 */

/**
 * Implements hook_views_api().
 */
function historic_figures_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function historic_figures_node_info() {
  $items = array(
    'historical_figure' => array(
      'name' => t('Historical Figure'),
      'base' => 'node_content',
      'description' => t('add information about a historical figure '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
