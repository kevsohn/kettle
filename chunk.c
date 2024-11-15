include "chunk.h"

void initChunk(Chunk* chunk) {
	chunk->count = 0;
	chunk->size = 0;
	chunk->code = NULL;
}

void writeChunk(Chunk* chunk, uint8_t byte) {
	if (chunk->count >= chunk->size) {
		chunk->size = GROW_CAPACITY();
	}
}
