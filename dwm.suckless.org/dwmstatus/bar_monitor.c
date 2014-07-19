/*
 * bar_monitor.c - another version of dwmstatus. 
 *
 * Written by: levi0x0 (levi0x0x[AT]gmail[DOT]com) for dwm.
 * Date: 19/07/2014, 02/07/2014
 * Version: 0.5
 * License: GPL 3
 *
 * What it's Displays::
 * 	1. time/date
 * 	2. temerature
 * 	3. wireless Status.
 * 	4. battery status.
 * 	5. Uptime (Optional)
 *
 * if you are not using laptop, please define: LAPTOP 0 
 * 
 * ** Using with .xinitrc **:
 *
 * 	while [ true ];do
 * 		bar=`bar_monitor`
 * 		xsetroot -name "$bar"
 * 	done &
 *
 * bar_monitor contain sleep(1) function.
 * if you want to add more functions to bar_monitor,
 * please let me know.
 *
 * gcc bar_monitor.c -o bar_monitor
 * 
 * mv bar_monitor /usr/local/bin/bar_monitor
 *
 */


#include <stdio.h>
#include <sys/sysinfo.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//BAT1 change if needed
#define STATUS_FILE	"/sys/class/power_supply/BAT1/status"
#define CAPACITY_FILE	"/sys/class/power_supply/BAT1/capacity"
#define net_file	"/proc/net/wireless"
#define temp_file	"/sys/class/hwmon/hwmon0/temp1_input"
#define STR_SIZE 30
#define TIME_FORMAT	"%H:%M %d-%m-%y"
#define date	read_date()
#define status	open_status()
#define pcapacity	open_capacity()
#define temp	read_temp()
#define nett	net()

/*
1 - True
0 - False
*/
#define LAPTOP	1
#define DISPLAY_UPTIME	0

static char status_linecp[STR_SIZE];
static char time_buffer[STR_SIZE];
static char net_buffer[STR_SIZE];
static char uptime[STR_SIZE];
int capacity;

/*prototypes*/
char * read_date(void);
char * open_status(void);
char * net(void);
int open_capacity(void);
int read_temp(void);

int main(int argc, char **argv) {
	if (!strcmp(status, "Discharging")) {
		//printf("[%d%], Discharging\n", pcapacity);	
		if ( pcapacity < 10 ) {	
			printf("%d%% **Low Battery**", pcapacity);
		}
		else {
			printf("%d%%", pcapacity);
		}
	}

	else if (!strcmp(status, "Charging")) {
		//printf("[%d%], Charging\n", pcapacity);	
		printf("%d%%", pcapacity);
	}
	else if (!strcmp(status, "Full")) {
		printf("[Full]");

	}
	else {
		//What?! the program can't read the battery status
		printf("w00t?\n");

	}
	
	#if DISPLAY_UPTIME
		struct sysinfo sys;
		int h = 0;
		int m = 0;

		sysinfo(&sys);

		h = sys.uptime / 3600;
		m = ( sys.uptime - h * 3600) / 60;
		printf(" (%dh, %dm)", h, m);
	#endif 

	#if LAPTOP
		printf(" %s %dC %s", nett,temp, date); 
	#else
		printf(" %dC %s", temp, date);
	#endif

	sleep(1);

	return 0;
}


char * read_date(void) {
	time_t now = time(0);

	strftime(time_buffer, STR_SIZE, TIME_FORMAT, localtime(&now));

	return time_buffer;

}

int open_capacity(void) {
	FILE *capacity_file;
	
	capacity_file = fopen(CAPACITY_FILE, "r");

	if ( capacity_file == NULL ) {
		fprintf(stderr, "Failed to open: %s\n", CAPACITY_FILE);
		exit(EXIT_FAILURE);
	}

	fscanf(capacity_file, "%d", &capacity);
	fclose(capacity_file);

	return capacity;
}

char * open_status(void) {
	FILE *status_file;
	char *line = NULL;
	size_t len = 0;
	ssize_t read;

	status_file = fopen(STATUS_FILE, "rt");
       
	if ( status_file == NULL ) {
		fprintf(stderr, "Failed to open: %s\n");
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

char * net(void) {
	FILE *fp;
	char buffer[STR_SIZE];
	char *line = NULL;
	ssize_t len = 0;
	ssize_t read;


	fp = fopen(net_file, "rt");

	while (( read = getline(&line, &len, fp)) != -1 ) {
		;
	}

	sscanf(line,"%s\n", &buffer);

	free(line);

	//if( strstr(buffer, "wlan") != NULL) {
	if( strstr(buffer, "wlp") != NULL) {
		return "(ON)";
	}
	else {	
		return "(OFF)";
	}

}

/*
* This fucntion read the temperature form temp_file
*/
int read_temp(void) {
	FILE *t_file;
	int ret = 0;


	t_file = fopen(temp_file, "rt");


	if ( t_file == NULL ) {
		fprintf(stderr, "Failed to open: %s\n", temp_file);
		exit(1);
	}

	fscanf(t_file, "%d", &ret);

	return ret / 1000;
}
