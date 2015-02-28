/*
 * Copyright (C) 2014,2015 levi0x0
 * 
 * barM (bar_monitor or BarMonitor) is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 * 
 *  This is a new version of bar monitor, less lines of code more effective.
 *
 *  Read main() to configure your new status Bar.
 *
 *  compile: gcc -o barM barM.c -lX11
 *  
 *  mv barM /usr/local/bin/
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdarg.h>
#include <X11/Xlib.h>

/*
 *  Put this in your .xinitrc file: 
 *
 *      while true;do 
 *              $(barM)
 *      done &
 *  
 */

#define VERSION "0.11"
#define TIME_FORMAT "(%H:%M) (%d-%m-%Y)"
#define MAXSTR  1024

static char status[MAXSTR];

/*append here your commands*/
char *commands[] = {"uname",
                    "free -mh | awk 'NR==2{print $3\"/\"$2}'"
};

/* will append the buffer to status*/
void sprint(char *format, ...) {
        va_list li;
        static char s[MAXSTR];
        va_start(li, format);
        vsprintf(s, format, li);
        va_end(li);

        strcat(status, s);
}

/* returen the date*/
char * date(void) {
        static char date[MAXSTR];

        time_t now = time(0);

        strftime(date, MAXSTR, TIME_FORMAT, localtime(&now));
        return date;
}


/* open a pipe for a new coomand and return the output*/
char * spawn(char *c) {
        FILE *proc;
        static char buffer[MAXSTR];

        if ((proc = popen(c, "r")) == NULL ) {
                fprintf(stderr, "[barM] Failed to execute the command.\n");
                exit(1);;
        }

        fscanf(proc, "%[^\n]", buffer);
        pclose(proc);

        return buffer;
}


void XSetRoot(char *name) {
        Display *display;

        if (( display = XOpenDisplay(0x0)) == NULL ) {
                fprintf(stderr, "[barM] cannot open display!\n");
                exit(1);
        }

        XStoreName(display, DefaultRootWindow(display), name);
        XSync(display, 0);

        XCloseDisplay(display);
}

int main(int argc, char **argv) { 
        int i = 0;
        for(i = 0; commands[i]; i++ ) {
                sprint("(%s) ", spawn(commands[i]));
        }

        sprint("%s", date());
        XSetRoot(status);

        /* sleep by default you dont need to add it to your bash*/
        sleep(1);

        return 0;
}
