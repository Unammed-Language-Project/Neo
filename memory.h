#ifndef NEO_MEMORY_H
#define NEO_MEMORY_H

#include "commons.h"

/* This macro calculates a new capacity for the dynamic array based on the current capacity. In case the current capacity is 0, jump to eight elements instead of 1. */
#define GROW_CAPACITY(capacity)  (capacity) < 8 ? 8 : (capacity) * 2
/* This macro is used to create/grow the array to a desired capacity. */
#define GROW_ARRAY(type, ptr, oldCount, newCount)  (type*)reallocate(ptr, sizeof(type) * (oldCount), sizeof(type) * (newCount))
/* This macro is used to free the memory of the array. */
#define FREE_ARRAY(type, pointer, oldCount) reallocate(pointer, sizeof(type) * (oldCount), 0)

/* This function handles allocating and freeing memory, as well as changing the size of a existing allocation of memory.
 *
 * The size arguments control which operation to perform.
 *
 * oldSize | newSize | Operation
   0 | Non zero	| Allocate new block.
   Non zero	| 0	 | Free allocation.
   Non zero	| Smaller than oldSize	| Shrink existing allocation.
   Non zero	| Larger than oldSize | Grow existing allocation.
 * */
void* reallocate(void* ptr, size_t oldSize, size_t newSize);


#endif
