#include <stdlib.h>
#include "chunk.h"
#include "memory.h"

void initChunk(Chunk *chunk) {
	chunk->count = 0;
	chunk->capacity = 0;
	chunk->code = NULL;
}

void freeChunk(Chunk *chunk) {
    FREE_ARRAY(uint8_t, chunk->code, chunk->capacity);
    initChunk(chunk);
}

void writeChunk(Chunk *chunk, uint8_t byte) {
	if (chunk->count >= chunk->capacity) {
        int oldcap = chunk->capacity;
		chunk->capacity = oldcap < 8 ? 8 : 2*oldcap;
        chunk->code = GROW_ARRAY(uint8_t, chunk->code, oldcap, chunk->capacity);
	}
    chunk->code[chunk->count] = byte;
    ++chunk->count;
}
