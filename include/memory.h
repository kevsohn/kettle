#ifndef MEMORY_H
#define MEMORY_H

#include "common.h"

#define GROW_ARRAY(type, ptr, old_capacity, new_capacity) \
        (type *)reallocate(ptr, old_capacity*sizeof(type), new_capacity*sizeof(type))

void *reallocate(void *ptr, size_t oldsize, size_t newsize); 

#endif
