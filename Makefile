CFLAGS = -Wall -Wextra -std=c99 -pedantic
LDFLAGS = -static -s

all: build-page
	find * -type d -exec sh -ec './build-page "$$0" >$$0/index.html' {} \;

build-page: build-page.c
	$(CC) $(CFLAGFS) $(LDFLAGS) -o $@ build-page.c
