CC = gcc

TARGET = interpret
SRC = main.c check.c wwv.c wwdq.c runcorbuf.c wwkw.c cycle.c wwc.c wwa.c

$(TARGET): $(SRC)
	$(CC) $(SRC) -o $(TARGET)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: run clean
