<?php
/**
 * @file
 * Template for the custom layout
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