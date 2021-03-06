<?php

/**
 * @file
 * This file contains the functions to render the transcript tab.
 */

/**
 * Renders the TRANSCRIPT tab.
 *
 * @pararm AbstractObject $object
 *   The object the TRANSCRIPT belongs to.
 *
 * @return array
 *   A renderable array representing the tab.
 */
function islandora_transcript_view(AbstractObject $object) {
  $transcript = $object['TRANSCRIPT']->content;
  return array(
    'transcript' => array(
      '#markup' => '<pre>' . wordwrap($transcript) . '</pre>',
    ),
  );
}
