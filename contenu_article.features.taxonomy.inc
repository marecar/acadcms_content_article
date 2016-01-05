<?php
/**
 * @file
 * contenu_article.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function contenu_article_taxonomy_default_vocabularies() {
  return array(
    'rubriquage' => array(
      'name' => 'rubriques',
      'machine_name' => 'rubriquage',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -6,
    ),
    'thematique' => array(
      'name' => 'thematiques',
      'machine_name' => 'thematique',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -4,
    ),
  );
}
