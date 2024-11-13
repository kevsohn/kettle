#ifndef chunk.h
#define chunk.h

#include "common.h"

typedef enum {
	OP_RETURN,
}OpCode;

typedef struct {
	uint8_t* code;
}Chunk;

#endif
