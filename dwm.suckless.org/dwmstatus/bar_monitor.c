/*
 * bar_monitor.c - another version of dwmstatus. 
 *
 *  Author: levi0x0
 *
 *
 *
 *  if you Want to write new fucntion to bar_monitor please do so!
 *  and let me know (:
 * 
 *
 * XXX:
 *  IN VERSION 0.9 I DIDN'T CHECKED bar_monitor ON a LAPTOP
 *  IF YOU FOUND ANY BUGS PLEASE LET ME KNOW!
 *
 *-----------
 *  News:
 *-----------
 *      What's New in Version 0.9?
 *
 *      1) Check Mail function for gmail using libcurl!
 *      2) a Laptop Support 
 *      3) Porto options
 *      4) Many Features has been added
 *     
 *     And many more!
 *
 *-------------
 * ChangeLog:
 * ------------
 * 	 07/11/2014, - 0.9
 * 	 13/09/2014, - 0.8
 * 	 08/08/2014, - 0.7
 * 	 19/07/2014, - 0.3
 * 	 02/07/2014, - 0.1
 *
 *
 * -----------
 *  Usage
 * ----------
 * .xinitrc:
 *
 * 	while [ true ];do
 * 	    $(bar_monitor)
 * 	done &
 *
 * bar_monitor contain sleep(1) function.
 *
 *--------------
 *  Compile
 *--------------
 *
 *  Compile:
 *      gcc bar_monitor.c -o bar_monitor -lX11
 *
 *  Compile with CHECK_GMAIL_FUNCTION:
 *      gcc bar_monitor.c -o bar_monitor -lX11 -lcurl
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <X11/Xlib.h>

/* globals*/
#define VERSION "0.9"
#define TIME_FORMAT "%H:%M (%d/%m/%Y)"
#define MEXSTR  1024
#define CHECK_GMAIL_MAIL  0


/* Laptop config*/
#define LAPTOP  0

#if LAPTOP
	#define SHOW_BATTERY  0
	#define SHOW_TEMP   0
	#define TEMP_FILE	"/sys/class/hwmon/hwmon0/temp1_input"
	
    /* BAT1 or BAT0 change if needed*/
	#define CAPACITY_FILE	"/sys/class/power_supply/BAT1/capacity"
	#define BATTERY_STATUS_FILE	"/sys/class/power_supply/BAT1/status"
    char status_linecp[MEXSTR];
 
    /* Functions prototypes*/
    char * ReadBatteryStat(void);
    int ReadBatteryCap(void);
    int ReadTemp(void);

#endif

/* include libcurl and gmail stuff*/
#if CHECK_GMAIL_MAIL
        #include <curl/curl.h>
        #define CURL_VERBOSE    0
        static char * GMAIL_MAIL_FEED = "https://mail.google.com/mail/feed/atom";
        static char * GMAIL_MAIL_USER = "USERNAME";
        static char * GMAIL_MAIL_PASSWORD = "PASSWORD";
        static char * USER_AGENT  = "Mozilla/5.0 (X11; Linux; rv:0.0) Mail Reader BarMon "VERSION;
        
        /* Functions prototypes*/
        int CheckGmail(void);
#endif

/* Variables */
static char buffer[MEXSTR];
static char data_size[MEXSTR];

/* functions prototypes */
char * TimeADate(void);
void XSetRoot(char *);

int main(int argc, char **argv) {
        char status[MEXSTR];
        int Newmail = 0;

        #if CHECK_GMAIL_MAIL
                CheckGmail();
                /* 348 can be change by the size of your email address,
                 * you can check the size of the curl_buffer and change it*/
                if ( strlen(data_size) > 348 )
                        Newmail = 1;       
                else
                        Newmail = 0;
        #endif
 
        #if LAPTOP
                sprintf(status, "( %d%%m %s ) (%d) %s", ReadBatteryCap, 
                                ReadBatteryStat, Newmail, TimeADate());
                XSetRoot(status);
        #else
                sprintf(status, "(%d) %s", Newmail, TimeADate());
                XSetRoot(status);
        #endif
         
 

        /* Sleep function sleep 30 sec and update the bar_monitor
         * you can inc/dec */
        sleep(30);

        return 0;
}

