CFLAGS = -Wall -Wextra -std=c99 -pedantic
LDFLAGS = -static -s

all: build-page
	find * -type d -exec sh -ec './build-page "$$0" >$$0/index.html' {} \;

build-page: build-page.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ build-page.c

check: md-printlinks
	sh checklinks.sh

fix: md-printlinks
	find . -name '*.md' -exec sh fixlinks.sh {} +
	sh checklinks.sh

clean:
	rm -f build-page md-printlinks
