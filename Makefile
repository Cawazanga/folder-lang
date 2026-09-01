CC = gcc

TARGET = interpret
SRC = main.c check.c wwv.c wwdq.c runoldbuf.c wwkw.c

$(TARGET): $(SRC)
	$(CC) $(SRC) -o $(TARGET)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: run clean