char * TimeADate(void) {
        /* get time*/
        time_t now = time(0);


        /* Read the time by the foramt*/
        strftime(buffer, MEXSTR, TIME_FORMAT, localtime(&now));

        /* Return the buffer content*/
        return buffer;
}


void XSetRoot(char *name) {
        Display *display;

        /* try open display*/
        if (( display = XOpenDisplay(0x0)) == NULL ) {
                fprintf(stderr, "[BarMon] Oh NO! Cannot open display!\n");
                exit(1);
        }

        /* set window name*/
        XStoreName(display, DefaultRootWindow(display), name);
        XSync(display, 0);

        /* close display*/
        XCloseDisplay(display);
}


void * WriteBackData(void *ptr, size_t nmemb, size_t size, void *stream) {
        strncpy(data_size, ptr, MEXSTR);
}

#if CHECK_GMAIL_MAIL
        int CheckGmail(void) {
                CURL *curl_handler;
                CURLcode r;


                /* init curl*/
                curl_handler = curl_easy_init();


                /* start*/

                if ( curl_handler ) {
                        /* feed url*/
                        curl_easy_setopt(curl_handler, CURLOPT_URL, GMAIL_MAIL_FEED);
                
                        /* login det*/
                        curl_easy_setopt(curl_handler, CURLOPT_USERNAME, GMAIL_MAIL_USER);
                        curl_easy_setopt(curl_handler, CURLOPT_PASSWORD, GMAIL_MAIL_PASSWORD);
                
                        /* USER Agent*/
                        curl_easy_setopt(curl_handler, CURLOPT_USERAGENT , USER_AGENT);
                
                        /* SSL*/
                        curl_easy_setopt(curl_handler, CURLOPT_SSL_VERIFYPEER, 1);
                        curl_easy_setopt(curl_handler, CURLOPT_SSL_VERIFYHOST, 1);
                        curl_easy_setopt(curl_handler, CURLOPT_VERBOSE, CURL_VERBOSE);

                        /* write back function*/
                        curl_easy_setopt(curl_handler, CURLOPT_WRITEFUNCTION, WriteBackData);
                }  

                curl_easy_perform(curl_handler);
                curl_easy_cleanup(curl_handler);

        }
#endif


#if LAPTOP
	/* read the temp*/
	int ReadTemp(void) {
		FILE *t_file;
		int ret = 0;


		if (( t_file = fopen(TEMP_FILE, "rt")) == NULL) {
			fprintf(stderr, "Failed to open: %s\n", TEMP_FILE);
			exit(1);
		}

		fscanf(t_file, "%d", &ret);

		return ret / 1000;
	}



	int ReadBatteryCap(void) {
		int capacity = 0;
		FILE *fp;
	
		if (( fp = fopen(CAPACITY_FILE, "r")) == NULL ){
			fprintf(stderr, "Failed to open: %s\n", CAPACITY_FILE);
			exit(EXIT_FAILURE);
		}

		fscanf(fp, "%d", &capacity);
		fclose(fp);

		return capacity;
	}


	char * ReadBatteryStat(void) {
		FILE *status_file;
		char *line = NULL;
		size_t len = 0;
		ssize_t read;

	    if (( status_file = fopen(BATTERY_STATUS_FILE, "rt")) == NULL ) {
			fprintf(stderr, "Failed to open: %s\n", BATTERY_STATUS_FILE);
			exit(EXIT_FAILURE);
		}

		while (( read = getline(&line, &len, status_file)) != -1 ) {
			;
		}

		strncpy(status_linecp, line, strlen(line));
	
		strtok(status_linecp, "\n");
		free(line);

		return status_linecp;
	}

#endif
