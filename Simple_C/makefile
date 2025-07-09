CC = gcc

CFLAGS = -Wall

SRC = memcpy_memset.c
OUT = program.exe

all: $(OUT)
	@echo "=== uruchamianie ==="
	./$(OUT)
	

$(OUT): $(SRC)"
	$(CC) $(CFLAGS) $(SRC) -o $(OUT)

clean:
	del /Q $(OUT) 2>null || true 