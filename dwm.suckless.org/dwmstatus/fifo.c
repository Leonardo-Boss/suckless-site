/* 
 * send anything in dwm status bar with fifo
 * example : echo "hello" >> /tmp/dwm.fifo
 * Author:  Xavier Cartron (XC), thuban@yeuxdelibad.net
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>

#define FIFO "/tmp/dwm.fifo"

char *
snotif()
{
    char buf[BUFSIZ];
    buf[0] = '\0';

    int f = open(FIFO, O_RDONLY | O_NONBLOCK);
    if (f == -1){
        perror("fifo opening");
        return smprintf("%s","");
    }

    if (read(f, buf, sizeof(buf) ) == -1){
        perror("fifo read");
        return smprintf("%s","");
    }
    close(f);

    buf[strlen(buf)-1] = '\0';

    return smprintf("%s",buf);
}



