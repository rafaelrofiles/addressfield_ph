<?php

/**
 * @file
 * The default format for Philippines adresses.
 */
// Plugin name.
$plugin = array(
  'title' => t('Address form (specific for Philippines)'),
  'format callback' => 'addressfield_ph_format_address_generate',
  'type' => 'address',
  'weight' => -100,
);

/**
 * Format callback for Philippines address.
 *
 * @see CALLBACK_addressfield_format_callback()
 */
function addressfield_ph_format_address_generate(&$format, $address, $context = array()) {
  if ($address['country'] == 'PH') {

    unset($format['locality_block']['dependent_locality']);

    $format['locality_block']['administrative_area'] = array(
      '#title' => t('Region'),
      '#options' => _addressfield_ph_region_list(),
      '#required' => TRUE,
      '#attributes' => array('class' => array('administrative-area')),
      '#weight' => 1,
    );

    $format['locality_block']['locality'] = array(
      '#title' => t('City/Provinces'),
      '#size' => 20,
      '#tag' => 'div',
      '#attributes' => array('class' => array('dependent', 'city')),
      '#weight' => 2,
    );

    // Default district.

    $city = array();

    if (!empty($address['administrative_area'])) {
      $city = _locality_list($address['administrative_area']);
    }

    $cities = array_combine($city, $city);
    $format['locality_block']['locality']['#options'] = $cities;
  }
  // Format render.
  if ($context['mode'] == 'render' && $address['country'] == 'PH') {
    // $format['locality_block']['dependent_locality']['#weight'] = 1;
    $format['locality_block']['administrative_area']['#weight'] = 1;
    $format['locality_block']['postal_code']['#weight'] = 2;
    $format['locality_block']['postal_code']['#prefix'] = ' ';
  }
  // Check ajax form in Philippines.
  if ($context['mode'] == 'form' && $address['country'] == 'PH') {
    $format['locality_block']['administrative_area']['#ajax'] = array(
      'callback' => 'addressfield_standard_widget_refresh',
      'wrapper' => $format['#wrapper_id'],
      'method' => 'replace',
    );
  }
  else {
    if (isset($format['locality_block']['locality'])) {
      $format['locality_block']['locality']['#ajax'] = array();
    }
  }
}
