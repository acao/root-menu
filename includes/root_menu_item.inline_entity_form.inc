<?php

/**
 * @file
 * Defines the inline entity form controller for Nodes.
 */

class RootMenuItemInlineEntityFormController extends EntityInlineEntityFormController {

  /**
  * Overrides EntityInlineEntityFormController::labels().
   */
  public function labels() {
    $labels = array(
      'singular' => t('menu item'),
      'plural' => t('menu items'),
    );
    return $labels;
  }

  /**
   * Overrides EntityInlineEntityFormController::tableFields().
   */
  public function tableFields($bundles) {
    $fields = parent::tableFields($bundles);
    $fields['status'] = array(
      'type' => 'property',
      'label' => t('Status'),
      'weight' => 100,
    );
    $fields['field_price'] = array(
      'type' => 'field',
      'label' => t('Price'),
      'weight' => 100,
    );
    $fields['field_details'] = array(
      'type' => 'field',
      'label' => t('Details'),
      'weight' => 100,
    );
    $fields['field_diet'] = array(
      'type' => 'field',
      'label' => t('Diet'),
      'weight' => 100,
    );

    return $fields;
  }

  /**
   * Overrides EntityInlineEntityFormController::entityForm().
   */
  public function entityForm($entity_form, &$form_state) {
    $menu_item = $entity_form['#entity'];
    $extra_fields = field_info_extra_fields('root_menu_item', 'root_menu_item', 'form');
    $entity_form['status'] = array(
      '#type' => 'radios',
      //'#access' => user_access('administer nodes'),
      '#title' => t('Status'),
      '#default_value' => isset($menu_item->status) ? $menu_item->status : '0',
      '#options' => array(1 => t('Published'), 0 => t('Unpublished')),
      '#required' => TRUE,
      '#weight' => 99,
    );
    $entity_form['title'] = array(
      '#type' => 'textfield',
      //'#access' => user_access('administer nodes'),
      '#title' => t('Title'),
      '#default_value' => isset($menu_item->title) ? $menu_item->title : '',
      '#required' => TRUE,
      '#weight' => -10,
    );

    $langcode = entity_language('root_menu_item', $menu_item);
    field_attach_form('root_menu_item', $menu_item, $entity_form, $form_state, $langcode);

    return $entity_form;
  }

  /**
   * Overrides EntityInlineEntityFormController::entityFormSubmit().
   */
  public function entityFormSubmit(&$entity_form, &$form_state) {
    parent::entityFormSubmit($entity_form, $form_state);
  }
}
