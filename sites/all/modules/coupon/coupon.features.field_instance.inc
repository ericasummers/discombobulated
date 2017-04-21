<?php
/**
 * @file
 * coupon.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function coupon_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-coupon-field_deadline'.
  $field_instances['node-coupon-field_deadline'] = array(
    'bundle' => 'coupon',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'How long the coupon lasts',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_deadline',
    'label' => 'Deadline',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -3,
    ),
  );

  // Exported field_instance: 'node-coupon-field_details'.
  $field_instances['node-coupon-field_details'] = array(
    'bundle' => 'coupon',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Details on coupon/sale',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_details',
    'label' => 'Details',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Deadline');
  t('Details');
  t('Details on coupon/sale');
  t('How long the coupon lasts');

  return $field_instances;
}
