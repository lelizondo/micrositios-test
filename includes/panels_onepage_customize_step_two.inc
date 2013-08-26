<?php

function panels_onepage_customize_step_two($form, &$form_state, $node) {
	global $user;

	if(isset($node->panels_node["panels_onepage"])) {
		$sections = $node->panels_node["panels_onepage"];
	}

	if($sections["total"] > 0) {
		$form["_sections"] = array("#type" => "hidden", "#value" => $sections["total"]);

		$form["_nid"] = array(
			'#type' => "hidden",
			"#value" => $node->nid
		);
		
		// Crear una lista de 3 columnas máximo
		$cols = array();
		for($c=1; $c <= 3; $c++) {
			$cols[$c] = $c;
		}

		// // Cuantas secciones vamos a crear
		for($i=1; $i <= $sections["total"]; $i++) {
			$form["container-" . $i] = array(
				"#type" => "fieldset",
				'#title' => t("Settings for section !section", array("!section" => $i)),
			);

			$form["container-" . $i]["menu-title-" . $i] = array(
				'#type' => 'textfield',
				'#title' => t("Menu title"),
				'#required' => FALSE,
				"#description" => t("Used to set the menu title"),
				"#default_value" => isset($node->panels_node["panels_onepage"]["sections"][$i]["menu_title"]) ? $node->panels_node["panels_onepage"]["sections"][$i]["menu_title"] : NULL
			);

			$form["container-" . $i]["section-background-color-" . $i] = array(
				'#type' => 'textfield',
				'#title' => t("Section background color"),
				'#required' => FALSE,
				"#description" => t("Don't add the #"),
				"#default_value" => isset($node->panels_node["panels_onepage"]["sections"][$i]["backgroundColor"]) ? $node->panels_node["panels_onepage"]["sections"][$i]["backgroundColor"] : NULL
			);			

			$form["container-" . $i]["section-cols-" . $i] = array(
				'#type' => 'select',
				'#title' => t("How many columns you need in this section?"),
				'#required' => TRUE,
				'#description' => t("Select how many columns you need for this section"),
				'#options' => $cols,
				"#default_value" => isset($node->panels_node["panels_onepage"]["sections"][$i]["cols"]) ? $node->panels_node["panels_onepage"]["sections"][$i]["cols"] : NULL
			);
		}

		$form["submit"] = array(
			"#type" => "submit",
			"#value" => t("Next")
		);
	}
	
	return $form;
}

function panels_onepage_customize_step_two_submit(&$form, &$form_state) {
	global $user;

	$values = $form_state["values"];
	$sections = $values["_sections"];
	$nid = $values["_nid"];

	$ret = array();

	$ret["total"] = $sections;
	$ret["sections"] = array();
	for($i = 1; $i <= $sections; $i++) {
		$ret["sections"][$i] = array(
			'cols' => $values["section-cols-" . $i],
			'menu_title' => check_plain($values["menu-title-" . $i]),
			'backgroundColor' => check_plain($values["section-background-color-" . $i])
		);
	}

	// save here
	panels_onepage_save($nid, $ret);

	$node = node_load($nid);

	if($node->panels_node["pipeline"] == "ipe") {
		$form_state["redirect"] = "node/$nid";
	}
	else {
		$form_state["redirect"] = "node/$nid/panel_content";
	}
}