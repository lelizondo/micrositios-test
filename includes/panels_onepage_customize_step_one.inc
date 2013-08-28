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
		"#default_value" => isset($node->panels_onepage["total"]) ? $node->panels_onepage["total"] : NULL
	);

	$form["actions"] = array(
		'#prefix' => '<div class="actions">',
		'#suffix' => '</div>'
	);

	$form["actions"]["submit"] = array(
		"#type" => 'submit',
		"#value" => t("Next")
	);

	return $form;
}

function panels_onepage_customize_step_one_submit($form, &$form_state) {
	$values = $form_state["values"];
	$nid = $values["_nid"];

	global $user;

	$section = panels_onepage_get($nid);
	if($section) {
		$data = unserialize($section["data"]);
		$data["total"] = $values["sections"];

		panels_onepage_save($nid, $data);
	}
	else {
		$data = array(
			"total" => $values["sections"],
		);
		
		panels_onepage_save($nid, $data);
	}

	// redirect to the following step
	$form_state["redirect"] = "node/". $nid ."/customize/step/two";
}