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
	uint32_t width, height, i, j, k;
	uint16_t rgba[4];
	uint8_t hdr[strlen("farbfeld") + 2 * sizeof(uint32_t)];

	if (argc > 1) {
		fprintf(stderr, "usage: %s\n", argv[0]);
		return 1;
	}

	if (fread(hdr, 1, sizeof(hdr), stdin) != sizeof(hdr)) {
		fprintf(stderr, "incomplete header\n");
		return 1;
	}
	if (memcmp("farbfeld", hdr, strlen("farbfeld"))) {
		fprintf(stderr, "invalid magic\n");
		return 1;
	}
	width = ntohl(*((uint32_t *)(hdr + 8)));
	height = ntohl(*((uint32_t *)(hdr + 12)));

	if (fwrite(hdr, 1, sizeof(hdr), stdout) != sizeof(hdr)) {
		fprintf(stderr, "write error\n");
		return 1;
	}

	for (i = 0; i < height; i++) {
		for (j = 0; j < width; j++) {
			if (fread(rgba, sizeof(uint16_t), 4,
			          stdin) != 4) {
				fprintf(stderr, "unexpected EOF\n");
				return 1;
			}
			for (k = 0; k < 4; k++) {
				rgba[k] = ntohs(rgba[k]);
			}

			/* invert colors */
			rgba[0] = 65535 - rgba[0];
			rgba[1] = 65535 - rgba[1];
			rgba[2] = 65535 - rgba[2];

			for (k = 0; k < 4; k++) {
				rgba[k] = htons(rgba[k]);
			}
			if (fwrite(rgba, sizeof(uint16_t), 4,
			           stdout) != 4) {
				fprintf(stderr, "write error\n");
				return 1;
			}
		}
	}

	return 0;
}
