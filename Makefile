CC = gcc

CFLAGS = -Wall -std=c99

SRC = test.c
OUT = test.exe

all: $(OUT)
	@echo "=== uruchamianie ==="
	./$(OUT)
	

$(OUT): $(SRC)"
	$(CC) $(CFLAGS) $(SRC) -o $(OUT)

clean:
	del /Q $(OUT) 2>null || true 