(function($) {
	Drupal.behaviors.panels_onepage = {
		attach: function(context, settings) {
			$(".stretchMe").anystretch();	

			$('.nav').onePageNav();
		}
	}
})(jQuery);
