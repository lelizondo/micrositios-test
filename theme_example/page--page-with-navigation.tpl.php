<div class="main-panel-content">
  <?php if($node_tabs_block): ?>
	  <div id="floating">
	  	<?php print $node_tabs_block; ?>
		</div>
	<?php endif; ?>
	<?php print $messages; ?>
  <?php print render($page['content']); ?>
</div>