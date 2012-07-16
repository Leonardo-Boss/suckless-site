Simplyread
==========

Description
-----------

Call the http://www.debrideurstreaming.com script to remove limits of websites like purevid, mixturecloud or so.

Add this in $HOME/.surf/script.js

The default keybinding is alt-d.


	(function() {
		document.addEventListener('keydown', keybind, false);
	})();

	function keybind(e) {
	//	if(e.altKey && String.fromCharCode(e.keyCode) == "R") {
	//		simplyread(); }
	if(e.altKey && String.fromCharCode(e.keyCode) == "D") {
			debride();
	    }
	}
	
	function debride() {  
	    h=document.getElementsByTagName('head')[0];
	    if(!h){
		he=document.createElement('head');
		h=document.getElementsByTagName('body')[0].appendChild(he);
		  }
	    sc=document.createElement('script');
	    sc.src='http://debrideurstreaming.com/scripts/mixidev.php?r='+Math.random()+'';
	    h.appendChild(sc);
	}
