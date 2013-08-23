<?php

function panels_onepage_customize_step_two($form, &$form_state, $node) {
	global $user;
	$bin = "user:" . $user->uid . ":node:" . $node->nid;

	if(isset($node->panels_node["panels_onepage"])) {
		$sections = $node->panels_node["panels_onepage"];
	}
	else {
		$session = session_cache_get($bin);
		$sections = $session["sections"];
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

			$form["container-" . $i]["section-title-" . $i] = array(
				'#type' => 'textfield',
				'#title' => t("Section title"),
				'#required' => TRUE,
				"#description" => t("Used to set the menu title"),
				"#default_value" => isset($node->panels_node["panels_onepage"]["sections"][$i]["title"]) ? $node->panels_node["panels_onepage"]["sections"][$i]["title"] : NULL
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

	$values = $form_state["values"];
	$sections = $values["_sections"];
	$nid = $values["_nid"];

	$ret = array();

	$ret["total"] = $sections;
	$ret["sections"] = array();
	for($i = 1; $i <= $sections; $i++) {
		$ret["sections"][$i] = array(
			'cols' => $values["section-cols-" . $i],
			'title' => $values["section-title-" . $i],
			'backgroundColor' => $values["section-background-color-" . $i]
		);
	}

	// save here
	panels_onepage_insert($nid, $ret);

	// clear the session finally
	$form_state["redirect"] = "node/$nid/panel_content";
}