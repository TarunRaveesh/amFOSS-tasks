
## Task 09 - Spammer Spaghetti

#### Do all modern web browsers have a console in them?
Not all, but most modern web browsers that support standards-based HTML and XHTML will provide you with access to a Developer Console where you can work with JavaScript in an interface similar to a terminal shell.

#### What can you do in this console?
However, different web browser consoles seem to have a bit difference in between, but turns out one can do a whole lot of stuff Using the Developer Console like :
* Select DOM Elements
* Convert Your Browser Into An Editor
* Find Events Associated with an Element in the DOM
* Monitor Events
* Find the Time Of Execution of a Code Block
* Arrange the Values of a Variable into a Table
* Inspect an Element in the DOM
* List the Properties of an Element
   
   And many more... 😉

***

Now coming to the actual task, I spammed a hundred 'Hi' messages to my friend in the Telegram Web using the Console in Microsoft Edge... Damn, that was soo much fun. But he's a close friend hence was okay with it lol... 😜

##### Here's My Javascript Code I used in the console:

```javascript
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
```
I'll have uploded a video, do check that out...
