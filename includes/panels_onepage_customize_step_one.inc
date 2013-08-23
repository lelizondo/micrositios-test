<?php

/**
 * Form to choose how many sections must be defined
 */
function panels_onepage_customize_step_one($form, &$form_state, $node) {

	$form["_nid"] = array(
		'#type' => "hidden",
		"#value" => $node->nid
	);

	$options = array();
	for ($i = 1; $i <= 10; $i++) {
		$options[$i] = $i;
	}

	$form["sections"] = array(
		'#type' => 'select',
		'#title' => t("How many sections?"),
		'#required' => TRUE,
		'#description' => t("Select how many sections you want to create"),
		"#options" => $options,
		"#default_value" => isset($panels_node["panels_onepage"]["sections"]) ? $panels_node["panels_onepage"]["sections"] ? NULL
	);

	$form["submit"] = array(
		"#type" => 'submit',
		"#value" => t("Next")
	);

	return $form;
}

function panels_onepage_customize_step_one_submit($form, &$form_state) {
	$values = $form_state["values"];
	$nid = $values["_nid"];

	global $user;

	$bin = "user:" . $user->uid . ":node:" . $nid;
	$data = array(
		"sections" => $values["sections"]
	);

	session_cache_set($bin, $data);

	// redirect to the following step
	$form_state["redirect"] = "node/". $nid ."/customize/step/two";
}