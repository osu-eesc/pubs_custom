<?php
/**
 * @file
 * pubs_custom.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function pubs_custom_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_language_and_group|node|book|form';
  $field_group->group_name = 'group_language_and_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Language and Group',
    'weight' => '5',
    'children' => array(
      0 => 'og_group_ref',
      1 => 'language',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-language-and-group field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_language_and_group|node|book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_content_img|node|book|full';
  $field_group->group_name = 'group_main_content_img';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Main_content_images',
    'weight' => '1',
    'children' => array(
      0 => 'field_section_main_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Main_content_images',
      'instance_settings' => array(
        'classes' => 'main-content-image',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_main_content_img|node|book|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_section_image|field_collection_item|field_main_publication_content|default';
  $field_group->group_name = 'group_section_image';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_main_publication_content';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Section image group',
    'weight' => '0',
    'children' => array(
      0 => 'field_section_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Section image group',
      'instance_settings' => array(
        'classes' => 'main-content-image',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_section_image|field_collection_item|field_main_publication_content|default'] = $field_group;

  return $export;
}
