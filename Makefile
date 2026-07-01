CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = guia-c
all: $(TARGET)
$(TARGET): guia-c.o
        $(CC) $(CFLAGS) $^ -o $@
guia-c.o: guia-c.c
        $(CC) $(CFLAGS) -c $< -o $@
clean:
        rm *.o $(TARGET)
.PHONY: all clean
