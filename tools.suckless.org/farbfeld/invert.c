/*
 * Copy me if you can.
 * by FRIGN
 */
#include <arpa/inet.h>

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int
main(int argc, char *argv[])
{
	uint64_t rowlen;
	uint32_t hdr[4], width, height, i, j;
	uint16_t *row, *rgba;

	if (argc > 1) {
		fprintf(stderr, "usage: %s\n", argv[0]);
		return 1;
	}

	if (fread(hdr, sizeof(uint32_t), 4, stdin) != 4) {
		fprintf(stderr, "%s: fread error\n", argv[0]);
		return 1;
	}
	if (memcmp("farbfeld", hdr, sizeof("farbfeld") - 1)) {
		fprintf(stderr, "%s: invalid magic value\n", argv[0]);
		return 1;
	}
	width = ntohl(hdr[2]);
	height = ntohl(hdr[3]);

	if (fwrite(hdr, sizeof(uint32_t), 4, stdout) != 4) {
		fprintf(stderr, "%s: fwrite error\n", argv[0]);
		return 1;
	}

	rowlen = (sizeof("RGBA") - 1) * width;
	if (!(row = malloc(rowlen * sizeof(uint16_t)))) {
		fprintf(stderr, "%s: malloc: out of memory\n", argv[0]);
		return 1;
	}
	for (i = 0; i < height; i++) {
		if (fread(row, sizeof(uint16_t), rowlen, stdin) != rowlen) {
			fprintf(stderr, "%s: fread error\n", argv[0]);
			return 1;
		}
		for (rgba = row; (rgba - row) < rowlen; rgba += 4) {
			for (j = 0; j < 4; j++) {
				rgba[j] = ntohs(rgba[j]);
			}

			/* invert colors */
			rgba[0] = 65535 - rgba[0];
			rgba[1] = 65535 - rgba[1];
			rgba[2] = 65535 - rgba[2];

			for (j = 0; j < 4; j++) {
				rgba[j] = htons(rgba[j]);
			}
		}
		if (fwrite(row, sizeof(uint16_t), rowlen, stdout) != rowlen) {
			fprintf(stderr, "%s: fwrite error\n", argv[0]);
			return 1;
		}
	}

	return 0;
}
