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
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <X11/Xlib.h>

#define VERSION "0.10"
#define TIME_FORMAT " (%H:%M) (%d-%m-%Y)"
#define MAXSTR  1024

char * TimeADate(void) {
        static char buffer[MAXSTR];

        /* get time*/
        time_t now = time(0);


        /* Read the time by the foramt*/
        strftime(buffer, MAXSTR, TIME_FORMAT, localtime(&now));

        /* Return the buffer content*/
        return buffer;
}


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

        /* try open display*/
        if (( display = XOpenDisplay(0x0)) == NULL ) {
                fprintf(stderr, "[barM] cannot open display!\n");
                exit(1);
        }

        XStoreName(display, DefaultRootWindow(display), name);
        XSync(display, 0);

        XCloseDisplay(display);
}

int main(int argc, char **argv) {
        char status[MAXSTR];

        /*append here your commands for the spawn function*/
        char *ram = spawn("free -mh | awk 'NR==2{print $3\"/\"$2}'");
        
        /* Examples:
                char *battery = spawn("/sys/class/power_supply/BAT1/capacity");
                char *uname = spawn("uname");
                char * battery_status= spawn("/sys/class/power_supply/BAT1/status");


        XXX: DONT! forget to add the varibale to sprintf() 
        */
        
        sprintf(status, "(%s) %s", ram, TimeADate());
        XSetRoot(status);

        /*sleep function*/
        sleep(1);

        return 0;
}
