<?php


/**
 * Panel Header form
 */
function micrositios_panel_header($form, &$form_state) {
	$form = array();

	$form["image"] = array(
		'#type' => 'managed_file',
		'#title' => t("Header main image"),
		'#description' => t("Please upload an image"),
		'#progress_indicator' => 'bar',
		'#upload_location' => 'public://'
	);

	$form["submit"] = array(
		'#type' => 'submit',
		'#value' => t("Save")
	);

	return $form;
}

function micrositios_panel_header_submit($form, &$form_submit) {
	$form["image"]["#file"]->status = FILE_STATUS_PERMANENT;
	$file = file_save($form["image"]["#file"]);

	watchdog("file-saved", '<pre>' . print_r($file, 1) . '</pre>');
}