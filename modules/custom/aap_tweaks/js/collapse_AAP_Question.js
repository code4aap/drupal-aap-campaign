(function ($, Drupal, window, document, undefined) {
	Drupal.behaviors.mark_attendance = {
			attach: function(context) { 
					$(".aap-question-item-class .views-field-field-question").click(function() {
						$$ = $(this).siblings(".views-field-field-answer");
						$(".views-field-field-answer").not($$).hide();
						$(this).toggleClass("view-field-field-question_toggle");
						$$.slideToggle('fast','swing');

					});
					 
				} }	
				

	
	
}
)(jQuery, Drupal, this, this.document); 
