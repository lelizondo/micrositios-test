<?php

$plugin = array(
	'title' => 'Custom',
	'category' => t("Builders"),
	"icon" => 'custom.png',
	'theme' => 'custom',
	'css' => 'panels_onepage_custom_layout.css',
	'regions function' => "_panels_onepage_panels_flexible_panels"
);

function _panels_onepage_panels_flexible_panels() {
	// Hack, definir 100 regiones primero, despues se cortan a las que necesitamos
	// No se porque pero necesitamos hacer esto aparentemente antes de cargar el nodo
	// o no vienen definidas antes
	// No se si tenga que ver el hecho de cargar el nodo aqui en lugar de hacerlo en un
	// preprocess, intentar de esta manera y editar el comentario
	for($j = 0; $j <= 100; $j++) {
		$regions["col-" . $j] = "col-" . $j;
	}
		
	if(arg(0) == "node" && is_numeric(arg(1))) {
		$node = node_load(arg(1));
		$sum = array();
		foreach($node->panels_node["panels_onepage"]["sections"] as $key => $col) {
			$sum[] = $col["cols"];
		}

		$totalDeColumnas = array_sum($sum);

		for($i = 0; $i <= $totalDeColumnas; $i++) {
			$regions["col-$i"] = "col-" . $i;
		}
	}
	
	return $regions;
}