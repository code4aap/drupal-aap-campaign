<?php
/**
 * Menu callback; displays a Drupal page with an embedded iframe
 */
function aap_iframe_pages() {
	switch (arg(0)) {
		case 'join-us':
			return theme('aap-iframe-page', array('src' => 'http://internal.aamaadmiparty.org/Directory/Format.aspx?master=blank'));
			break;
			
		case 'donate':
			return theme('aap-iframe-page', array('src' => 'http://internal.aamaadmiparty.org/donate/Donate.aspx?master=blank'));
			break;
			
    case 'talk-to-us':
      return theme('aap-iframe-page', array('src' => 'http://internal.aamaadmiparty.org/RaiseYourVoice.aspx?master=blank'));
      break;
      
    case 'spread-message':
      return theme('aap-iframe-page', array('src' => 'http://internal.aamaadmiparty.org/What_can_you_do.aspx?master=blank'));
      break;
			
		default: 
			 return "";
	}
}
