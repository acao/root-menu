<?php
/**
 * @file
 * root_menu.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function root_menu_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'menu_section_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'root_menu_item';
  $view->human_name = 'Menu Section View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'break_row';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_details' => 'field_details',
    'field_price' => 'field_price',
    'field_diet' => 'field_diet',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'break' => '0',
      'separator2' => '',
      'colspan' => '',
    ),
    'field_details' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'break' => 'field_details',
      'separator2' => '',
      'colspan' => '',
    ),
    'field_price' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'break' => '0',
      'separator2' => '',
      'colspan' => '',
    ),
    'field_diet' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'break' => 'field_diet',
      'separator2' => '',
      'colspan' => '',
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'oops';
  $handler->display->display_options['empty']['area']['format'] = 'panopoly_wysiwyg_text';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_menu_items_fieldable_panels_pane']['id'] = 'reverse_field_menu_items_fieldable_panels_pane';
  $handler->display->display_options['relationships']['reverse_field_menu_items_fieldable_panels_pane']['table'] = 'root_menu_item';
  $handler->display->display_options['relationships']['reverse_field_menu_items_fieldable_panels_pane']['field'] = 'reverse_field_menu_items_fieldable_panels_pane';
  $handler->display->display_options['relationships']['reverse_field_menu_items_fieldable_panels_pane']['label'] = 'Pane';
  $handler->display->display_options['relationships']['reverse_field_menu_items_fieldable_panels_pane']['required'] = TRUE;
  /* Field: Root Menu Item: Label */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'root_menu_item';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Field: Details */
  $handler->display->display_options['fields']['field_details']['id'] = 'field_details';
  $handler->display->display_options['fields']['field_details']['table'] = 'field_data_field_details';
  $handler->display->display_options['fields']['field_details']['field'] = 'field_details';
  $handler->display->display_options['fields']['field_details']['label'] = '';
  $handler->display->display_options['fields']['field_details']['element_label_colon'] = FALSE;
  /* Field: Field: Price */
  $handler->display->display_options['fields']['field_price']['id'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['table'] = 'field_data_field_price';
  $handler->display->display_options['fields']['field_price']['field'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['label'] = '';
  $handler->display->display_options['fields']['field_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_price']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Root Menu Item: Diet */
  $handler->display->display_options['fields']['field_diet']['id'] = 'field_diet';
  $handler->display->display_options['fields']['field_diet']['table'] = 'field_data_field_diet';
  $handler->display->display_options['fields']['field_diet']['field'] = 'field_diet';
  $handler->display->display_options['fields']['field_diet']['label'] = '';
  $handler->display->display_options['fields']['field_diet']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_diet']['delta_offset'] = '0';
  /* Contextual filter: Fieldable pane: Fieldable pane ID */
  $handler->display->display_options['arguments']['fpid']['id'] = 'fpid';
  $handler->display->display_options['arguments']['fpid']['table'] = 'fieldable_panels_panes';
  $handler->display->display_options['arguments']['fpid']['field'] = 'fpid';
  $handler->display->display_options['arguments']['fpid']['relationship'] = 'reverse_field_menu_items_fieldable_panels_pane';
  $handler->display->display_options['arguments']['fpid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['fpid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['fpid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['fpid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['fpid']['summary_options']['items_per_page'] = '25';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'fpid' => array(
      'type' => 'none',
      'context' => 'entity:entityform.changed',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Fieldable pane: Fieldable pane ID',
    ),
  );
  $export['menu_section_view'] = $view;

  return $export;
}
