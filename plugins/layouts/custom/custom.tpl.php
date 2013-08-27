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
?>
<div class="panel-container">
  <?php foreach($sections as $key => $section): ?>
  <?php if(isset($section["backgroundImage"])): ?>
    <div id="container-outter-section-<?php print $key; ?>" class="stretchMe container-outter container-outter-section-<?php print $key; ?>" style="<?php print $section["style"]; ?>" data-stretch="<?php print $section["backgroundImage"]; ?>">
  <?php else: ?>
    <div id="container-outter-section-<?php print $key; ?>" class="container-outter container-outter-section-<?php print $key; ?>" style="<?php print $section["style"]; ?>">
  <?php endif; ?>
      <div class="container section-container">
        <div id="<?php print 'section-' . $key; ?>" class="row">
          <?php $cols = $section["cols"]; ?>
          <?php for($i=1; $i <= $cols; $i++): ?>
            <div id="col-<?php print $counter; ?>" class="<?php print $section["columns-class"]; ?>">
              <?php print $content["col-" . $counter]; ?>
              <?php $counter++; ?>
            </div>
          <?php endfor; ?>
        </div>
      </div>
    </div>
  <?php endforeach; ?>
</div>