<?php
/**
 * @file
 * root_menu.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function root_menu_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'food';
  $page->task = 'page';
  $page->admin_title = 'Food';
  $page->admin_description = '';
  $page->path = 'food';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Food',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_food_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'food';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'bootopoly_bryant';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
    $pane->panel = 'contentmain';
    $pane->type = 'panels_ajax_tab_container';
    $pane->subtype = 'panels_ajax_tab_container';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'container_id' => 'root-menu',
      'context' => array(
        0 => 'empty',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-1'] = $pane;
    $display->panels['contentmain'][0] = 'new-1';
    $pane = new stdClass();
    $pane->pid = 'new-2';
    $pane->panel = 'sidebar';
    $pane->type = 'panels_ajax_tab_tabs';
    $pane->subtype = 'panels_ajax_tab_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mini_panels' => array(
        'sandwiches' => array(
          'selected' => 1,
          'tab_title' => 'Sandwiches',
          'url_id' => 'menu-sandwiches',
          'weight' => '-9',
        ),
        'starters_and_salads' => array(
          'selected' => 1,
          'tab_title' => 'Starters & Salads',
          'url_id' => 'menu-starters-salads',
          'weight' => '-10',
        ),
      ),
      'container_id' => 'root-menu',
      'url_enabled' => 1,
      'context' => array(
        0 => 'empty',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-2'] = $pane;
    $display->panels['sidebar'][0] = 'new-2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['food'] = $page;

  return $pages;

}
