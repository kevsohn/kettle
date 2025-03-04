#include <stdlib.h>
#include "memory.h"

void *reallocate(void *ptr, size_t oldsize, size_t newsize) {
    if (newsize == 0) {
        free(ptr);
        return NULL;
    }
    // behaves like malloc if chunk->code = NULL
    // chunk->code valid if realloc fails
    void *new_ptr = realloc(ptr, newsize);
    if (new_ptr == NULL) exit(EXIT_FAILURE);
    return new_ptr;
}
