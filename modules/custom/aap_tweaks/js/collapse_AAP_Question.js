(function ($, Drupal, window, document, undefined) {
	Drupal.behaviors.mark_attendance = {
			attach: function(context) { 
					$(".aap-question-item-class .views-field-field-question").click(function() {
						$answer_div = $(this).siblings(".views-field-field-answer");
						$read_more_div = $(this).siblings(".views-field-view-node");
						$(".views-field-field-answer").not($answer_div).hide();
						$read_more_div.toggleClass("views-field-view-node_toogle");
						$(this).toggleClass("view-field-field-question_toggle");
						$answer_div.slideToggle('fast','swing');

					});
					 
				} }	
				
}
)(jQuery, Drupal, this, this.document); 
