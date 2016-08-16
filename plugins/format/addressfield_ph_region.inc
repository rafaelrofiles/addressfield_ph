<?php


/**
 * The list of regions in Philippines.
 */
function _addressfield_ph_region_list() {

  $data = array(
    t('') => t('- Select Region -'),
    t('luz - NCR') => t('NCR - National Capital Region'),
    t('luz - Region I') => t('Region I - Ilocos Region'),
    t('luz - CAR') => t('CAR - Cordillera Administrative Region'),
    t('luz - Region II') => t('Region II - Cagayan Valley'),
    t('luz - Region III') => t('Region III - Central Luzon'),
    t('luz - Region IV-A') => t('Region IV-A - Calabarzon'),
    t('luz - Region IV-B') => t('Region IV-B - Mimaropa'),
    t('luz - Region V') => t('Region V - Bicol Region'),
    t('vis - Region VI') => t('Region VI - Western Visayas'),
    t('vis - NIR / Region XVIII') => t('NIR / Region XVIII - Negros Island Region'),
    t('vis - Region VII') => t('Region VII - Central Visayas'),
    t('vis - Region VIII') => t('Region VIII - Eastern Visayas'),
    t('min - Region IX') => t('Region IX - Zamboanga Peninsula'),
    t('min - Region X') => t('Region X - Northern Mindanao'),
    t('min - Region XI') => t('Region XI - Davao Region'),
    t('min - Region XII') => t('Region XII - Soccsksargen'),
    t('min - Region XIII') => t('Region XIII - Caraga'),
    t('min - ARMM') => t('ARMM - Autonomous Region in Muslim Mindanao'),
  );

  return $data;
}
