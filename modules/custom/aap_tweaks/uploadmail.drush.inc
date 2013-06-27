<?php 
/**
 * @file
 *
 * Drush commands for uploading sucribers.
 */

/**
 * Implements hook_drush_command().
 */
function uploadmail_drush_command() {
  $items = array();

  $items['uploadmail-list'] = array(

    'description' => 'Allows importing a list of email addresses present it a file as subscribers to a newsletter category of choice',
    'arguments' => array(
      'file_path' => 'Path of csv file having list of email id',
    ),
    'callback' => 'drush_uploadmail_list',
    'aliases' => array('import-newsletter-subscribers'),
    'required-arguments' => TRUE,
     
  );
  return $items;
}
/**
 * Drush command to count the mail spool queue.
 */
function drush_uploadmail_list($file_path = NULL) {

  module_load_include('inc', 'simplenews', 'includes/simplenews.admin');

  $email_ids = array();
  $row = 1;
  if (($handle = fopen($file_path, "r")) !== FALSE) {
    
    while (($data = fgetcsv($handle, 1000, '\n')) !== FALSE) {
      $num = count($data);
      $row++;
      for ($c=0; $c < $num; $c++) {
        $email_ids[] = $data[$c];
      }
    }

    fclose($handle);

     foreach (simplenews_categories_load_multiple() as $list) {
      $newsletters[$list->tid] = array(
        '#title' => check_plain(_simplenews_newsletter_name($list)),
      );
    }
    
    $selected_newsletter = drush_choice($newsletters, 'Choose a newsletter of which emails have to be suscribed by entering suitable number', '!key');
    $form = array();
    $form_state = array();
    $form['invoked_status'] = 'drush_command';
    $form_state['values']['newsletters'] = array(0 => $selected_newsletter);
    $form_state['values']['emails'] = $email_ids;
    $form_state['values']['language'] = 'en';
    subscription_list_add($form, $form_state);
  }
}

function subscription_list_add($form, $form_state) {
  $added = array();
  $invalid = array();
  $unsubscribed = array();
  $checked_categories = $form_state['values']['newsletters'];
  $langcode = $form_state['values']['language'];

  $emails = $form_state['values']['emails'];
  foreach ($emails as $email) {
    $email = trim($email);
    if (valid_email_address($email)) {

      $subscriber = simplenews_subscriber_load_by_mail($email);
      foreach (simplenews_categories_load_multiple($checked_categories) as $category) {
        // If there is a valid subscriber, check if there is a subscription for
        // the current category and if this subscription has the status
        // unsubscribed.
        $is_unsubscribed = $subscriber && array_key_exists($category->tid, $subscriber->newsletter_subscription)
        && $subscriber->newsletter_subscription[$category->tid]->status == SIMPLENEWS_SUBSCRIPTION_STATUS_UNSUBSCRIBED;
        if (!$is_unsubscribed || $form_state['values']['resubscribe'] == TRUE) {
          simplenews_subscribe_user($email, $category->tid, FALSE, 'mass subscribe', $langcode);
          $added[] = $email;
        }
        else {
          $unsubscribed[check_plain(_simplenews_newsletter_name($category))][] = $email;
        }
      }
    }
    else {
      $invalid[] = $email;
    }
  }

  if ($added) {
    $added = implode(", ", $added);
    drush_log(dt("The following addresses were added or updated: %added.", array('%added' => $added)), 'success');
    $list_names = array();
    foreach (simplenews_categories_load_multiple($checked_categories) as $category) {
      $list_names[] = $category->name;
    }
    drush_log('DEVEL_GENERATE_INVALID_INPUT',t('The addresses were subscribed to the following newsletters: %newsletters.', array('%newsletters' => implode(', ', $list_names))));
  }
  else {
    drush_set_error('DEVEL_GENERATE_INVALID_INPUT',t('No addresses were added.'));
  }
  if ($invalid) {
    $invalid = implode(", ", $invalid);
    drush_set_error('DEVEL_GENERATE_INVALID_INPUT',t('The following addresses were invalid: %invalid.', array('%invalid' => $invalid)), 'error');
  }

  foreach ($unsubscribed as $name => $subscribers) {
    $subscribers = implode(", ", $subscribers);
    drush_set_error('DEVEL_GENERATE_INVALID_INPUT',t('The following addresses were skipped because they have previously unsubscribed from %name: %unsubscribed.', array('%name' => $name, '%unsubscribed' => $subscribers)), 'warning');
  }

  if (!empty($unsubscribed)) {
    drush_set_error('DEVEL_GENERATE_INVALID_INPUT',t("If you would like to resubscribe them, use the 'Force resubscription' option."), 'warning');
  }

}
