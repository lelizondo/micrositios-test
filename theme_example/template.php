<?php

/**
 * @file template.php
 */


/**
 * hook_preprocess_page()
 */
function mytheme_preprocess_page(&$vars) {
	// Permite tener page--nodetype.tpl.php
	if(isset($vars["node"])) {
		$vars["theme_hook_suggestions"][] = "page__" . $vars["node"]->type; 
		if($vars["node"]->type == "page_with_navigation") {
			
		}
	}
}
