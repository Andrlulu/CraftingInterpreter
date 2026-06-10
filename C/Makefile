CC = gcc
CFLAGS = -Wall -Wextra -g

TARGETS = bin/linked_list bin/test
SOURCES = dlinked_list.c

all: $(TARGETS)

bin/linked_list: main.c $(SOURCES)
	mkdir -p bin
	$(CC) $(CFLAGS) -o $@ main.c $(SOURCES)

bin/test: test.c $(SOURCES)
	mkdir -p bin
	$(CC) $(CFLAGS) -o $@ test.c $(SOURCES)

clean:
	rm -f $(TARGETS)

.PHONY: all clean