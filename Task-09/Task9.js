var text = "Hi"; //Type in the spam message 
var interval = 1  ; // Interval gap b/w each message 
var count = 100 ; //number of times to send
var notifyInterval = 5 ; //No. of times
var i = 0 ;
var timer = setInterval(function(){
	document.getElementsByClassName('composer_rich_textarea')[0].innerHTML = text;
	$('.im_submit').trigger('mousedown');	
	i++;
	if( i  == count )
	clearInterval(timer);
	if( i % notifyInterval == 0)
	console.log(i + ' MESSAGES SENT');
} , interval * 1000 ) ;
