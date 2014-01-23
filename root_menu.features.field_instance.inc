<?php
/**
 * @file
 * root_menu.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function root_menu_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'fieldable_panels_pane-fieldable_panels_pane-field_slides'
  $field_instances['fieldable_panels_pane-fieldable_panels_pane-field_slides'] = array(
    'bundle' => 'fieldable_panels_pane',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'flexslider_fields',
        'settings' => array(
          'caption' => 0,
          'image_style' => 'flexslider_full',
          'optionset' => 'default',
        ),
        'type' => 'flexslider',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_slides',
    'label' => 'Slides',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'exclude_cv' => FALSE,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 'public',
          'soundcloud' => 0,
          'vimeo' => 0,
          'youtube' => 0,
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 'media_default--media_browser_1',
          'media_default--media_browser_my_files' => 0,
          'media_internet' => 0,
          'upload' => 'upload',
          'youtube' => 0,
        ),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'fieldable_panels_pane-root_menu_list_section-field_after_text'
  $field_instances['fieldable_panels_pane-root_menu_list_section-field_after_text'] = array(
    'bundle' => 'root_menu_list_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Text that appears after the menu items',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_after_text',
    'label' => 'After Text',
    'required' => 0,
    'settings' => array(
      'exclude_cv' => FALSE,
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'fieldable_panels_pane-root_menu_list_section-field_menu_description'
  $field_instances['fieldable_panels_pane-root_menu_list_section-field_menu_description'] = array(
    'bundle' => 'root_menu_list_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Text that appears before this section of menu items',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_menu_description',
    'label' => 'Before Text',
    'required' => 0,
    'settings' => array(
      'exclude_cv' => FALSE,
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'fieldable_panels_pane-root_menu_list_section-field_menu_items'
  $field_instances['fieldable_panels_pane-root_menu_list_section-field_menu_items'] = array(
    'bundle' => 'root_menu_list_section',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference_views_formatter',
        'settings' => array(
          'view_display' => 'panel_pane_1',
          'view_name' => 'menu_section_view',
        ),
        'type' => 'entityreference_views_formatter',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_menu_items',
    'label' => 'Items',
    'required' => 1,
    'settings' => array(
      'exclude_cv' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'inline_entity_form',
      'settings' => array(
        'fields' => array(),
        'type_settings' => array(),
      ),
      'type' => 'inline_entity_form',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'root_menu_item-root_menu_item-field_details'
  $field_instances['root_menu_item-root_menu_item-field_details'] = array(
    'bundle' => 'root_menu_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'root_menu_item',
    'field_name' => 'field_details',
    'label' => 'Details',
    'required' => 0,
    'settings' => array(
      'exclude_cv' => FALSE,
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'root_menu_item-root_menu_item-field_diet'
  $field_instances['root_menu_item-root_menu_item-field_diet'] = array(
    'bundle' => 'root_menu_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'root_menu_item',
    'field_name' => 'field_diet',
    'label' => 'Diet',
    'required' => 0,
    'settings' => array(
      'exclude_cv' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'root_menu_item-root_menu_item-field_price'
  $field_instances['root_menu_item-root_menu_item-field_price'] = array(
    'bundle' => 'root_menu_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_decimal',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'root_menu_item',
    'field_name' => 'field_price',
    'label' => 'Price',
    'required' => 0,
    'settings' => array(
      'exclude_cv' => FALSE,
      'max' => '',
      'min' => '',
      'prefix' => '$',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 0,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('After Text');
  t('Before Text');
  t('Details');
  t('Diet');
  t('Items');
  t('Price');
  t('Slides');
  t('Text that appears after the menu items');
  t('Text that appears before this section of menu items');

  return $field_instances;
}
