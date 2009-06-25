% {
THEMES
======

Various color schemes to try out. These appear in `rc` syntax, so they may
require some modification to work with your configuration.

% } | $formatter

<style>
div#content div {
    width: 100%;
    border: 1px solid;
    font-family: monospace;
    text-indent: 1em;
}
</style>

%{
fn theme {
	name = $1
	* = ($WMII_FOCUSCOLORS $WMII_NORMCOLORS)
	ff = $1; fb = $2; fr = $3
	nf = $4; nb = $5; nr = $6
	bg = $WMII_BACKGROUND
%}
	<h1>%($name%)</h1>
	<div style="color: %($ff%); background: %($bg%); border-color: %($fr%);">
		<div style="color: %($ff%); background: %($fb%); border: 0px; border-bottom: 1px solid %($fr%); margin: 0;">
		    WMII_FOCUSCOLORS=('%($ff%)' '%($fb%)' '%($fr%)')
		</div>
		<div style="margin: 0;">
			WMII_BACKGROUND='%($bg%)'
		</div>
	</div>
	<div style="color: %($nf%); background: %($nb%); border-color: %($nr%); margin-top: .5em;">
		WMII_NORMCOLORS=('%($nf%)' '%($nb%)' '%($nr%)')
	</div>
%{
	font=`{echo $WMII_FONT | 9 sed 's/^-[^\-]+-([^\-]+).*/\1/g'}
	if(test $"WMII_FONT) {
		%}
		<div style="font-family: %($font%);">
			WMII_FONT='%($WMII_FONT%)'
		</div>
		%{
	}
	WMII_FONT=()
}

WMII_FOCUSCOLORS=('#ffffff' '#153F1F' '#2A7F3F')
WMII_BACKGROUND='#333333'
WMII_NORMCOLORS=('#222222' '#5FBF77' '#2A7F3F')
theme 'default'
WMII_FOCUSCOLORS=('#A0FF00' '#686363' '#8c8c8c')
WMII_BACKGROUND='#333333'
WMII_NORMCOLORS=('#e0e0e0' '#444444' '#666666')
theme 'gray and green'
WMII_FOCUSCOLORS=('#000000' '#bbc5ff' '#000000')
WMII_BACKGROUND='#ddeedd'
WMII_NORMCOLORS=('#000000' '#f8f8f4' '#f8f8f4')
theme 'light blue and white'
WMII_FOCUSCOLORS=('#ffffff' '#285577' '#4C7899')
WMII_BACKGROUND='#333333'
WMII_NORMCOLORS=('#888888' '#222222' '#333333')
theme 'blue and smoke'
WMII_FOCUSCOLORS=('#ff7700' '#11111' '#ff7700')
WMII_BACKGROUND='#333333'
WMII_NORMCOLORS=('#000000' '#ffffff' '#666666')
WMII_FONT='-*-terminus-*-*-*-*-12-*-*-*-*-*-*-*'
theme 'sleepless night'
WMII_FOCUSCOLORS=('#66FF00' '#101010' '#66FF00')
WMII_BACKGROUND='#888888'
WMII_NORMCOLORS=('#EEEEEE' '#000000' '#111111')
WMII_FONT='-artwiz-snap-normal-*-*-*-*-*-*-*-*-*-*-*'
theme 'the green'
WMII_FOCUSCOLORS=('#000000' '#CD6D37' '#000000')
WMII_BACKGROUND='#888888'
WMII_NORMCOLORS=('#000000' '#848484' '#000000')
WMII_FONT='-b&h-lucidatypewriter-medium-r-*-*-*-100-*-*-*-*-*-*'
theme 'the orange'
WMII_FOCUSCOLORS=('#fefefe' '#307080' '#5090a0')
WMII_BACKGROUND='#333333'
WMII_NORMCOLORS=('#cccccc' '#004050' '#002030')
WMII_FONT='-*-fixed-medium-r-normal-*-13-*-*-*-*-*-*-*'
theme 'crystal shining style'
WMII_FOCUSCOLORS=('#FFFFFF' '#FF11FF' '#000000')
WMII_BACKGROUND='#FF88FF'
WMII_NORMCOLORS=('#000000' '#FF55FF' '#000000')
WMII_FONT='-*-fixed-medium-r-normal-*-13-*-*-*-*-*-*-*'
theme 'kawai anime'
WMII_FOCUSCOLORS=('#eeeeee' '#506070' '#708090')
WMII_BACKGROUND='#333333'
WMII_NORMCOLORS=('#bbbbbb' '#222222' '#000000')
WMII_FONT='-artwiz-snap-*-*-*-*-*-*-*-*-*-*-*-*'
theme 'anthrazit style'
WMII_FOCUSCOLORS=('#000000' '#eaffff' '#8888cc')
WMII_BACKGROUND='#757575'
WMII_NORMCOLORS=('#000000' '#ffffea' '#bdb76b')
WMII_FONT='-artwiz-glispbold-*-*-*-*-*-*-*-*-*-*-*-*'
theme 'acme style'
WMII_FOCUSCOLORS=('#000000' '#9eeeee' '#8888cc')
WMII_BACKGROUND='#757575'
WMII_NORMCOLORS=('#000000' '#eeee9e' '#99994c')
WMII_FONT='-artwiz-glispbold-*-*-*-*-*-*-*-*-*-*-*-*'
theme 'acme darkly style'
WMII_FOCUSCOLORS=('#000000' '#9191FF' '#444444')
WMII_BACKGROUND='#333333'
WMII_NORMCOLORS=('#9191FF' '#000000' '#444444')
WMII_FONT='-artwiz-glispbold-*-*-*-*-*-*-*-*-*-*-*-*'
theme 'blue style'
WMII_FOCUSCOLORS=('#EEEEEE' '#005577' '#006699')
WMII_BACKGROUND='#111111'
WMII_NORMCOLORS=('#BBBBBB' '#222222' '#000000')
WMII_FONT='-artwiz-glispbold-*-*-*-*-*-*-*-*-*-*-*-*'
theme 'bluedark style'
WMII_FOCUSCOLORS=('#ffffff' '#282828' '#cccccc')
WMII_BACKGROUND='#333333'
WMII_NORMCOLORS=('#e0e0e0' '#0a0a0a' '#606060')
theme 'gloom'
WMII_FOCUSCOLORS=('#54FF54' '#000000' '#73A5FF')
WMII_BACKGROUND='#000000'
WMII_NORMCOLORS=('#A8A8A8' '#000000' '#A07040')
WMII_FONT='*-fixed-medium-r-*-*-13-*-*-*-*-*-*-*'
theme 'Xterm style'

%}

