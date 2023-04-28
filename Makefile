CC = gcc
CFLAGS = -g -Wall -Wextra -Werror -O0

SOURCES = my_mastermind.c my_game.c
OBJECTS = $(SOURCES:.c=.O)
TARGET = my_mastermind

$(TARGET) : $(OBJECTS)
		$(CC) $(CFLAGS) -o $@ $^


.PHONY: clean

clean:
		@RM -f $(TARGET) $(OBJECTS) core