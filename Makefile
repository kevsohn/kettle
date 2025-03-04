CC = gcc

SRC = $(wildcard src/*.c)
OBJ = $(SRC:src/%.c=obj/%.o)
TARGET = bin/KVM

all: clean $(TARGET)

clean:
	rm -f obj/*.o
	rm -f bin/*

$(TARGET): $(OBJ)
	$(CC) $^ -o $@

obj/%.o: src/%.c
	$(CC) -c $< -o $@ -Iinclude
