#!/usr/bin/env sh
# externalpipe_buffer.sh
#
# Description:
#   Script enabling keyboard-based dmenu copy/paste between multiple different
#   st/surf instances. Designed to be used in combination with the surf & st
#   externalpipe-signal patches.
#
#   Note: by default assumes you've patched both st & surf for SIGUSR1 with
#   signal patches and shares 1 buffer for convience. Comment if using just st or surf.
#
#   Upon executing dmenu_copy/dmenu_type, SIGUSR1 is sent to st & surf.
#   St/surf then additionally call this script w/ "{surf,st}_strings_read" arg.
#   This loads up the $BUFFER_FILE (FIFO or file) with the contents filtered
#   for what should appear in dmenu. If using (BUFFER_FILE_FIFO=true), dmenu
#   is then immediatedly invoked reading from $BUFFER_FILE as STDIN; if not
#   using a FIFO, BUFFER_FILE_R_DELAY is waited on before reading file / invoking dmenu.
#
#   Highly reccomended for quick feedback: set BUFFER_FILE_FIFO=true & use dmenu
#   non_blocking_stdin patch: tools.suckless.org/dmenu/patches/non_blocking_stdin/
#
# Install:
#   - Add script to $PATH
#   - Use "externalpipe_buffer.sh dmenu_type" as a hotkey (in surf/st/wm).
#   - Use "externalpipe_buffer.sh st_strings_read" as st externalpipe-signal command.
#   - Use "externalpipe_buffer.sh surf_strings_read" as surf externalpipe-signal command.
#
# Deps:
#  xmllint, xdotool, xargs, xclip, pkill

# Please adjust:
BUFFER_FILE=/tmp/content_buffer
BUFFER_FILE_FIFO=false
BUFFER_FILE_R_DELAY=500 # Unused if BUFFER_FILE_FIFO=true

function write_to_buffer() {
  cat >> $BUFFER_FILE &
}
function dedupe_and_sort() {
  sort | uniq | grep . | awk '{ print length, $0 }' | sort -n -s | cut -d" " -f2-
}
function trigger_sigusr1() {
  rm -f $BUFFER_FILE
  if [ $BUFFER_FILE_FIFO == true ]
  then
    test ! -p $BUFFER_FILE && rm -f $BUFFER_FILE && mkfifo $BUFFER_FILE
    pkill -USR1 surf &
    pkill -USR1 st &
  else
    test ! -f $BUFFER_FILE && rm -f $BUFFER_FILE && touch $BUFFER_FILE
    pkill -USR1 surf
    pkill -USR1 st
    echo $BUFFER_FILE_R_DELAY | xargs -IN echo N/1000 | bc -l | xargs sleep
  fi
}
function dm() { dmenu "$@" -l 10 -i -w $(xdotool getactivewindow); }

function st_strings_read() {
  INPUT="$(cat)"
  echo "$(
    # General Strings, quoted string, and whole lines
    echo "$INPUT" | grep -Eo '\S+' | tr -d '[:blank:]'
    echo "$INPUT" | grep -oP '"[^"]+"' | tr -d '"'
    echo "$INPUT" | sed 's/^ *[0-9]\+.//g' | awk '{$1=$1};1'
  )" |
  dedupe_and_sort |
  write_to_buffer
}
function surf_strings_read() {
  awk '{printf "%sNEWLINE_REPLACE", $0} END {printf "\n"}' |
    xmllint --html --xpath "//*" - |
    awk '{ gsub("<[^>]*>", ""); print($0); }' |
    sed 's/NEWLINE_REPLACE/↵/g' |
    awk '{ gsub("<[^>]*>",""); print $0 }' |
    sed 's/&lt;/</g' |
    sed 's/&gt;/>/g' |
    dedupe_and_sort |
    write_to_buffer
}
function dmenu_copy() {
  trigger_sigusr1
  cat $BUFFER_FILE | dm -p 'Screen Copy' | sed 's/↵/\n/g' | xclip -i
}
function dmenu_type() {
  trigger_sigusr1
  cat $BUFFER_FILE | dm -p 'Screen Type' | sed 's/↵/\n/g' | xargs -IC xdotool type --delay 0 "C"
}

$1
