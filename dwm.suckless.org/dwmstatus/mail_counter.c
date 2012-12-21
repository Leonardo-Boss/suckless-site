//  Fichier: dwmstatus.c                   
//  Crée le 10 déc. 2012 22:28:11
//  Dernière modification: 21 déc. 2012 16:25:16

#define _BSD_SOURCE
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <strings.h>
#include <sys/time.h>
#include <time.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <dirent.h>

#include <X11/Xlib.h>

static Display *dpy;

char *
smprintf(char *fmt, ...)
{
	va_list fmtargs;
	char *ret;
	int len;

	va_start(fmtargs, fmt);
	len = vsnprintf(NULL, 0, fmt, fmtargs);
	va_end(fmtargs);

	ret = malloc(++len);
	if (ret == NULL) {
		perror("malloc");
		exit(1);
	}

	va_start(fmtargs, fmt);
	vsnprintf(ret, len, fmt, fmtargs);
	va_end(fmtargs);

	return ret;
}
void
setstatus(char *str)
{
	XStoreName(dpy, DefaultRootWindow(dpy), str);
	XSync(dpy, False);
}

char *get_nmail(char *directory, char *label)
{
    /* directory can be a Maildir as example */
    /* label is whet will be shown as title*/

    int n = 0;
    DIR* dir = NULL;
    struct dirent* rf = NULL;

    dir = opendir(directory); /* try to open directory */
    if (dir == NULL)
        perror("");

    while ((rf = readdir(dir)) != NULL) /*count number of file*/
    {
        if (strcmp(rf->d_name, ".") != 0 &&
            strcmp(rf->d_name, "..") != 0)
            n++;
    }
    closedir(dir);

    if (n == 0) 
       return smprintf("");
    else 
       return smprintf("%s%d",label, n);

}

int
main(void)
{
	char *status;
    char *mail_laposte;
    
	if (!(dpy = XOpenDisplay(NULL))) {
		fprintf(stderr, "dwmstatus: cannot open display.\n");
		return 1;
	}

	for (;;sleep(60)) {
        mail_laposte = get_nmail("/home/xavier/Maildir/laposte/new", "Laposte:");


		status = smprintf("%s",mail_laposte);
		setstatus(status);
		free(mail_laposte);
		free(status);
	}

	XCloseDisplay(dpy);

	return 0;
}

