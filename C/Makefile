CC := gcc
CFLAGS := -Wall -Wextra -std=c11
TARGET := hello
SRC := main.c

all: $(TARGET)

$(TARGET): $(SRC)
	mkdir -p bin
	$(CC) $(CFLAGS) -o bin/$(TARGET) $(SRC)

run: all
	./bin/$(TARGET)

clean:
	rm -rf bin