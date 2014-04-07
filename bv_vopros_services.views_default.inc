<?php
/**
 * @file
 * bv_vopros_services.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function bv_vopros_services_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'bv_vopros_services_public_help';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'vopros_question';
  $view->human_name = 'BV Vopros Services Public Help';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Question: Question_title */
  $handler->display->display_options['fields']['question_title']['id'] = 'question_title';
  $handler->display->display_options['fields']['question_title']['table'] = 'vopros_question';
  $handler->display->display_options['fields']['question_title']['field'] = 'question_title';
  $handler->display->display_options['fields']['question_title']['label'] = 'title';
  /* Field: Question: Question_content */
  $handler->display->display_options['fields']['question_content']['id'] = 'question_content';
  $handler->display->display_options['fields']['question_content']['table'] = 'vopros_question';
  $handler->display->display_options['fields']['question_content']['field'] = 'question_content';
  $handler->display->display_options['fields']['question_content']['label'] = 'indhold';
  /* Sort criterion: Question: Created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'vopros_question';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Question: Question_status */
  $handler->display->display_options['filters']['question_status']['id'] = 'question_status';
  $handler->display->display_options['filters']['question_status']['table'] = 'vopros_question';
  $handler->display->display_options['filters']['question_status']['field'] = 'question_status';
  $handler->display->display_options['filters']['question_status']['value'] = array(
    'closed' => 'closed',
  );
  /* Filter criterion: Question: Question_status_reason */
  $handler->display->display_options['filters']['question_status_reason']['id'] = 'question_status_reason';
  $handler->display->display_options['filters']['question_status_reason']['table'] = 'vopros_question';
  $handler->display->display_options['filters']['question_status_reason']['field'] = 'question_status_reason';
  $handler->display->display_options['filters']['question_status_reason']['value'] = 'asked for help';

  /* Display: Services */
  $handler = $view->new_display('services', 'Services', 'services_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Question: Question_title */
  $handler->display->display_options['fields']['question_title']['id'] = 'question_title';
  $handler->display->display_options['fields']['question_title']['table'] = 'vopros_question';
  $handler->display->display_options['fields']['question_title']['field'] = 'question_title';
  $handler->display->display_options['fields']['question_title']['label'] = 'title';
  /* Field: Question: Question_content */
  $handler->display->display_options['fields']['question_content']['id'] = 'question_content';
  $handler->display->display_options['fields']['question_content']['table'] = 'vopros_question';
  $handler->display->display_options['fields']['question_content']['field'] = 'question_content';
  $handler->display->display_options['fields']['question_content']['label'] = 'indhold';
  /* Field: Question: Question ID */
  $handler->display->display_options['fields']['question_id']['id'] = 'question_id';
  $handler->display->display_options['fields']['question_id']['table'] = 'vopros_question';
  $handler->display->display_options['fields']['question_id']['field'] = 'question_id';
  $handler->display->display_options['fields']['question_id']['label'] = 'ID';
  $handler->display->display_options['fields']['question_id']['separator'] = '';
  /* Field: Question: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'vopros_question';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Oprettet';
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['path'] = 'public_help';
  $translatables['bv_vopros_services_public_help'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('title'),
    t('indhold'),
    t('Services'),
    t('ID'),
    t('.'),
    t('Oprettet'),
  );
  $export['bv_vopros_services_public_help'] = $view;

  $view = new view();
  $view->name = 'bv_vopros_services_users';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'BV Vopros Services Users';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['label'] = 'Profil';
  $handler->display->display_options['relationships']['profile']['required'] = TRUE;
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'vopros_user_librarian' => 'vopros_user_librarian',
  );
  /* Relationship: Profile: Image (field_vopros_user_image:fid) */
  $handler->display->display_options['relationships']['field_vopros_user_image_fid']['id'] = 'field_vopros_user_image_fid';
  $handler->display->display_options['relationships']['field_vopros_user_image_fid']['table'] = 'field_data_field_vopros_user_image';
  $handler->display->display_options['relationships']['field_vopros_user_image_fid']['field'] = 'field_vopros_user_image_fid';
  $handler->display->display_options['relationships']['field_vopros_user_image_fid']['relationship'] = 'profile';
  $handler->display->display_options['relationships']['field_vopros_user_image_fid']['label'] = 'billede fra field_vopros_user_image';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: Profile: Fornavn */
  $handler->display->display_options['fields']['vopros_user_first_name']['id'] = 'vopros_user_first_name';
  $handler->display->display_options['fields']['vopros_user_first_name']['table'] = 'field_data_vopros_user_first_name';
  $handler->display->display_options['fields']['vopros_user_first_name']['field'] = 'vopros_user_first_name';
  $handler->display->display_options['fields']['vopros_user_first_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['vopros_user_first_name']['label'] = 'first_name';
  /* Field: Profile: Efternavn */
  $handler->display->display_options['fields']['vopros_user_last_name']['id'] = 'vopros_user_last_name';
  $handler->display->display_options['fields']['vopros_user_last_name']['table'] = 'field_data_vopros_user_last_name';
  $handler->display->display_options['fields']['vopros_user_last_name']['field'] = 'vopros_user_last_name';
  $handler->display->display_options['fields']['vopros_user_last_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['vopros_user_last_name']['label'] = 'last_name';
  /* Field: Profile: Fagområder */
  $handler->display->display_options['fields']['field_vopros_user_expertise']['id'] = 'field_vopros_user_expertise';
  $handler->display->display_options['fields']['field_vopros_user_expertise']['table'] = 'field_data_field_vopros_user_expertise';
  $handler->display->display_options['fields']['field_vopros_user_expertise']['field'] = 'field_vopros_user_expertise';
  $handler->display->display_options['fields']['field_vopros_user_expertise']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_vopros_user_expertise']['label'] = 'expertise';
  $handler->display->display_options['fields']['field_vopros_user_expertise']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_vopros_user_expertise']['delta_offset'] = '0';
  /* Field: Profile: Beskrivelse */
  $handler->display->display_options['fields']['field_vopros_user_description']['id'] = 'field_vopros_user_description';
  $handler->display->display_options['fields']['field_vopros_user_description']['table'] = 'field_data_field_vopros_user_description';
  $handler->display->display_options['fields']['field_vopros_user_description']['field'] = 'field_vopros_user_description';
  $handler->display->display_options['fields']['field_vopros_user_description']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_vopros_user_description']['label'] = 'description';
  $handler->display->display_options['fields']['field_vopros_user_description']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_vopros_user_description']['settings'] = array(
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  /* Field: File: Path */
  $handler->display->display_options['fields']['uri']['id'] = 'uri';
  $handler->display->display_options['fields']['uri']['table'] = 'file_managed';
  $handler->display->display_options['fields']['uri']['field'] = 'uri';
  $handler->display->display_options['fields']['uri']['relationship'] = 'field_vopros_user_image_fid';
  $handler->display->display_options['fields']['uri']['label'] = 'path';
  /* Field: Profile: Bibliotek */
  $handler->display->display_options['fields']['vopros_user_library']['id'] = 'vopros_user_library';
  $handler->display->display_options['fields']['vopros_user_library']['table'] = 'field_data_vopros_user_library';
  $handler->display->display_options['fields']['vopros_user_library']['field'] = 'vopros_user_library';
  $handler->display->display_options['fields']['vopros_user_library']['relationship'] = 'profile';
  $handler->display->display_options['fields']['vopros_user_library']['label'] = 'library';
  /* Field: Profile: Image */
  $handler->display->display_options['fields']['field_vopros_user_image']['id'] = 'field_vopros_user_image';
  $handler->display->display_options['fields']['field_vopros_user_image']['table'] = 'field_data_field_vopros_user_image';
  $handler->display->display_options['fields']['field_vopros_user_image']['field'] = 'field_vopros_user_image';
  $handler->display->display_options['fields']['field_vopros_user_image']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_vopros_user_image']['label'] = 'image';
  $handler->display->display_options['fields']['field_vopros_user_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_vopros_user_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_vopros_user_image']['settings'] = array(
    'image_style' => 'square_thumbnail',
    'image_link' => '',
  );
  /* Sort criterion: User: Last login */
  $handler->display->display_options['sorts']['login']['id'] = 'login';
  $handler->display->display_options['sorts']['login']['table'] = 'users';
  $handler->display->display_options['sorts']['login']['field'] = 'login';
  $handler->display->display_options['sorts']['login']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Last access */
  $handler->display->display_options['filters']['access']['id'] = 'access';
  $handler->display->display_options['filters']['access']['table'] = 'users';
  $handler->display->display_options['filters']['access']['field'] = 'access';
  $handler->display->display_options['filters']['access']['operator'] = '>=';
  $handler->display->display_options['filters']['access']['value']['value'] = '-900 seconds';
  $handler->display->display_options['filters']['access']['value']['type'] = 'offset';
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['operator'] = 'not';
  $handler->display->display_options['filters']['rid']['value'] = array(
    3 => '3',
    5 => '5',
  );
  /* Filter criterion: Profile: Fornavn (vopros_user_first_name) */
  $handler->display->display_options['filters']['vopros_user_first_name_value']['id'] = 'vopros_user_first_name_value';
  $handler->display->display_options['filters']['vopros_user_first_name_value']['table'] = 'field_data_vopros_user_first_name';
  $handler->display->display_options['filters']['vopros_user_first_name_value']['field'] = 'vopros_user_first_name_value';
  $handler->display->display_options['filters']['vopros_user_first_name_value']['relationship'] = 'profile';
  $handler->display->display_options['filters']['vopros_user_first_name_value']['operator'] = '!=';
  $handler->display->display_options['filters']['vopros_user_first_name_value']['value'] = 'Aalborg';
  /* Filter criterion: Profile: Fornavn (vopros_user_first_name) */
  $handler->display->display_options['filters']['vopros_user_first_name_value_1']['id'] = 'vopros_user_first_name_value_1';
  $handler->display->display_options['filters']['vopros_user_first_name_value_1']['table'] = 'field_data_vopros_user_first_name';
  $handler->display->display_options['filters']['vopros_user_first_name_value_1']['field'] = 'vopros_user_first_name_value';
  $handler->display->display_options['filters']['vopros_user_first_name_value_1']['relationship'] = 'profile';
  $handler->display->display_options['filters']['vopros_user_first_name_value_1']['operator'] = '!=';
  $handler->display->display_options['filters']['vopros_user_first_name_value_1']['value'] = 'Statsbiblioteket';

  /* Display: Services */
  $handler = $view->new_display('services', 'Services', 'services_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: Profile: Fornavn */
  $handler->display->display_options['fields']['vopros_user_first_name']['id'] = 'vopros_user_first_name';
  $handler->display->display_options['fields']['vopros_user_first_name']['table'] = 'field_data_vopros_user_first_name';
  $handler->display->display_options['fields']['vopros_user_first_name']['field'] = 'vopros_user_first_name';
  $handler->display->display_options['fields']['vopros_user_first_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['vopros_user_first_name']['label'] = 'first_name';
  /* Field: Profile: Efternavn */
  $handler->display->display_options['fields']['vopros_user_last_name']['id'] = 'vopros_user_last_name';
  $handler->display->display_options['fields']['vopros_user_last_name']['table'] = 'field_data_vopros_user_last_name';
  $handler->display->display_options['fields']['vopros_user_last_name']['field'] = 'vopros_user_last_name';
  $handler->display->display_options['fields']['vopros_user_last_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['vopros_user_last_name']['label'] = 'last_name';
  /* Field: File: Path */
  $handler->display->display_options['fields']['uri']['id'] = 'uri';
  $handler->display->display_options['fields']['uri']['table'] = 'file_managed';
  $handler->display->display_options['fields']['uri']['field'] = 'uri';
  $handler->display->display_options['fields']['uri']['relationship'] = 'field_vopros_user_image_fid';
  $handler->display->display_options['fields']['uri']['label'] = 'path';
  /* Field: Profile: Bibliotek */
  $handler->display->display_options['fields']['vopros_user_library']['id'] = 'vopros_user_library';
  $handler->display->display_options['fields']['vopros_user_library']['table'] = 'field_data_vopros_user_library';
  $handler->display->display_options['fields']['vopros_user_library']['field'] = 'vopros_user_library';
  $handler->display->display_options['fields']['vopros_user_library']['relationship'] = 'profile';
  $handler->display->display_options['fields']['vopros_user_library']['label'] = 'library';
  /* Field: Profile: Image */
  $handler->display->display_options['fields']['field_vopros_user_image']['id'] = 'field_vopros_user_image';
  $handler->display->display_options['fields']['field_vopros_user_image']['table'] = 'field_data_field_vopros_user_image';
  $handler->display->display_options['fields']['field_vopros_user_image']['field'] = 'field_vopros_user_image';
  $handler->display->display_options['fields']['field_vopros_user_image']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_vopros_user_image']['label'] = 'image';
  $handler->display->display_options['fields']['field_vopros_user_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_vopros_user_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_vopros_user_image']['settings'] = array(
    'image_style' => 'square_thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Last access */
  $handler->display->display_options['filters']['access']['id'] = 'access';
  $handler->display->display_options['filters']['access']['table'] = 'users';
  $handler->display->display_options['filters']['access']['field'] = 'access';
  $handler->display->display_options['filters']['access']['operator'] = '>=';
  $handler->display->display_options['filters']['access']['value']['value'] = '-900 seconds';
  $handler->display->display_options['filters']['access']['value']['type'] = 'offset';
  $handler->display->display_options['filters']['access']['group'] = 1;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['operator'] = 'not';
  $handler->display->display_options['filters']['rid']['value'] = array(
    3 => '3',
    5 => '5',
  );
  $handler->display->display_options['filters']['rid']['group'] = 1;
  /* Filter criterion: Profile: Fornavn (vopros_user_first_name) */
  $handler->display->display_options['filters']['vopros_user_first_name_value']['id'] = 'vopros_user_first_name_value';
  $handler->display->display_options['filters']['vopros_user_first_name_value']['table'] = 'field_data_vopros_user_first_name';
  $handler->display->display_options['filters']['vopros_user_first_name_value']['field'] = 'vopros_user_first_name_value';
  $handler->display->display_options['filters']['vopros_user_first_name_value']['relationship'] = 'profile';
  $handler->display->display_options['filters']['vopros_user_first_name_value']['operator'] = '!=';
  $handler->display->display_options['filters']['vopros_user_first_name_value']['value'] = 'Aalborg';
  $handler->display->display_options['filters']['vopros_user_first_name_value']['group'] = 1;
  /* Filter criterion: Profile: Fornavn (vopros_user_first_name) */
  $handler->display->display_options['filters']['vopros_user_first_name_value_1']['id'] = 'vopros_user_first_name_value_1';
  $handler->display->display_options['filters']['vopros_user_first_name_value_1']['table'] = 'field_data_vopros_user_first_name';
  $handler->display->display_options['filters']['vopros_user_first_name_value_1']['field'] = 'vopros_user_first_name_value';
  $handler->display->display_options['filters']['vopros_user_first_name_value_1']['relationship'] = 'profile';
  $handler->display->display_options['filters']['vopros_user_first_name_value_1']['operator'] = '!=';
  $handler->display->display_options['filters']['vopros_user_first_name_value_1']['value'] = 'Statsbiblioteket';
  $handler->display->display_options['filters']['vopros_user_first_name_value_1']['group'] = 1;
  $handler->display->display_options['path'] = 'users';
  $translatables['bv_vopros_services_users'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Profil'),
    t('billede fra field_vopros_user_image'),
    t('first_name'),
    t('last_name'),
    t('expertise'),
    t('description'),
    t('path'),
    t('library'),
    t('image'),
    t('Services'),
  );
  $export['bv_vopros_services_users'] = $view;

  return $export;
}
