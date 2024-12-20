CC = gcc
CFLAGS = -Wall -Wextra
TARGET = pos
SRCS = main.c
OBJS = $(SRCS:.c=.o)

all: $(TARGET) run

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

run:
	./$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: clean run all
