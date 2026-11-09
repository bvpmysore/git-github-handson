CC := gcc
CFLAGS := -Wall -Wextra -Werror -std=c11

TARGET := sensor_monitor
SOURCE := src/sensor_monitor.c

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(SOURCE)
	$(CC) $(CFLAGS) -o $(TARGET) $(SOURCE)

clean:
	rm -f $(TARGET)
