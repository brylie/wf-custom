<?php
/**
 * @file
 * pages.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function pages_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'access_current_issues';
  $content->admin_title = 'Magazine page: introductory text.';
  $content->admin_description = 'Introductory text on magazine page.';
  $content->category = 'Western Friend';
  $content->settings = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<ul>
	<li>Subscribers have full access to all articles in recent issues of <em>Western Friend. </em>

	<ul>
		<li>It may take us a day or two to verify your subscription status after you set up a login account.</li>
	</ul>
	</li>
	<li>Other readers have full access to a few featured articles in each recent issue of <em>Western Friend</em>.</li>
	<li>All readers have full access to all articles in archived issues of <em>Western Friend.</em></li>
</ul>
',
    'format' => 'advanced',
    'substitute' => 1,
  );
  $export['access_current_issues'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'advertise';
  $content->admin_title = 'Advertise';
  $content->admin_description = 'Advertise in Western Friend - button and text';
  $content->category = 'Western Friend';
  $content->settings = array(
    'admin_title' => 'Advertise',
    'title' => '',
    'body' => '<a href="/advertise" title="advertise"
<button type="button" class="btn btn-default btn-lg wf-button">
  <span class="glyphicon glyphicon-star"></span> Advertise in <em>Western Friend</em>.
</button>
</a>
<p>Learn about rates, deadlines, and specifications for print advertising.</p>


',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $export['advertise'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'community_events_page_introductory_text';
  $content->admin_title = 'Community Events page introductory text.';
  $content->admin_description = 'Introductory text displayed on the community events page.';
  $content->category = 'Western Friend';
  $content->settings = array(
    'admin_title' => 'Community Events page introductory text.',
    'title' => '',
    'body' => '<p>Events sponsored by groups associated with Intermountain Yearly Meeting, North Pacific Yearly Meeting, and Pacific Yearly Meeting.</p>
',
    'format' => 'basic',
    'substitute' => 1,
  );
  $export['community_events_page_introductory_text'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'community_page_events_calendar_panel';
  $content->admin_title = 'Community page: events calendar button';
  $content->admin_description = 'Community page panel linking to events calendar.';
  $content->category = 'Western Friend';
  $content->settings = array(
    'admin_title' => 'Community page: events calendar button',
    'title' => '',
    'body' => '<p><img alt="" class="attr__field_file_image_alt_text[und][0][value]__ attr__field_file_image_title_text[und][0][value]__ attr__format__default attr__typeof__foaf:Image img__fid__132 img__view_mode__default media-image" src="http://wf.pymcloud.us/sites/default/files/NPYM-2014.jpg" style="float:right; height:150px; margin:0 0 0.5em 0.5em; width:259px" /></p>

<p><strong>UPCOMING EVENTS:</strong> View a list of events sponsored by members of Intermountain Yearly Meeting, North Pacific Yearly Meeting, and Pacific Yearly Meeting. Contact <em>Western Friend</em> to list your community event here, too.</p>

<p><a class="btn btn-primary btn-primary" href="/events" style="float: right; clear: both" title="Community Events">View upcoming events</a></p>
',
    'format' => 'advanced',
    'substitute' => 1,
  );
  $export['community_page_events_calendar_panel'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'community_page_imym_information';
  $content->admin_title = 'Community page: Intermountain Yearly Meeting information';
  $content->admin_description = 'community page: intermountain yearly meeting information';
  $content->category = 'Western Friend';
  $content->settings = array(
    'admin_title' => 'Community page: Intermountain Yearly Meeting information',
    'title' => '<a href ="/intermountain-yearly-meeting">Intermountain Yearly Meeting</a>',
    'body' => '<p>Listing of Quaker communities in AZ, CO, ID, NM, SD, TX, UT, &amp; WY</p>
',
    'format' => 'basic',
    'substitute' => 1,
  );
  $export['community_page_imym_information'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'community_page_introductory_text';
  $content->admin_title = 'Community page: Introductory text';
  $content->admin_description = 'Introductory text displayed at the top of the Community page.';
  $content->category = 'Western Friend';
  $content->settings = array(
    'admin_title' => 'Community page: Introductory text',
    'title' => '',
    'body' => '<p><img alt="" class="attr__field_file_image_alt_text[und][0][value]__alt attr__field_file_image_title_text[und][0][value]__title attr__format__default attr__typeof__foaf:Image img__fid__41 img__view_mode__default media-image text" src="/sites/default/files/users/marycklein/PYM-2014.JPG" style="float:right; height:150px; width:263px" /><em>Western Friend</em> supports communication and fellowship among independent Quakers in the West. Nearly 150 local Quaker meetings and worship groups comprise the three yearly meetings that support <em>Western Friend.</em></p>

<p><img alt="" class="attr__field_file_image_alt_text[und][0][value]__alt attr__field_file_image_title_text[und][0][value]__title attr__format__default attr__typeof__foaf:Image img__fid__41 img__view_mode__default media-image text" src="/sites/default/files/users/marycklein/IMYM-2014.JPG" style="height:150px; width:237px" /></p>
',
    'format' => 'advanced',
    'substitute' => 1,
  );
  $export['community_page_introductory_text'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'community_page_meeting_listings_introduction';
  $content->admin_title = 'Community page: meeting listings introduction';
  $content->admin_description = 'Introductory text describing how to find Quaker meetings on the Community page.';
  $content->category = 'Western Friend';
  $content->settings = array(
    'admin_title' => 'Community page: meeting listings introduction',
    'title' => '',
    'body' => '<h2>Find Quakers in the West</h2>

<p>Listings and maps of Quaker organizations in the West</p>
',
    'format' => 'advanced',
    'substitute' => 1,
  );
  $export['community_page_meeting_listings_introduction'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'community_page_npym_information';
  $content->admin_title = 'Community page: North Pacific Yearly Meeting information';
  $content->admin_description = 'Community page: North Pacific Yearly Meeting information';
  $content->category = 'Western Friend';
  $content->settings = array(
    'admin_title' => 'Community page: North Pacific Yearly Meeting information',
    'title' => '<a href="/north-pacific-yearly-meeting" title="North Pacific Yearly Meeting">North Pacific Yearly Meeting</a>',
    'body' => '<p>Listing of Quaker communities in ID, MT, OR, &amp; WA</p>
',
    'format' => 'basic',
    'substitute' => 1,
  );
  $export['community_page_npym_information'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'community_page_pym_information';
  $content->admin_title = 'Community page: Pacific Yearly Meeting information';
  $content->admin_description = 'Community page: Intermountain Yearly Meeting information';
  $content->category = 'Western Friend';
  $content->settings = array(
    'admin_title' => 'Community page: Pacific Yearly Meeting information',
    'title' => '<a href="/pacific-yearly-meeting" title="Pacific Yearly Meeting">Pacific Yearly Meeting</a>',
    'body' => '<p>Listing of Quaker communities in CA, HI, NV, Mexico City, and Guatemala</p>
',
    'format' => 'basic',
    'substitute' => 1,
  );
  $export['community_page_pym_information'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'community_page_wf_connect';
  $content->admin_title = 'Community page: connect button';
  $content->admin_description = 'Descriptive text and button linking to Connect page.';
  $content->category = 'Western Friend';
  $content->settings = array(
    'admin_title' => 'Community page: connect button',
    'title' => '',
    'body' => '<p><img alt="" class="Connect Friend attr__field_file_image_alt_text[und][0][value]__Western attr__field_file_image_title_text[und][0][value]__Western attr__format__default attr__typeof__foaf:Image img__fid__133 img__view_mode__default media-image" src="http://wf.pymcloud.us/sites/default/files/WF%20Connect%20Welcome.jpg" style="float:right; height:150px; margin:0 0 0.5em 0.5em; width:200px" /></p>

<p><strong>WESTERN FRIEND CONNECT:</strong> <em>Western Friend</em> hosts workshops, meetings, and interest groups in an online setting called <em>Western Friend Connect.</em> Watch for announcements of upcoming&nbsp; events in <em>Western Friend Connect</em>.</p>

<p><a class="btn btn-primary btn-primary" href="/connect" style="float: right; clear: both;" title="Western Friend Connect">View Western Friend Connect</a></p>
',
    'format' => 'advanced',
    'substitute' => 1,
  );
  $export['community_page_wf_connect'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'community_welcome_message';
  $content->admin_title = 'Community welcome message';
  $content->admin_description = 'Welcom message displayed on the community page.';
  $content->category = 'Western Friend';
  $content->settings = array(
    'admin_title' => 'Community welcome message',
    'title' => '',
    'body' => '<p>Quaker meetings and organizations affiliated with <em>Western Friend</em>.</p>
',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $export['community_welcome_message'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'connect_page_committee_room';
  $content->admin_title = 'connect_page_committee_room_button';
  $content->admin_description = 'Button to connect to the Western Friend Committee Room.';
  $content->category = 'Western Friend';
  $content->settings = array(
    'admin_title' => 'connect_page_committee_room_button',
    'title' => '',
    'body' => '<p><a class="btn btn-primary btn-primary" href="https://westernfriend.adobeconnect.com/committee-meeting-room/" style="float: right;" target="_blank" title="Committee Room">Enter Committee Room</a></p>

<p>COMMITTEE MEETING ROOM</p>

<ul>
	<li>Online location for face-to-face meetings of Friends at a distance.</li>
	<li>Available to yearly meeting committees of IMYM, NPYM, and PYM.</li>
	<li>Upon agreement of participants, meetings MAY be recorded for others to view later.</li>
</ul>
',
    'format' => 'advanced',
    'substitute' => 1,
  );
  $export['connect_page_committee_room'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'connect_page_family_room';
  $content->admin_title = 'Connect page: family room';
  $content->admin_description = 'Connect page Family room link.';
  $content->category = 'Western Friend';
  $content->settings = array(
    'admin_title' => 'Connect page: family room',
    'title' => '',
    'body' => '<p><a class="btn btn-primary btn-primary" href="https://westernfriend.adobeconnect.com/family-room/" style="float: right;" target="_blank" title="Family Room">Enter Family Room</a></p>

<p>FAMILY ROOM</p>

<ul>
	<li>Online location for face-to-face conversations among Friends at a distance.</li>
	<li>Interest groups and other conversations co-hosted by Western Friend staff and other Friends.</li>
	<li>Conversations held in this location will be PRIVATE and will NOT be recorded for others to view later.</li>
</ul>
',
    'format' => 'advanced',
    'substitute' => 1,
  );
  $export['connect_page_family_room'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'connect_page_front_porch';
  $content->admin_title = 'Connect page: front porch';
  $content->admin_description = 'Connect page, front porch link and descriptive text.';
  $content->category = 'Western Friend';
  $content->settings = array(
    'admin_title' => 'Connect page: front porch',
    'title' => '',
    'body' => '<p><a class="btn btn-primary btn-primary" href="https://westernfriend.adobeconnect.com/front-porch/" style="float: right;" target="_blank" title="Front Porch">Enter Front Porch</a></p>

<p>FRONT PORCH</p>

<ul>
	<li>Online location for face-to-face conversations among Friends at a distance.</li>
	<li>Interest groups and other conversations co-hosted by Western Friend staff and other Friends.</li>
	<li>Conversations held in this location will be PUBLIC and MAY be recorded for others to view later.</li>
</ul>
',
    'format' => 'advanced',
    'substitute' => 1,
  );
  $export['connect_page_front_porch'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'connect_page_workshop_room';
  $content->admin_title = 'Connect page: workshop room';
  $content->admin_description = 'Button linking to workshop room.';
  $content->category = 'Western Friend';
  $content->settings = array(
    'admin_title' => 'Connect page: workshop room',
    'title' => '',
    'body' => '<p><a class="btn btn-primary btn-primary" href="https://westernfriend.adobeconnect.com/workshop-meeting-room/" style="float: right;" target="_blank" title="Workshop Room">Enter Workshop Room</a></p>

<p>WORKSHOP ROOM</p>

<ul>
	<li>Online location for face-to-face workshops for Friends at a distance.</li>
	<li>Workshops co-hosted by Western Friend staff and other Friends.</li>
	<li>Typically, workshops held in this location will be recorded for others to view later.</li>
</ul>
',
    'format' => 'advanced',
    'substitute' => 1,
  );
  $export['connect_page_workshop_room'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'find_quaker_organizations';
  $content->admin_title = 'Western Friend Finder';
  $content->admin_description = 'Organizations related to Western Friend.';
  $content->category = 'Western Friend';
  $content->settings = array(
    'admin_title' => '',
    'title' => '<a href="/civicrm/profile/map?map=1&gid=15&reset=1">Western Friend Finder</a>',
    'body' => '<p>Map of Quakers affiliated with <em>Western Friend.</em></p>
',
    'format' => 'advanced',
    'substitute' => 1,
  );
  $export['find_quaker_organizations'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'future_issues_info';
  $content->admin_title = 'Future Issues - Descriptive text';
  $content->admin_description = '';
  $content->category = 'WesternFriend';
  $content->settings = array(
    'admin_title' => 'Future Issues - Descriptive text',
    'title' => 'Future Issues of the Magazine',
    'body' => '<p>Let us know if you would like to contribute writing, art, or photography to one of the upcoming issues of <em>Western Friend,</em> which will be organized around the following themes:</p>

<ul>
	<li>Nov / Dec 2014 – On Temptation <em>(Still accepting manuscripts for online publication)</em></li>
	<li>Jan / Feb 2015 – On Reconciliation <em>(Still accepting manuscripts for online publication)</em></li>
	<li>Mar / Apr 2015 – On Knowing <em>(Still accepting manuscripts for online publication)</em></li>
	<li>May / June 2015 – On Needs <em>(Manuscript deadline for print magazine: 4/1/15)</em></li>
	<li>July / Aug 2015 – On Difference <em>(Still accepting manuscripts for online publication)</em></li>
	<li>Sept / Oct 2015 – On Play <em>(Manuscript deadline for print magazine: 7/1/15)</em></li>
	<li>Nov / Dec 2015 – On Money <em>(Manuscript deadline for print magazine: 10/1/15)</em></li>
	<li>Jan / Feb 2016 – On Countries <em>(Manuscript deadline for print magazine: 10/1/15; same deadline as for Nov/Dec issue)</em></li>
</ul>
',
    'format' => 'advanced',
    'substitute' => 1,
  );
  $export['future_issues_info'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'intermountain_yearly_meeting_details';
  $content->admin_title = 'Intermountain Yearly Meeting details';
  $content->admin_description = 'Details for Intermountain Yearly Meeting.';
  $content->category = 'Western Friend';
  $content->settings = array(
    'admin_title' => 'Intermountain Yearly Meeting details',
    'title' => 'Details',
    'body' => '<div>
<p>Contact information for IMYM.</p>

<p>Can include:</p>

<ul>
	<li>Website</li>
	<li>Email</li>
	<li>Location(s)</li>
	<li>etc.</li>
</ul>
</div>
',
    'format' => 'advanced',
    'substitute' => 1,
  );
  $export['intermountain_yearly_meeting_details'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'intermountain_yearly_meeting_intro';
  $content->admin_title = 'Intermountain Yearly Meeting introduction';
  $content->admin_description = 'Descriptive text for Intermountain Yearly Meeting.';
  $content->category = 'Western Friend';
  $content->settings = array(
    'admin_title' => 'Intermountain Yearly Meeting introduction',
    'title' => '',
    'body' => 'Descriptive text for Intermountain Yearly Meeting.',
    'format' => 'advanced',
    'substitute' => TRUE,
  );
  $export['intermountain_yearly_meeting_intro'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'library_search_instructions';
  $content->admin_title = 'Media Library search instructions';
  $content->admin_description = 'End-user search instructions.';
  $content->category = 'Western Friend';
  $content->settings = array(
    'admin_title' => 'Media Library search instructions',
    'title' => 'Search Library:',
    'body' => '',
    'format' => 'basic',
    'substitute' => 1,
  );
  $export['library_search_instructions'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'north_pacific_yearly_meeting_details';
  $content->admin_title = 'North Pacific Yearly Meeting description';
  $content->admin_description = 'Details about North Pacific Yearly Meeting.';
  $content->category = 'Western Friend';
  $content->settings = array(
    'admin_title' => 'North Pacific Yearly Meeting description',
    'title' => 'Meeting Details',
    'body' => '<div>
<p>Contact information for PYM.</p>

<p>Can include:</p>

<ul>
	<li>Website</li>
	<li>Email</li>
	<li>Location(s)</li>
	<li>etc.</li>
</ul>
</div>
',
    'format' => 'advanced',
    'substitute' => 1,
  );
  $export['north_pacific_yearly_meeting_details'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'north_pacific_yearly_meeting_intro';
  $content->admin_title = 'North Pacific Yearly Meeting intro';
  $content->admin_description = 'Introductory text for North Pacific Yearly Meeting.';
  $content->category = 'Western Friend';
  $content->settings = array(
    'admin_title' => 'North Pacific Yearly Meeting intro',
    'title' => '',
    'body' => 'Introductory text for North Pacific Yearly Meeting.',
    'format' => 'advanced',
    'substitute' => TRUE,
  );
  $export['north_pacific_yearly_meeting_intro'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'pacific_yearly_meeting_contact';
  $content->admin_title = 'Pacific Yearly Meeting contact info';
  $content->admin_description = '';
  $content->category = 'Western Friend';
  $content->settings = array(
    'admin_title' => 'Pacific Yearly Meeting contact info',
    'title' => 'Meeting Details',
    'body' => '<p>Contact information for PYM.</p>

<p>Can include:</p>

<ul>
	<li>Website</li>
	<li>Email</li>
	<li>Location(s)</li>
	<li>etc.</li>
</ul>
',
    'format' => 'advanced',
    'substitute' => 1,
  );
  $export['pacific_yearly_meeting_contact'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'pacific_yearly_meeting_intro';
  $content->admin_title = 'Pacific Yearly Meeting intro text';
  $content->admin_description = '';
  $content->category = 'Western Friend';
  $content->settings = array(
    'admin_title' => 'Pacific Yearly Meeting intro text',
    'title' => '',
    'body' => 'Basic introductory text about Pacific Yearly Meeting.',
    'format' => 'advanced',
    'substitute' => TRUE,
  );
  $export['pacific_yearly_meeting_intro'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'quaker_finder_text';
  $content->admin_title = '';
  $content->admin_description = 'Description of Quaker Finder for the community page.';
  $content->category = 'Western Friend';
  $content->settings = array(
    'admin_title' => '',
    'title' => '<a href="http://www.fgcquaker.org/connect/quaker-finder" title="Quaker Finder">Quaker Finder</a>',
    'body' => '<p>Map of Quakers in North America affiliated with FGC</p>
',
    'format' => 'advanced',
    'substitute' => 1,
  );
  $export['quaker_finder_text'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'reader_forum';
  $content->admin_title = 'Reader Forum';
  $content->admin_description = '';
  $content->category = 'Western Friend';
  $content->settings = array(
    'admin_title' => 'Reader Forum',
    'title' => '',
    'body' => '<a href="forum/readers">
<button type="button" class="btn btn-default btn-lg wf-button">
  <span class="glyphicon glyphicon-heart"></span> Join the Reader Forum
</button>
</a>
<p>Share your thoughts about articles in Western Friend.</p>
',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $export['reader_forum'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'subscribe';
  $content->admin_title = 'Subscribe';
  $content->admin_description = 'Ask users to subscribe for full access.';
  $content->category = 'Subscribe';
  $content->settings = array(
    'admin_title' => 'Subscribe',
    'title' => 'Please Subscribe',
    'body' => '<p>Subscribers can view full articles for our latest issues.</p>
',
    'format' => 'basic',
    'substitute' => 1,
  );
  $export['subscribe'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'subscribe_now';
  $content->admin_title = 'subscribe now';
  $content->admin_description = 'Urge visitors to subscribe.';
  $content->category = 'subscribe';
  $content->settings = array(
    'admin_title' => 'subscribe now',
    'title' => '',
    'body' => '<a class="btn btn-primary btn-primary" href="/civicrm/contribute/transact?reset=1&id=1" style="float: right;" title="Show all media library items.">Subscribe Now</a>
<p class="intro-text"><strong><a href="http://wf.pymcloud.us/civicrm/contribute/transact?reset=1&amp;id=1" style="text-decoration: underline;">Subscribe now</a> to read all articles in </strong>Western Friend.</p>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $export['subscribe_now'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'subscribe_sidebar';
  $content->admin_title = 'Subscribe';
  $content->admin_description = 'Subscribe sidebar.';
  $content->category = 'subscribe';
  $content->settings = array(
    'admin_title' => 'Subscribe',
    'title' => '',
    'body' => '<p>Subscribe to Western Friend Magazine Star</p>

<p>Subscribers have full access to all articles in the three latest issues of <em>Western Friend.</em> Limited access to these issues is available to all readers. Full access to archived articles is available to all readers</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $export['subscribe_sidebar'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'subscribe_to_western_friend';
  $content->admin_title = 'Subscribe';
  $content->admin_description = '';
  $content->category = '';
  $content->settings = array(
    'admin_title' => 'Subscribe',
    'title' => 'Subscribe',
    'body' => '<p><a href="http:///wf.pymcloud.us/subscribe" title="Subscribe">Subscribe to <em>Western Friend!</em></a></p>

<p>Subscribers have full access to all articles in the three latest issues of Western Friend. Limited access to these issues is available to all readers. Full access to archived articles is available to all readers.</p>
',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $export['subscribe_to_western_friend'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'welcome_message';
  $content->admin_title = 'Welcome Message';
  $content->admin_description = 'Welcome message displayed for visitors.';
  $content->category = '';
  $content->settings = array(
    'admin_title' => 'Welcome Message',
    'title' => '',
    'body' => '<p><span class="western-friend-display-name">Western Friend</span> is the official publication of Quakers in Pacific, North Pacific, and Intermountain Yearly Meetings.</p>
',
    'format' => 'advanced',
    'substitute' => 1,
  );
  $export['welcome_message'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'wf_media_library_intro';
  $content->admin_title = 'wf-media-library-intro';
  $content->admin_description = 'Introductory text displayed on the Media Library page.';
  $content->category = 'Western Friend';
  $content->settings = array(
    'admin_title' => 'wf-media-library-intro',
    'title' => '',
    'body' => '<a class="" href="/library" style="float: right; background-color: #444; padding: 0.8em; border-radius: 3px; color: #fff;" title="Show all media library items.">SHOW ALL</a>
<p style="margin-bottom: 0;">Use the filters below to view subsets of items in the Western Friend library. Use the search box to look for specific titles.</p>
',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $export['wf_media_library_intro'] = $content;

  return $export;
}
