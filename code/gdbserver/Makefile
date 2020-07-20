CC = g++
CFLAGS  = -g
TARGET = main

all: $(TARGET)

.PHONY: clean run debug

$(TARGET): $(TARGET).cpp
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).cpp

clean:
	@rm -rf $(TARGET)

run:
	@./$(TARGET)

debug:
	@gdbserver localhost:2000 ./$(TARGET)