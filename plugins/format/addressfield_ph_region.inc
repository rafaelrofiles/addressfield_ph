<?php


/**
 * The list of regions in Philippines.
 */
function _addressfield_ph_region_list() {

  $data = array(
    t('') => t('- Select Region -'),
    t('Luzon - NCR') => t('NCR - National Capital Region'),
    t('Luzon - Region I') => t('Region I - Ilocos Region'),
    t('Luzon - CAR') => t('CAR - Cordillera Administrative Region'),
    t('Luzon - Region II') => t('Region II - Cagayan Valley'),
    t('Luzon - Region III') => t('Region III - Central Luzon'),
    t('Luzon - Region IV-A') => t('Region IV-A - Calabarzon'),
    t('Luzon - Region IV-B') => t('Region IV-B - Mimaropa'),
    t('Luzon - Region V') => t('Region V - Bicol Region'),
    t('Visayas - Region VI') => t('Region VI - Western Visayas'),
    t('Visayas - Region XVIII') => t('NIR / Region XVIII - Negros Island Region'),
    t('Visayas - Region VII') => t('Region VII - Central Visayas'),
    t('Visayas - Region VIII') => t('Region VIII - Eastern Visayas'),
    t('Mindanao - Region IX') => t('Region IX - Zamboanga Peninsula'),
    t('Mindanao - Region X') => t('Region X - Northern Mindanao'),
    t('Mindanao - Region XI') => t('Region XI - Davao Region'),
    t('Mindanao - Region XII') => t('Region XII - Soccsksargen'),
    t('Mindanao - Region XIII') => t('Region XIII - Caraga'),
    t('Mindanao - ARMM') => t('ARMM - Autonomous Region in Muslim Mindanao'),
  );

  return $data;
}
