<?php
/**
 * @file
 * contenu_article.features.inc
 */

/**
 * Implements hook_node_info().
 */
function contenu_article_node_info() {
  $items = array(
    'article_page' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
