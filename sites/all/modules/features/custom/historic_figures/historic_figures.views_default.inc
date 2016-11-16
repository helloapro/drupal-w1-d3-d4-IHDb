<?php
/**
 * @file
 * historic_figures.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function historic_figures_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'historical_figures';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'historical figures';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'historical figures';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Birthday */
  $handler->display->display_options['fields']['field_birthday']['id'] = 'field_birthday';
  $handler->display->display_options['fields']['field_birthday']['table'] = 'field_data_field_birthday';
  $handler->display->display_options['fields']['field_birthday']['field'] = 'field_birthday';
  $handler->display->display_options['fields']['field_birthday']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Living? */
  $handler->display->display_options['fields']['field_living_']['id'] = 'field_living_';
  $handler->display->display_options['fields']['field_living_']['table'] = 'field_data_field_living_';
  $handler->display->display_options['fields']['field_living_']['field'] = 'field_living_';
  /* Field: Content: Morality */
  $handler->display->display_options['fields']['field_morality']['id'] = 'field_morality';
  $handler->display->display_options['fields']['field_morality']['table'] = 'field_data_field_morality';
  $handler->display->display_options['fields']['field_morality']['field'] = 'field_morality';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'historical_figure' => 'historical_figure',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'historical-figures';
  $export['historical_figures'] = $view;

  return $export;
}
