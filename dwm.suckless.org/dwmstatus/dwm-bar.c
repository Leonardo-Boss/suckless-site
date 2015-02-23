/*
   dwm-bar.c - The `xsetroot' alternative in C to 
       set following information to the root window:
   RAM 10%, SSD 10%, Linux release, Volume 10%, Time 10:00 PM 

   Compile with: 
       gcc -Wall -Wextra -std=c99 -O2 dwm-bar.c -o $HOME/.cache/dwm-bar -lasound -lX11
 
   Copyright 02/22/2015 Aaron Caffrey https://github.com/wifiextender
 
   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.
 
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
 
   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
   MA 02110-1301, USA.
*/

#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

#include <sys/statvfs.h>
#include <sys/sysinfo.h>
#include <sys/utsname.h>

#include <X11/Xlib.h>
#include <alsa/asoundlib.h>

#define MB 1048576
#define GB 1073741824
#define VLA 100
#define COMMA ','

static void get_ram(char *);
static void get_ssd(char *);
static void get_kernel(char *);
static void get_time(char *);
static void get_volume(char *);
static void set_status(const char *);


int main(void)
{
    char ram[VLA], ssd[VLA], kern[VLA];
    char volume[VLA], Time[VLA], combine[VLA*5];

    get_ram(ram);
    get_ssd(ssd);
    get_kernel(kern);
    get_volume(volume);
    get_time(Time);

    sprintf(combine,
        "%s %s%%%c %s %s%%%c %s%c %s %s%%%c %s %s", 
        "RAM", ram, COMMA,
        "SSD", ssd, COMMA,
        kern, COMMA,
        "Volume", volume, COMMA,
        "Time", Time);

    set_status(combine);

    return EXIT_SUCCESS;
}


static void get_ram(char *str1)
{
    uintmax_t used = 0, total = 0, percent = 0;

    struct sysinfo mem;
    sysinfo(&mem);

    total   = (uintmax_t) mem.totalram / MB;
    used    = (uintmax_t) (mem.totalram - mem.freeram -
                     mem.bufferram - mem.sharedram) / MB;
    percent = (used * 100) / total;

    sprintf(str1, "%"PRIuMAX, percent);
}


static void get_ssd(char *str1)
{
    uintmax_t percent = 0;

    struct statvfs ssd;
    statvfs(getenv("HOME"), &ssd);

    percent = ((ssd.f_blocks - ssd.f_bfree) * ssd.f_bsize) / GB;

    sprintf(str1, "%"PRIuMAX, percent);
}


static void get_kernel(char *str1)
{
    struct utsname KerneL;
    uname(&KerneL);

    sprintf(str1, "%s %s", KerneL.sysname, KerneL.release);
}


static void get_time(char *str1)
{
    char time_str[VLA];

    time_t t = time(NULL);

    strftime(time_str, VLA, "%I:%M %p", localtime(&t));

    sprintf(str1, "%s", time_str);
}


static void get_volume(char *str1)
{
    snd_mixer_t *handle;
    snd_mixer_elem_t *elem;
    snd_mixer_selem_id_t *s_elem;

    snd_mixer_open(&handle, 0);
    snd_mixer_attach(handle, "default");
    snd_mixer_selem_register(handle, NULL, NULL);
    snd_mixer_load(handle);
    snd_mixer_selem_id_malloc(&s_elem);
    snd_mixer_selem_id_set_name(s_elem, "Master");

    elem = snd_mixer_find_selem(handle, s_elem);

    if (elem == NULL)
    {
        snd_mixer_selem_id_free(s_elem);
        snd_mixer_close(handle);

        exit(EXIT_FAILURE);
    }

    long int vol, max, min, percent;

    snd_mixer_handle_events(handle);
    snd_mixer_selem_get_playback_volume_range(elem, &min, &max);
    snd_mixer_selem_get_playback_volume(elem, 0, &vol);

    percent = (vol * 100) / max;

    snd_mixer_selem_id_free(s_elem);
    snd_mixer_close(handle);

    sprintf(str1, "%ld", percent);
}


static void set_status(const char *str1)
{
    Display *display = XOpenDisplay(NULL);

    if (display)
    {
        XStoreName(display, DefaultRootWindow(display), str1);
        XSync(display, 0);

        XCloseDisplay(display);
    }

    else
      exit(EXIT_FAILURE);
}