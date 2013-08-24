<?php
/**
 * @file
 * f_delhi_site_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function f_delhi_site_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'delhi_site_views';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Delhi Site Views';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_candidate_constituency_node']['id'] = 'reverse_field_candidate_constituency_node';
  $handler->display->display_options['relationships']['reverse_field_candidate_constituency_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_candidate_constituency_node']['field'] = 'reverse_field_candidate_constituency_node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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

  /* Display: Selected Candidate */
  $handler = $view->new_display('block', 'Selected Candidate', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'aap-news-item-class';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'panels_fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_candidate_constituency' => 'field_candidate_constituency',
    'field_candidate_photograph' => 'field_candidate_photograph',
    'field_candidate_name' => 'field_candidate_name',
    'body' => 'body',
    'view_node' => 'view_node',
  );
  $handler->display->display_options['row_options']['layout'] = 'flexible:aap_candidate_layout';
  $handler->display->display_options['row_options']['regions'] = array(
    'field_candidate_constituency' => 'center',
    'field_candidate_photograph' => 'candidate_thumbnail',
    'field_candidate_name' => 'candidate_info',
    'body' => 'candidate_info',
    'view_node' => 'candidate_info',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_candidate_constituency_node']['id'] = 'reverse_field_candidate_constituency_node';
  $handler->display->display_options['relationships']['reverse_field_candidate_constituency_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_candidate_constituency_node']['field'] = 'reverse_field_candidate_constituency_node';
  $handler->display->display_options['relationships']['reverse_field_candidate_constituency_node']['required'] = TRUE;
  /* Relationship: Flags: aap_selected_candidate */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['relationship'] = 'reverse_field_candidate_constituency_node';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'aap_selected_candidate';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Constituency Name */
  $handler->display->display_options['fields']['field_candidate_constituency']['id'] = 'field_candidate_constituency';
  $handler->display->display_options['fields']['field_candidate_constituency']['table'] = 'field_data_field_candidate_constituency';
  $handler->display->display_options['fields']['field_candidate_constituency']['field'] = 'field_candidate_constituency';
  $handler->display->display_options['fields']['field_candidate_constituency']['relationship'] = 'reverse_field_candidate_constituency_node';
  $handler->display->display_options['fields']['field_candidate_constituency']['label'] = '';
  $handler->display->display_options['fields']['field_candidate_constituency']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_candidate_constituency']['alter']['text'] = '<div class="aap-candidate-consituency">AAP Candidate from [field_candidate_constituency]</div>';
  $handler->display->display_options['fields']['field_candidate_constituency']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_candidate_constituency']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Photograph */
  $handler->display->display_options['fields']['field_candidate_photograph']['id'] = 'field_candidate_photograph';
  $handler->display->display_options['fields']['field_candidate_photograph']['table'] = 'field_data_field_candidate_photograph';
  $handler->display->display_options['fields']['field_candidate_photograph']['field'] = 'field_candidate_photograph';
  $handler->display->display_options['fields']['field_candidate_photograph']['relationship'] = 'reverse_field_candidate_constituency_node';
  $handler->display->display_options['fields']['field_candidate_photograph']['label'] = '';
  $handler->display->display_options['fields']['field_candidate_photograph']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_candidate_photograph']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_candidate_photograph']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_candidate_name']['id'] = 'field_candidate_name';
  $handler->display->display_options['fields']['field_candidate_name']['table'] = 'field_data_field_candidate_name';
  $handler->display->display_options['fields']['field_candidate_name']['field'] = 'field_candidate_name';
  $handler->display->display_options['fields']['field_candidate_name']['relationship'] = 'reverse_field_candidate_constituency_node';
  $handler->display->display_options['fields']['field_candidate_name']['label'] = '';
  $handler->display->display_options['fields']['field_candidate_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_candidate_name']['alter']['text'] = '<div class = "aap-candidate-name">[field_candidate_name] </div>';
  $handler->display->display_options['fields']['field_candidate_name']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'reverse_field_candidate_constituency_node';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['relationship'] = 'reverse_field_candidate_constituency_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'know more...';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_candidate_constituency_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['code'] = '$get_candidate_nid_query = new EntityFieldQuery();
	$get_candidate_nid_query-> entityCondition(\'entity_type\', \'node\')
	-> entityCondition(\'bundle\', \'candidate_details_page\')
	->fieldCondition(\'field_candidate_constituency\', \'target_id\', arg(1), \'=\');          
		$get_candidate_nid_result = $get_candidate_nid_query->execute();
		if (count($get_candidate_nid_result)) {
			$nid_array = array_keys($get_candidate_nid_result[\'node\']);
			return implode(\',\', $nid_array);
		}
		else {
			return "";
		}';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = TRUE;
  $handler->display->display_options['block_description'] = 'Selected Candidate';

  /* Display: Shortlisted Candidates Block */
  $handler = $view->new_display('block', 'Shortlisted Candidates Block', 'block_3');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'aap-news-item-class';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'panels_fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_candidate_constituency' => 'field_candidate_constituency',
    'field_candidate_photograph' => 'field_candidate_photograph',
    'field_candidate_name' => 'field_candidate_name',
    'body' => 'body',
    'view_node' => 'view_node',
  );
  $handler->display->display_options['row_options']['layout'] = 'flexible:aap_candidate_layout';
  $handler->display->display_options['row_options']['regions'] = array(
    'field_candidate_constituency' => 'center',
    'field_candidate_photograph' => 'candidate_thumbnail',
    'field_candidate_name' => 'candidate_info',
    'body' => 'candidate_info',
    'view_node' => 'candidate_info',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_candidate_constituency_node']['id'] = 'reverse_field_candidate_constituency_node';
  $handler->display->display_options['relationships']['reverse_field_candidate_constituency_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_candidate_constituency_node']['field'] = 'reverse_field_candidate_constituency_node';
  $handler->display->display_options['relationships']['reverse_field_candidate_constituency_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Constituency Name */
  $handler->display->display_options['fields']['field_candidate_constituency']['id'] = 'field_candidate_constituency';
  $handler->display->display_options['fields']['field_candidate_constituency']['table'] = 'field_data_field_candidate_constituency';
  $handler->display->display_options['fields']['field_candidate_constituency']['field'] = 'field_candidate_constituency';
  $handler->display->display_options['fields']['field_candidate_constituency']['relationship'] = 'reverse_field_candidate_constituency_node';
  $handler->display->display_options['fields']['field_candidate_constituency']['label'] = '';
  $handler->display->display_options['fields']['field_candidate_constituency']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_candidate_constituency']['alter']['text'] = '<div class="aap-candidate-consituency">AAP Candidate from [field_candidate_constituency]</div>';
  $handler->display->display_options['fields']['field_candidate_constituency']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_candidate_constituency']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Photograph */
  $handler->display->display_options['fields']['field_candidate_photograph']['id'] = 'field_candidate_photograph';
  $handler->display->display_options['fields']['field_candidate_photograph']['table'] = 'field_data_field_candidate_photograph';
  $handler->display->display_options['fields']['field_candidate_photograph']['field'] = 'field_candidate_photograph';
  $handler->display->display_options['fields']['field_candidate_photograph']['relationship'] = 'reverse_field_candidate_constituency_node';
  $handler->display->display_options['fields']['field_candidate_photograph']['label'] = '';
  $handler->display->display_options['fields']['field_candidate_photograph']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_candidate_photograph']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_candidate_photograph']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_candidate_name']['id'] = 'field_candidate_name';
  $handler->display->display_options['fields']['field_candidate_name']['table'] = 'field_data_field_candidate_name';
  $handler->display->display_options['fields']['field_candidate_name']['field'] = 'field_candidate_name';
  $handler->display->display_options['fields']['field_candidate_name']['relationship'] = 'reverse_field_candidate_constituency_node';
  $handler->display->display_options['fields']['field_candidate_name']['label'] = '';
  $handler->display->display_options['fields']['field_candidate_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_candidate_name']['alter']['text'] = '<div class = "aap-candidate-name">[field_candidate_name] </div>';
  $handler->display->display_options['fields']['field_candidate_name']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'reverse_field_candidate_constituency_node';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['relationship'] = 'reverse_field_candidate_constituency_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'know more...';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_candidate_constituency_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['code'] = '$get_candidate_nid_query = new EntityFieldQuery();
	$get_candidate_nid_query-> entityCondition(\'entity_type\', \'node\')
	-> entityCondition(\'bundle\', \'candidate_details_page\')
	->fieldCondition(\'field_candidate_constituency\', \'target_id\', arg(1), \'=\');          
		$get_candidate_nid_result = $get_candidate_nid_query->execute();
		if (count($get_candidate_nid_result)) {
			$nid_array = array_keys($get_candidate_nid_result[\'node\']);
			return implode(\',\', $nid_array);
		}
		else {
			return "";
		}';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = TRUE;
  $handler->display->display_options['block_description'] = 'Shortlisted Candidates Block';

  /* Display: Shortlisted Candidates */
  $handler = $view->new_display('page', 'Shortlisted Candidates', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Shortlisted Candidates';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'input_required';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['relationship'] = 'reverse_field_candidate_constituency_node';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_candidate_constituency_node']['id'] = 'reverse_field_candidate_constituency_node';
  $handler->display->display_options['relationships']['reverse_field_candidate_constituency_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_candidate_constituency_node']['field'] = 'reverse_field_candidate_constituency_node';
  $handler->display->display_options['relationships']['reverse_field_candidate_constituency_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  $handler->display->display_options['filters']['type']['relationship'] = 'reverse_field_candidate_constituency_node';
  $handler->display->display_options['filters']['type']['value'] = array(
    'candidate_details_page' => 'candidate_details_page',
    'constituency_page' => 'constituency_page',
  );
  /* Filter criterion: Content: Has taxonomy terms (with depth; <em class="placeholder">Simple hierarchical select</em>) */
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['id'] = 'shs_term_node_tid_depth';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['field'] = 'shs_term_node_tid_depth';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['value'] = 'All';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['expose']['operator_id'] = 'shs_term_node_tid_depth_op';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['expose']['label'] = 'Select Constituency :';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['expose']['operator'] = 'shs_term_node_tid_depth_op';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['expose']['identifier'] = 'shs_term_node_tid_depth';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
    9 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['vocabulary'] = 'constituency';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['depth'] = '0';
  $handler->display->display_options['path'] = 'shortlisted-candidates';
  $export['delhi_site_views'] = $view;

  return $export;
}
