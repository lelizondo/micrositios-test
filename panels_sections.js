(function($) {
	
	function loadSimpleDiv(response) {
		var template = _.template(JavascriptTemplates.simpleDiv);
		$("#content").append(template({message: response.message}));
	}

	var testView = Backbone.View.extend({
		el: "#page",
		events: {
			"click div.description": "clickDescription"
		},
		template: _.template(JavascriptTemplates.simpleDiv),
		initialize: function() {
			console.log("Initialized testView");
			this.render();
		},
		render: function() {
			var response = {
				message: "Hello World"
			}

			$("#content").append(this.template({message: response.message}));
		},
		clickDescription: function() {
			var that = this;

			var data = "Hola mundo, esto es data";

			$.ajax({
				type: "POST",
				url: "/micro/testjs",
				data: data,
				success: function(res) {
					var response = {
						message: res.data,
						message2: res.that
					}

					$("#content").append(that.template({message: response.message}));
				}
			});

		}
	});
	
	





	Drupal.behaviors.micrositios = {
		attach: function(context, settings) {
			new testView();
		}
	}

	console.log("Hello world");
})(jQuery);
