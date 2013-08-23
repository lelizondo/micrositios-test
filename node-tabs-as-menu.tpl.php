<div class="node-tabs-as-menu">
  <div class="btn-group">
    <button type="button" class="btn btn-info btn-sm"><?php print $menu_title; ?></button>
    <button type="button" class="btn btn-info dropdown-toggle btn-sm" data-toggle="dropdown">
      <span class="caret"></span>
    </button>
    <ul class="dropdown-menu" role="menu">
      <?php foreach($tabs as $tab): ?>
        <?php print render($tab); ?>
      <?php endforeach; ?>
    </ul>
  </div>
</div>