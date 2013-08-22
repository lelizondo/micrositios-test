<?php
/**
 * @file
 * Template for the 1 column panel layout.
 *
 * This template provides a three column 25%-50%-25% panel display layout.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   - $content['left']: Content in the left column.
 *   - $content['middle']: Content in the middle column.
 *   - $content['right']: Content in the right column.
 */
  if(arg(0) == "node" && is_numeric(arg(1))) {
    $node = node_load(arg(1));
    $counter = 1;
  }

  function bootstrap_columns($cols) {
    $width = 12/$cols;
    $arr = array(
      "col-xs-" . $width,
      "col-sm-" . $width,
      "col-md-" . $width,
      "col-lg-" . $width
    );

    return implode(" ", $arr);
  }


  /**
   * Set inline styles
   */
  function setStyles($section) {
    // Default to white
    $color = isset($section["backgroundColor"]) ? $section["backgroundColor"] : "#ffffff";

    // Check if the user entered the color with # or without
    if(strpos($color, "#") === false) {
      $styles = "background-color: #" . $color;
    }
    else {
      $styles = "background-color: " . $color;  
    }

    return $styles;
  }
?>

<div class="panel-container">
  <?php foreach($node->panels_node["micrositios"]["sections"] as $key => $section): ?>
    <div id="container-outter-section-<?php print $key; ?>" class="container-outter container-outter-section-<?php print $key; ?>" style="<?php print setStyles($section); ?>">
      <div class="container section-container">
        <div id="<?php print 'section-' . $key; ?>" class="row">
          <?php $cols = $section["cols"]; ?>
          <?php for($i=1; $i <= $cols; $i++): ?>
            <div id="col-<?php print $counter; ?>" class="<?php print bootstrap_columns($cols); ?>">
              <?php print $content["col-" . $counter]; ?>
              <?php $counter++; ?>
            </div>
          <?php endfor; ?>
        </div>
      </div>
    </div>
  <?php endforeach; ?>
</div>