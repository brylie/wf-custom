<?php
/**
 * @file
 * pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function pages_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'about_western_friend';
  $page->task = 'page';
  $page->admin_title = 'About Western Friend';
  $page->admin_description = 'About page, showing board of directors, descriptive text, address, etc.';
  $page->path = 'about';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'About Us',
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
  $handler->name = 'page_about_western_friend_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'about_western_friend';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_threecol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => array(
        'column_type' => 'col',
        'column_size' => '12',
        'offset_type' => 'col-offset',
        'offset_size' => '0',
      ),
      'left' => array(
        'column_type' => 'col',
        'column_size' => '4',
        'offset_type' => 'col-offset',
        'offset_size' => '0',
      ),
      'middle' => array(
        'column_type' => 'col',
        'column_size' => '4',
        'offset_type' => 'col-offset',
        'offset_size' => '0',
      ),
      'right' => array(
        'column_type' => 'col',
        'column_size' => '4',
        'offset_type' => 'col-offset',
        'offset_size' => '0',
      ),
      'bottom' => array(
        'column_type' => 'col',
        'column_size' => '12',
        'offset_type' => 'col-offset',
        'offset_size' => '0',
      ),
    ),
    'top' => array(
      'style' => 'bootstrap_region',
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'middle' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
    'bottom' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = 'About Western Friend';
  $display->uuid = '5e7c79ca-44a5-4496-a7cd-e3b8be687715';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3ec277b4-f0d3-428b-af81-32f2004272e5';
    $pane->panel = 'left';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '289',
      'links' => 1,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'full',
      'link_node_title' => 0,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'modifier_class' => 'panel-primary',
        'collapsible' => 0,
        'collapsed' => 1,
        'hide_classes' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'additional_classes' => array(
          'clearfix' => 'clearfix',
          'pull-left' => 0,
          'pull-right' => 0,
        ),
      ),
      'style' => 'bootstrap_styles:panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3ec277b4-f0d3-428b-af81-32f2004272e5';
    $display->content['new-3ec277b4-f0d3-428b-af81-32f2004272e5'] = $pane;
    $display->panels['left'][0] = 'new-3ec277b4-f0d3-428b-af81-32f2004272e5';
    $pane = new stdClass();
    $pane->pid = 'new-92cb61ec-e5ba-4e15-b7aa-bdcb17ae4ca9';
    $pane->panel = 'middle';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '290',
      'links' => 1,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'full',
      'link_node_title' => 0,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'modifier_class' => 'panel-primary',
        'collapsible' => 0,
        'collapsed' => 1,
        'hide_classes' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'additional_classes' => array(
          'clearfix' => 'clearfix',
          'pull-left' => 0,
          'pull-right' => 0,
        ),
      ),
      'style' => 'bootstrap_styles:panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '92cb61ec-e5ba-4e15-b7aa-bdcb17ae4ca9';
    $display->content['new-92cb61ec-e5ba-4e15-b7aa-bdcb17ae4ca9'] = $pane;
    $display->panels['middle'][0] = 'new-92cb61ec-e5ba-4e15-b7aa-bdcb17ae4ca9';
    $pane = new stdClass();
    $pane->pid = 'new-4f9f34bf-6e58-4ee2-81b8-2e5f765a2ea8';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'History',
      'body' => '

Originally founded in 1929 by Howard and Anna Brinton, Western Friend was known as Friends Bulletin for the better part of eighty years. At the time, Pacific Yearly Meeting stretched from eastern Colorado and New Mexico, west to Hawaii and north to Washington and Montana. Friends Bulletin was- and remains- a valuable means for these far-flung Friends to stay in touch with one another. Even after Intermountain Yearly Meeting (CO, NM, AZ and UT) and North Pacific Yearly Meeting (WA, OR, ID, MT) split off from PYM in the mid-1970′s, Friends in the West continued to place a premium on maintaining their connections with one another.

Over the decades, it grew from a single-sheet, black-and-white broadside focused on announcements of births, deaths, and upcoming events, to the full-fledged color magazine featuring articles by and about Friends in the West, known since 2008 as Western Friend. This website and additional programs such as workshops and speaker events serve to further our mission of building practical and spiritual connections between Friends in the West in print, online, and face to face.
',
      'format' => 'basic',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'modifier_class' => 'panel-primary',
        'collapsible' => 0,
        'collapsed' => 1,
        'hide_classes' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'additional_classes' => array(
          'clearfix' => 'clearfix',
          'pull-left' => 0,
          'pull-right' => 0,
        ),
      ),
      'style' => 'bootstrap_styles:panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4f9f34bf-6e58-4ee2-81b8-2e5f765a2ea8';
    $display->content['new-4f9f34bf-6e58-4ee2-81b8-2e5f765a2ea8'] = $pane;
    $display->panels['right'][0] = 'new-4f9f34bf-6e58-4ee2-81b8-2e5f765a2ea8';
    $pane = new stdClass();
    $pane->pid = 'new-9c4a358b-78c5-4526-91d2-d78ad59bbf9b';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '<none>',
      'body' => '<p>Western Friend is published by the Friends Bulletin Corporation, an independent 501(c)3 non-profit corporation established jointly by Pacific, North Pacific and Intermountain Yearly Meetings. While Western Friend is the official publication of these three Yearly Meetings, the opinions expressed within the magazine and on this website are those of the authors, not of the Meetings. Board of Directors for Friends Bulletin Corporation comprises three members from each of the three Yearly Meetings. The board meets three times a year, rotating between the regions of the Yearly Meetings. Each board meeting is typically hosted by a local Friends Meeting, and local Friends are encouraged to visit with the board and staff!</p>
',
      'format' => 'basic',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'modifier_class' => '',
        'collapsible' => 0,
        'collapsed' => 0,
        'hide_classes' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'additional_classes' => array(
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
        ),
      ),
      'style' => 'bootstrap_styles:panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9c4a358b-78c5-4526-91d2-d78ad59bbf9b';
    $display->content['new-9c4a358b-78c5-4526-91d2-d78ad59bbf9b'] = $pane;
    $display->panels['top'][0] = 'new-9c4a358b-78c5-4526-91d2-d78ad59bbf9b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-9c4a358b-78c5-4526-91d2-d78ad59bbf9b';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['about_western_friend'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'bookstore';
  $page->task = 'page';
  $page->admin_title = 'Bookstore';
  $page->admin_description = 'Display book,  and possibly other, products.';
  $page->path = 'books';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Bookstore',
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
  $handler->name = 'page_bookstore_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'bookstore';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => array(
        'region_title' => '',
        'modifier_class' => 'panel-primary',
        'collapsible' => 0,
        'collapsed' => 0,
        'hide_classes' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'additional_classes' => array(
          'clearfix' => 'clearfix',
          'pull-left' => 0,
          'pull-right' => 0,
        ),
      ),
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
    'top' => array(
      'style' => 'bootstrap_styles:panel',
    ),
  );
  $display->cache = array();
  $display->title = 'Bookstore';
  $display->uuid = '418c56e5-4ee0-48a3-89b3-a599f2ab760f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-91974d12-5c99-4050-b24a-5b310d6a00b8';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'bookstore-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 1,
              1 => 2,
              2 => 4,
              3 => 5,
              4 => 6,
              5 => 3,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '91974d12-5c99-4050-b24a-5b310d6a00b8';
    $display->content['new-91974d12-5c99-4050-b24a-5b310d6a00b8'] = $pane;
    $display->panels['top'][0] = 'new-91974d12-5c99-4050-b24a-5b310d6a00b8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-91974d12-5c99-4050-b24a-5b310d6a00b8';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['bookstore'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'community';
  $page->task = 'page';
  $page->admin_title = 'Community';
  $page->admin_description = '';
  $page->path = 'community';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Commuity',
    'name' => 'main-menu',
    'weight' => '1',
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
  $handler->name = 'page_community_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'community';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_threecol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => array(
        'column_type' => 'col-lg',
        'column_size' => '12',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'left' => array(
        'column_type' => 'col-sm',
        'column_size' => '4',
        'offset_type' => 'col-sm-offset',
        'offset_size' => '0',
      ),
      'right' => array(
        'column_type' => 'col-sm',
        'column_size' => '4',
        'offset_type' => 'col-sm-offset',
        'offset_size' => '0',
      ),
      'bottom' => NULL,
      'middle' => array(
        'column_type' => 'col-sm',
        'column_size' => '4',
        'offset_type' => 'col-sm-offset',
        'offset_size' => '0',
      ),
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
    'top' => array(
      'style' => 'bootstrap_region',
    ),
    'middle' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '5f4ed272-b3b7-46de-8b83-105016eb6932';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5002d2cc-e495-4e2a-978b-c09d2893be2c';
    $pane->panel = 'bottom';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'basic',
      'substitute' => TRUE,
      'name' => 'find_quaker_organizations',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'modifier_class' => 'panel-primary',
        'collapsible' => 0,
        'collapsed' => 0,
        'hide_classes' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'additional_classes' => array(
          'pull-left' => 'pull-left',
          'pull-right' => 0,
          'clearfix' => 0,
        ),
      ),
      'style' => 'bootstrap_styles:panel',
    );
    $pane->css = array(
      'css_id' => 'western-friend-affiliates',
      'css_class' => 'col-sm-5 wf-custom-pane',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5002d2cc-e495-4e2a-978b-c09d2893be2c';
    $display->content['new-5002d2cc-e495-4e2a-978b-c09d2893be2c'] = $pane;
    $display->panels['bottom'][0] = 'new-5002d2cc-e495-4e2a-978b-c09d2893be2c';
    $pane = new stdClass();
    $pane->pid = 'new-57ba9563-af3a-4267-8bb9-1fe71624438f';
    $pane->panel = 'bottom';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'basic',
      'substitute' => TRUE,
      'name' => 'quaker_finder_text',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'modifier_class' => 'panel-primary',
        'collapsible' => 0,
        'collapsed' => 0,
        'hide_classes' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'additional_classes' => array(
          'pull-right' => 'pull-right',
          'pull-left' => 0,
          'clearfix' => 0,
        ),
      ),
      'style' => 'bootstrap_styles:panel',
    );
    $pane->css = array(
      'css_id' => 'quaker-finder',
      'css_class' => 'col-sm-5 wf-custom-pane',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '57ba9563-af3a-4267-8bb9-1fe71624438f';
    $display->content['new-57ba9563-af3a-4267-8bb9-1fe71624438f'] = $pane;
    $display->panels['bottom'][1] = 'new-57ba9563-af3a-4267-8bb9-1fe71624438f';
    $pane = new stdClass();
    $pane->pid = 'new-bb9efe74-34b5-41f9-8c53-56032f65cfd7';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'basic',
      'substitute' => TRUE,
      'name' => 'community_page_imym_information',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '604800',
        'granularity' => 'none',
      ),
    );
    $pane->style = array(
      'settings' => array(
        'modifier_class' => 'panel-primary',
        'collapsible' => 0,
        'collapsed' => 0,
        'hide_classes' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'additional_classes' => array(
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
        ),
      ),
      'style' => 'bootstrap_styles:panel',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'wf-custom-pane',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bb9efe74-34b5-41f9-8c53-56032f65cfd7';
    $display->content['new-bb9efe74-34b5-41f9-8c53-56032f65cfd7'] = $pane;
    $display->panels['left'][0] = 'new-bb9efe74-34b5-41f9-8c53-56032f65cfd7';
    $pane = new stdClass();
    $pane->pid = 'new-a5659e03-ae09-4908-8fcc-18e2262c4d7f';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'basic',
      'substitute' => TRUE,
      'name' => 'community_page_npym_information',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '604800',
        'granularity' => 'none',
      ),
    );
    $pane->style = array(
      'settings' => array(
        'modifier_class' => 'panel-primary',
        'collapsible' => 0,
        'collapsed' => 0,
        'hide_classes' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'additional_classes' => array(
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
        ),
      ),
      'style' => 'bootstrap_styles:panel',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'wf-custom-pane',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a5659e03-ae09-4908-8fcc-18e2262c4d7f';
    $display->content['new-a5659e03-ae09-4908-8fcc-18e2262c4d7f'] = $pane;
    $display->panels['middle'][0] = 'new-a5659e03-ae09-4908-8fcc-18e2262c4d7f';
    $pane = new stdClass();
    $pane->pid = 'new-fac110a8-d152-4415-98d1-c073ded5bd32';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'basic',
      'substitute' => TRUE,
      'name' => 'community_page_pym_information',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '604800',
        'granularity' => 'none',
      ),
    );
    $pane->style = array(
      'settings' => array(
        'modifier_class' => 'panel-primary',
        'collapsible' => 0,
        'collapsed' => 0,
        'hide_classes' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'additional_classes' => array(
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
        ),
      ),
      'style' => 'bootstrap_styles:panel',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'wf-custom-pane',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fac110a8-d152-4415-98d1-c073ded5bd32';
    $display->content['new-fac110a8-d152-4415-98d1-c073ded5bd32'] = $pane;
    $display->panels['right'][0] = 'new-fac110a8-d152-4415-98d1-c073ded5bd32';
    $pane = new stdClass();
    $pane->pid = 'new-4fa1ecab-5573-47c0-abf0-f04b1428c331';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'basic',
      'substitute' => TRUE,
      'name' => 'community_page_introductory_text',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'modifier_class' => '',
        'collapsible' => 0,
        'collapsed' => 0,
        'hide_classes' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'additional_classes' => array(
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
        ),
      ),
      'style' => 'bootstrap_styles:panel',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'wf-custom-pane',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4fa1ecab-5573-47c0-abf0-f04b1428c331';
    $display->content['new-4fa1ecab-5573-47c0-abf0-f04b1428c331'] = $pane;
    $display->panels['top'][0] = 'new-4fa1ecab-5573-47c0-abf0-f04b1428c331';
    $pane = new stdClass();
    $pane->pid = 'new-436d25c4-81c1-416e-8bf4-25f721b4a588';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'basic',
      'substitute' => TRUE,
      'name' => 'community_page_events_calendar_panel',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'modifier_class' => '',
        'collapsible' => 0,
        'collapsed' => 0,
        'hide_classes' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'additional_classes' => array(
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
        ),
      ),
      'style' => 'bootstrap_styles:panel',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'wf-custom-pane',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '436d25c4-81c1-416e-8bf4-25f721b4a588';
    $display->content['new-436d25c4-81c1-416e-8bf4-25f721b4a588'] = $pane;
    $display->panels['top'][1] = 'new-436d25c4-81c1-416e-8bf4-25f721b4a588';
    $pane = new stdClass();
    $pane->pid = 'new-12bba70a-fe53-4059-a8b5-0f24a74e25b5';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'basic',
      'substitute' => TRUE,
      'name' => 'community_page_wf_connect',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'modifier_class' => '',
        'collapsible' => 0,
        'collapsed' => 0,
        'hide_classes' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'additional_classes' => array(
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
        ),
      ),
      'style' => 'bootstrap_styles:panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '12bba70a-fe53-4059-a8b5-0f24a74e25b5';
    $display->content['new-12bba70a-fe53-4059-a8b5-0f24a74e25b5'] = $pane;
    $display->panels['top'][2] = 'new-12bba70a-fe53-4059-a8b5-0f24a74e25b5';
    $pane = new stdClass();
    $pane->pid = 'new-6e607e88-f61c-4f7f-ba06-32e752235bbe';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'basic',
      'substitute' => TRUE,
      'name' => 'community_page_meeting_listings_introduction',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'modifier_class' => 'panel-primary',
        'collapsible' => 0,
        'collapsed' => 0,
        'hide_classes' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'additional_classes' => array(
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
        ),
      ),
      'style' => 'bootstrap_styles:panel',
    );
    $pane->css = array(
      'css_id' => 'meetings',
      'css_class' => 'wf-custom-pane community-meetings',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '6e607e88-f61c-4f7f-ba06-32e752235bbe';
    $display->content['new-6e607e88-f61c-4f7f-ba06-32e752235bbe'] = $pane;
    $display->panels['top'][3] = 'new-6e607e88-f61c-4f7f-ba06-32e752235bbe';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['community'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'connect';
  $page->task = 'page';
  $page->admin_title = 'Connect';
  $page->admin_description = 'Connect page, links to various conference rooms.';
  $page->path = 'connect';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_connect_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'connect';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Connect page',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Western Friend Connect';
  $display->uuid = 'e33f8555-a85d-4b88-953a-0e7b39c748c0';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c1fdd27e-c385-4ce1-a5ae-27f42bf20cf7';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'basic',
      'substitute' => TRUE,
      'name' => 'connect_page_committee_room',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'modifier_class' => '',
        'collapsible' => 0,
        'collapsed' => 0,
        'hide_classes' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'additional_classes' => array(
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
        ),
      ),
      'style' => 'bootstrap_styles:panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c1fdd27e-c385-4ce1-a5ae-27f42bf20cf7';
    $display->content['new-c1fdd27e-c385-4ce1-a5ae-27f42bf20cf7'] = $pane;
    $display->panels['top'][0] = 'new-c1fdd27e-c385-4ce1-a5ae-27f42bf20cf7';
    $pane = new stdClass();
    $pane->pid = 'new-c8927836-34c5-46e7-976e-c2847cbaa1c5';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'basic',
      'substitute' => TRUE,
      'name' => 'connect_page_workshop_room',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'modifier_class' => '',
        'collapsible' => 0,
        'collapsed' => 0,
        'hide_classes' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'additional_classes' => array(
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
        ),
      ),
      'style' => 'bootstrap_styles:panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c8927836-34c5-46e7-976e-c2847cbaa1c5';
    $display->content['new-c8927836-34c5-46e7-976e-c2847cbaa1c5'] = $pane;
    $display->panels['top'][1] = 'new-c8927836-34c5-46e7-976e-c2847cbaa1c5';
    $pane = new stdClass();
    $pane->pid = 'new-47ae9439-95e3-4483-a305-b00749b010ea';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'basic',
      'substitute' => TRUE,
      'name' => 'connect_page_family_room',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'modifier_class' => '',
        'collapsible' => 0,
        'collapsed' => 0,
        'hide_classes' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'additional_classes' => array(
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
        ),
      ),
      'style' => 'bootstrap_styles:panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '47ae9439-95e3-4483-a305-b00749b010ea';
    $display->content['new-47ae9439-95e3-4483-a305-b00749b010ea'] = $pane;
    $display->panels['top'][2] = 'new-47ae9439-95e3-4483-a305-b00749b010ea';
    $pane = new stdClass();
    $pane->pid = 'new-c4722470-af5b-4117-acb4-3bcea05a95d7';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'basic',
      'substitute' => TRUE,
      'name' => 'connect_page_front_porch',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'modifier_class' => '',
        'collapsible' => 0,
        'collapsed' => 0,
        'hide_classes' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'additional_classes' => array(
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
        ),
      ),
      'style' => 'bootstrap_styles:panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'c4722470-af5b-4117-acb4-3bcea05a95d7';
    $display->content['new-c4722470-af5b-4117-acb4-3bcea05a95d7'] = $pane;
    $display->panels['top'][3] = 'new-c4722470-af5b-4117-acb4-3bcea05a95d7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-c1fdd27e-c385-4ce1-a5ae-27f42bf20cf7';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['connect'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'events_page';
  $page->task = 'page';
  $page->admin_title = 'Events page';
  $page->admin_description = 'Page to display community events.';
  $page->path = 'events';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_events_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'events_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Events page',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Community Events';
  $display->uuid = 'b453b33d-c123-435b-8579-8035c7fba90e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-cc80e0bc-f6a0-4b3f-9cc8-3d8d81ed7b7d';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'basic',
      'substitute' => TRUE,
      'name' => 'community_events_page_introductory_text',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'modifier_class' => '',
        'collapsible' => 0,
        'collapsed' => 0,
        'hide_classes' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'additional_classes' => array(
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
        ),
      ),
      'style' => 'bootstrap_styles:panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cc80e0bc-f6a0-4b3f-9cc8-3d8d81ed7b7d';
    $display->content['new-cc80e0bc-f6a0-4b3f-9cc8-3d8d81ed7b7d'] = $pane;
    $display->panels['top'][0] = 'new-cc80e0bc-f6a0-4b3f-9cc8-3d8d81ed7b7d';
    $pane = new stdClass();
    $pane->pid = 'new-66952c47-90e6-41ab-8dcd-b58a07686ebe';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'calendar-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'modifier_class' => '',
        'collapsible' => 0,
        'collapsed' => 0,
        'hide_classes' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'additional_classes' => array(
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
        ),
      ),
      'style' => 'bootstrap_styles:panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '66952c47-90e6-41ab-8dcd-b58a07686ebe';
    $display->content['new-66952c47-90e6-41ab-8dcd-b58a07686ebe'] = $pane;
    $display->panels['top'][1] = 'new-66952c47-90e6-41ab-8dcd-b58a07686ebe';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-cc80e0bc-f6a0-4b3f-9cc8-3d8d81ed7b7d';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['events_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'gathering';
  $page->task = 'page';
  $page->admin_title = 'Gathering';
  $page->admin_description = 'Page to display gatherings.';
  $page->path = 'gathering/%name/';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'name' => array(
      'id' => 1,
      'identifier' => 'Display Name',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_gathering_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'gathering';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Quaker Organization',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => array(
        'column_type' => 'col-sm',
        'column_size' => '6',
        'offset_type' => 'col-sm-offset',
        'offset_size' => '0',
      ),
      'right' => array(
        'column_type' => 'col-sm',
        'column_size' => '6',
        'offset_type' => 'col-sm-offset',
        'offset_size' => '0',
      ),
      'bottom' => NULL,
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b955db5f-f3fe-4095-9720-153dc84549ff';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a88eaa18-b29f-42c4-865e-1d49f964da3a';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'civicrm_quaker_meeting-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'modifier_class' => 'panel-primary',
        'collapsible' => 0,
        'collapsed' => 0,
        'hide_classes' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'additional_classes' => array(
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
        ),
      ),
      'style' => 'bootstrap_styles:panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a88eaa18-b29f-42c4-865e-1d49f964da3a';
    $display->content['new-a88eaa18-b29f-42c4-865e-1d49f964da3a'] = $pane;
    $display->panels['left'][0] = 'new-a88eaa18-b29f-42c4-865e-1d49f964da3a';
    $pane = new stdClass();
    $pane->pid = 'new-e417c1fd-d4f7-4b81-9225-4cc96f9081ce';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'civicrm_quaker_meeting-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'modifier_class' => 'panel-primary',
        'collapsible' => 0,
        'collapsed' => 0,
        'hide_classes' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'additional_classes' => array(
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
        ),
      ),
      'style' => 'bootstrap_styles:panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e417c1fd-d4f7-4b81-9225-4cc96f9081ce';
    $display->content['new-e417c1fd-d4f7-4b81-9225-4cc96f9081ce'] = $pane;
    $display->panels['left'][1] = 'new-e417c1fd-d4f7-4b81-9225-4cc96f9081ce';
    $pane = new stdClass();
    $pane->pid = 'new-2efb198e-359d-4326-a662-cfcd359d30d8';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'civicrm_quaker_meeting-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'modifier_class' => 'panel-primary',
        'collapsible' => 0,
        'collapsed' => 0,
        'hide_classes' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'additional_classes' => array(
          'clearfix' => 'clearfix',
          'pull-left' => 0,
          'pull-right' => 0,
        ),
      ),
      'style' => 'bootstrap_styles:panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2efb198e-359d-4326-a662-cfcd359d30d8';
    $display->content['new-2efb198e-359d-4326-a662-cfcd359d30d8'] = $pane;
    $display->panels['right'][0] = 'new-2efb198e-359d-4326-a662-cfcd359d30d8';
    $pane = new stdClass();
    $pane->pid = 'new-9f8e9287-3910-4ae7-bebe-caf5fdca29ed';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'civicrm_quaker_meeting-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'modifier_class' => 'panel-primary',
        'collapsible' => 0,
        'collapsed' => 0,
        'hide_classes' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'additional_classes' => array(
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
        ),
      ),
      'style' => 'bootstrap_styles:panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9f8e9287-3910-4ae7-bebe-caf5fdca29ed';
    $display->content['new-9f8e9287-3910-4ae7-bebe-caf5fdca29ed'] = $pane;
    $display->panels['right'][1] = 'new-9f8e9287-3910-4ae7-bebe-caf5fdca29ed';
    $pane = new stdClass();
    $pane->pid = 'new-a5c4c548-bf72-41a2-b101-cfb34b3947c1';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'civicrm_quaker_meeting-quaker_gathering_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a5c4c548-bf72-41a2-b101-cfb34b3947c1';
    $display->content['new-a5c4c548-bf72-41a2-b101-cfb34b3947c1'] = $pane;
    $display->panels['top'][0] = 'new-a5c4c548-bf72-41a2-b101-cfb34b3947c1';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-a5c4c548-bf72-41a2-b101-cfb34b3947c1';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['gathering'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'intermountain_yearly_meeting';
  $page->task = 'page';
  $page->admin_title = 'Intermountain Yearly Meeting';
  $page->admin_description = 'Page displaying details about Intermountain Yearly Meeting.';
  $page->path = 'intermountain-yearly-meeting';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_intermountain_yearly_meeting_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'intermountain_yearly_meeting';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Intermountain Yearly Meeting',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'top' => array(
        'column_type' => 'col-sm',
        'column_size' => '12',
        'offset_type' => 'col-sm-offset',
        'offset_size' => '0',
      ),
      'left' => array(
        'column_type' => 'col-sm',
        'column_size' => '6',
        'offset_type' => 'col-sm-offset',
        'offset_size' => '0',
      ),
      'right' => array(
        'column_type' => 'col-sm',
        'column_size' => '6',
        'offset_type' => 'col-sm-offset',
        'offset_size' => '0',
      ),
      'default' => NULL,
      'bottom' => NULL,
    ),
    'top' => array(
      'style' => 'bootstrap_region',
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = 'Intermountain Yearly Meeting';
  $display->uuid = '4e5c2c4a-ebff-460d-a9d6-c582a06932b6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b7b0a9c8-6584-4258-a0eb-559a6a2c11d6';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'basic',
      'substitute' => TRUE,
      'name' => 'intermountain_yearly_meeting_details',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'modifier_class' => '',
        'collapsible' => 0,
        'collapsed' => 0,
        'hide_classes' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'additional_classes' => array(
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
        ),
      ),
      'style' => 'bootstrap_styles:panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b7b0a9c8-6584-4258-a0eb-559a6a2c11d6';
    $display->content['new-b7b0a9c8-6584-4258-a0eb-559a6a2c11d6'] = $pane;
    $display->panels['left'][0] = 'new-b7b0a9c8-6584-4258-a0eb-559a6a2c11d6';
    $pane = new stdClass();
    $pane->pid = 'new-721d14ab-e610-4052-9067-b97492a2f9ee';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'civicrm_quaker_organizations-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'modifier_class' => '',
        'collapsible' => 0,
        'collapsed' => 0,
        'hide_classes' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'additional_classes' => array(
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
        ),
      ),
      'style' => 'bootstrap_styles:panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '721d14ab-e610-4052-9067-b97492a2f9ee';
    $display->content['new-721d14ab-e610-4052-9067-b97492a2f9ee'] = $pane;
    $display->panels['right'][0] = 'new-721d14ab-e610-4052-9067-b97492a2f9ee';
    $pane = new stdClass();
    $pane->pid = 'new-79012694-a320-472f-a42b-4fabe4a1f550';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'basic',
      'substitute' => TRUE,
      'name' => 'intermountain_yearly_meeting_intro',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'modifier_class' => '',
        'collapsible' => 0,
        'collapsed' => 0,
        'hide_classes' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'additional_classes' => array(
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
        ),
      ),
      'style' => 'bootstrap_styles:panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '79012694-a320-472f-a42b-4fabe4a1f550';
    $display->content['new-79012694-a320-472f-a42b-4fabe4a1f550'] = $pane;
    $display->panels['top'][0] = 'new-79012694-a320-472f-a42b-4fabe4a1f550';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-79012694-a320-472f-a42b-4fabe4a1f550';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['intermountain_yearly_meeting'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'library';
  $page->task = 'page';
  $page->admin_title = 'Library';
  $page->admin_description = 'Media library.';
  $page->path = 'library';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Media Library',
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
  $handler->name = 'page_library_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'library';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Media Library',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => array(
        'column_type' => 'col-lg',
        'column_size' => '12',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'left' => array(
        'column_type' => 'col-sm',
        'column_size' => '3',
        'offset_type' => 'col-sm-offset',
        'offset_size' => '0',
      ),
      'middle' => NULL,
      'right' => array(
        'column_type' => 'col-sm',
        'column_size' => '9',
        'offset_type' => 'col-sm-offset',
        'offset_size' => '0',
      ),
      'bottom' => array(
        'column_type' => 'col-lg',
        'column_size' => '12',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
    ),
    'top' => array(
      'style' => 'bootstrap_region',
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
    'bottom' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = 'Library - Documents and Media';
  $display->uuid = 'c3b29aaa-01aa-4485-a09d-721718cb4632';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8a3fa00d-60ea-4a56-9ddf-441b44d6c40c';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'current_search-standard';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '8a3fa00d-60ea-4a56-9ddf-441b44d6c40c';
    $display->content['new-8a3fa00d-60ea-4a56-9ddf-441b44d6c40c'] = $pane;
    $display->panels['left'][0] = 'new-8a3fa00d-60ea-4a56-9ddf-441b44d6c40c';
    $pane = new stdClass();
    $pane->pid = 'new-8facd587-dd5f-43bc-bfd8-231fd3c6fd4b';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-QgCMuS9vmjMzyIUmMZxWALsPPsXmkuq6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'modifier_class' => 'panel-primary',
        'collapsible' => 0,
        'collapsed' => 0,
        'hide_classes' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'additional_classes' => array(
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
        ),
      ),
      'style' => 'bootstrap_styles:panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8facd587-dd5f-43bc-bfd8-231fd3c6fd4b';
    $display->content['new-8facd587-dd5f-43bc-bfd8-231fd3c6fd4b'] = $pane;
    $display->panels['left'][1] = 'new-8facd587-dd5f-43bc-bfd8-231fd3c6fd4b';
    $pane = new stdClass();
    $pane->pid = 'new-4c3eec7a-2140-48b6-9063-702b33257522';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-Aq776I1ze5JIRLb4g6A1OCW3WqKswIcz';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'modifier_class' => 'panel-primary',
        'collapsible' => 0,
        'collapsed' => 0,
        'hide_classes' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'additional_classes' => array(
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
        ),
      ),
      'style' => 'bootstrap_styles:panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '4c3eec7a-2140-48b6-9063-702b33257522';
    $display->content['new-4c3eec7a-2140-48b6-9063-702b33257522'] = $pane;
    $display->panels['left'][2] = 'new-4c3eec7a-2140-48b6-9063-702b33257522';
    $pane = new stdClass();
    $pane->pid = 'new-bf1b5a1b-f5f7-4139-8d11-16771e88fba4';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-9952oExHhGHUDCTahqpuWvhYwbxMfWZi';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'modifier_class' => 'panel-primary',
        'collapsible' => 0,
        'collapsed' => 0,
        'hide_classes' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'additional_classes' => array(
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
        ),
      ),
      'style' => 'bootstrap_styles:panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'bf1b5a1b-f5f7-4139-8d11-16771e88fba4';
    $display->content['new-bf1b5a1b-f5f7-4139-8d11-16771e88fba4'] = $pane;
    $display->panels['left'][3] = 'new-bf1b5a1b-f5f7-4139-8d11-16771e88fba4';
    $pane = new stdClass();
    $pane->pid = 'new-07f90821-eae5-4fba-824c-9d1f67767be3';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-GO0HlmsJ8xC0oiN82Gb0jLRDotkX0rdC';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'modifier_class' => 'panel-primary',
        'collapsible' => 0,
        'collapsed' => 0,
        'hide_classes' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'additional_classes' => array(
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
        ),
      ),
      'style' => 'bootstrap_styles:panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '07f90821-eae5-4fba-824c-9d1f67767be3';
    $display->content['new-07f90821-eae5-4fba-824c-9d1f67767be3'] = $pane;
    $display->panels['left'][4] = 'new-07f90821-eae5-4fba-824c-9d1f67767be3';
    $pane = new stdClass();
    $pane->pid = 'new-d4e2dac0-cd1c-47fe-92d7-1948a052d0c8';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-6IXw1FYfkCobp8nQ1jqHaitLM1gvrrZ9';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'modifier_class' => 'panel-primary',
        'collapsible' => 0,
        'collapsed' => 0,
        'hide_classes' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'additional_classes' => array(
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
        ),
      ),
      'style' => 'bootstrap_styles:panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'd4e2dac0-cd1c-47fe-92d7-1948a052d0c8';
    $display->content['new-d4e2dac0-cd1c-47fe-92d7-1948a052d0c8'] = $pane;
    $display->panels['left'][5] = 'new-d4e2dac0-cd1c-47fe-92d7-1948a052d0c8';
    $pane = new stdClass();
    $pane->pid = 'new-3c938834-856f-41f3-8ded-75586830cadc';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-GJIA4uG1LaSxK4d60llk8nTynaC6I412';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'modifier_class' => 'panel-primary',
        'collapsible' => 0,
        'collapsed' => 0,
        'hide_classes' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'additional_classes' => array(
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
        ),
      ),
      'style' => 'bootstrap_styles:panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '3c938834-856f-41f3-8ded-75586830cadc';
    $display->content['new-3c938834-856f-41f3-8ded-75586830cadc'] = $pane;
    $display->panels['left'][6] = 'new-3c938834-856f-41f3-8ded-75586830cadc';
    $pane = new stdClass();
    $pane->pid = 'new-c7ff4708-bac4-4d51-87cf-b044c0cf9a82';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'basic',
      'substitute' => TRUE,
      'name' => 'library_search_instructions',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'modifier_class' => 'panel-primary',
        'collapsible' => 0,
        'collapsed' => 0,
        'hide_classes' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'additional_classes' => array(
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
        ),
      ),
      'style' => 'bootstrap_styles:panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c7ff4708-bac4-4d51-87cf-b044c0cf9a82';
    $display->content['new-c7ff4708-bac4-4d51-87cf-b044c0cf9a82'] = $pane;
    $display->panels['right'][0] = 'new-c7ff4708-bac4-4d51-87cf-b044c0cf9a82';
    $pane = new stdClass();
    $pane->pid = 'new-ff7c3ecd-049c-4d81-a8e5-e840add951c4';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'library_test-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'modifier_class' => 'panel-primary',
        'collapsible' => 0,
        'collapsed' => 0,
        'hide_classes' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'additional_classes' => array(
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
        ),
      ),
      'style' => 'bootstrap_styles:panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ff7c3ecd-049c-4d81-a8e5-e840add951c4';
    $display->content['new-ff7c3ecd-049c-4d81-a8e5-e840add951c4'] = $pane;
    $display->panels['right'][1] = 'new-ff7c3ecd-049c-4d81-a8e5-e840add951c4';
    $pane = new stdClass();
    $pane->pid = 'new-35b052ea-a4c5-46fb-9cba-f5b09ac6e712';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'basic',
      'substitute' => TRUE,
      'name' => 'wf_media_library_intro',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'modifier_class' => 'panel-primary',
        'collapsible' => 0,
        'collapsed' => 0,
        'hide_classes' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'additional_classes' => array(
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
        ),
      ),
      'style' => 'bootstrap_styles:panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '35b052ea-a4c5-46fb-9cba-f5b09ac6e712';
    $display->content['new-35b052ea-a4c5-46fb-9cba-f5b09ac6e712'] = $pane;
    $display->panels['top'][0] = 'new-35b052ea-a4c5-46fb-9cba-f5b09ac6e712';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['library'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'north_pacific_yearly_meeting';
  $page->task = 'page';
  $page->admin_title = 'North Pacific Yearly Meeting';
  $page->admin_description = 'Details about North Pacific Yearly Meeting';
  $page->path = 'north-pacific-yearly-meeting';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_north_pacific_yearly_meeting_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'north_pacific_yearly_meeting';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'North Pacific Yearly Meeting',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'top' => array(
        'column_type' => 'col-sm',
        'column_size' => '12',
        'offset_type' => 'col-sm-offset',
        'offset_size' => '0',
      ),
      'left' => array(
        'column_type' => 'col-sm',
        'column_size' => '6',
        'offset_type' => 'col-sm-offset',
        'offset_size' => '0',
      ),
      'right' => array(
        'column_type' => 'col-sm',
        'column_size' => '6',
        'offset_type' => 'col-sm-offset',
        'offset_size' => '0',
      ),
      'default' => NULL,
      'bottom' => NULL,
    ),
    'top' => array(
      'style' => 'bootstrap_region',
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = 'North Pacific Yearly Meeting';
  $display->uuid = 'da9fccf6-df9a-4a12-8a93-c05c814c7f9e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d2e07b01-d401-4258-8c3f-b6694334c005';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'basic',
      'substitute' => TRUE,
      'name' => 'north_pacific_yearly_meeting_details',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'modifier_class' => '',
        'collapsible' => 0,
        'collapsed' => 0,
        'hide_classes' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'additional_classes' => array(
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
        ),
      ),
      'style' => 'bootstrap_styles:panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd2e07b01-d401-4258-8c3f-b6694334c005';
    $display->content['new-d2e07b01-d401-4258-8c3f-b6694334c005'] = $pane;
    $display->panels['left'][0] = 'new-d2e07b01-d401-4258-8c3f-b6694334c005';
    $pane = new stdClass();
    $pane->pid = 'new-b5990fa7-5b38-4e80-8c1c-4ecc4abe0813';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'civicrm_quaker_organizations-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'modifier_class' => '',
        'collapsible' => 0,
        'collapsed' => 0,
        'hide_classes' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'additional_classes' => array(
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
        ),
      ),
      'style' => 'bootstrap_styles:panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b5990fa7-5b38-4e80-8c1c-4ecc4abe0813';
    $display->content['new-b5990fa7-5b38-4e80-8c1c-4ecc4abe0813'] = $pane;
    $display->panels['right'][0] = 'new-b5990fa7-5b38-4e80-8c1c-4ecc4abe0813';
    $pane = new stdClass();
    $pane->pid = 'new-0939e2d6-7f9a-4c3b-bc34-9136dcba0270';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'basic',
      'substitute' => TRUE,
      'name' => 'north_pacific_yearly_meeting_intro',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'modifier_class' => '',
        'collapsible' => 0,
        'collapsed' => 0,
        'hide_classes' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'additional_classes' => array(
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
        ),
      ),
      'style' => 'bootstrap_styles:panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0939e2d6-7f9a-4c3b-bc34-9136dcba0270';
    $display->content['new-0939e2d6-7f9a-4c3b-bc34-9136dcba0270'] = $pane;
    $display->panels['top'][0] = 'new-0939e2d6-7f9a-4c3b-bc34-9136dcba0270';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-0939e2d6-7f9a-4c3b-bc34-9136dcba0270';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['north_pacific_yearly_meeting'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'pacific_yearly_meeting';
  $page->task = 'page';
  $page->admin_title = 'Pacific Yearly Meeting';
  $page->admin_description = 'Page dedicated to details about Pacific Yearly Meeting.';
  $page->path = 'pacific-yearly-meeting';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_pacific_yearly_meeting_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'pacific_yearly_meeting';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Pacific Yearly Meeting',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => array(
        'column_type' => 'col-sm',
        'column_size' => '12',
        'offset_type' => 'col-sm-offset',
        'offset_size' => '0',
      ),
      'left' => array(
        'column_type' => 'col-sm',
        'column_size' => '6',
        'offset_type' => 'col-sm-offset',
        'offset_size' => '0',
      ),
      'right' => array(
        'column_type' => 'col-sm',
        'column_size' => '6',
        'offset_type' => 'col-sm-offset',
        'offset_size' => '0',
      ),
      'bottom' => NULL,
    ),
    'top' => array(
      'style' => 'bootstrap_region',
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = 'Pacific Yearly Meeting';
  $display->uuid = '72fa2f91-f6c1-401c-aae0-a113278f0d20';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8593e5fe-71aa-42bf-85ef-9e170cc77072';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'basic',
      'substitute' => TRUE,
      'name' => 'pacific_yearly_meeting_contact',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'modifier_class' => '',
        'collapsible' => 0,
        'collapsed' => 0,
        'hide_classes' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'additional_classes' => array(
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
        ),
      ),
      'style' => 'bootstrap_styles:panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8593e5fe-71aa-42bf-85ef-9e170cc77072';
    $display->content['new-8593e5fe-71aa-42bf-85ef-9e170cc77072'] = $pane;
    $display->panels['left'][0] = 'new-8593e5fe-71aa-42bf-85ef-9e170cc77072';
    $pane = new stdClass();
    $pane->pid = 'new-b8f625dd-97f5-4337-83d8-556fb2862de3';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'civicrm_quaker_organizations-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'modifier_class' => '',
        'collapsible' => 0,
        'collapsed' => 0,
        'hide_classes' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'additional_classes' => array(
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
        ),
      ),
      'style' => 'bootstrap_styles:panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b8f625dd-97f5-4337-83d8-556fb2862de3';
    $display->content['new-b8f625dd-97f5-4337-83d8-556fb2862de3'] = $pane;
    $display->panels['right'][0] = 'new-b8f625dd-97f5-4337-83d8-556fb2862de3';
    $pane = new stdClass();
    $pane->pid = 'new-81cbc29c-de19-4ee8-810f-e9cd1dc94c7e';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'basic',
      'substitute' => TRUE,
      'name' => 'pacific_yearly_meeting_intro',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'modifier_class' => '',
        'collapsible' => 0,
        'collapsed' => 0,
        'hide_classes' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'additional_classes' => array(
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
        ),
      ),
      'style' => 'bootstrap_styles:panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '81cbc29c-de19-4ee8-810f-e9cd1dc94c7e';
    $display->content['new-81cbc29c-de19-4ee8-810f-e9cd1dc94c7e'] = $pane;
    $display->panels['top'][0] = 'new-81cbc29c-de19-4ee8-810f-e9cd1dc94c7e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-81cbc29c-de19-4ee8-810f-e9cd1dc94c7e';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['pacific_yearly_meeting'] = $page;

  return $pages;

}
