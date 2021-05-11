#include <stdlib.h>
#include "memory.h"

void* reallocate(void* ptr, size_t oldSize, size_t newSize) {
    if (newSize == 0) {
        free(ptr); // Deallocate the ptr
        return NULL;
    }

    void* result = realloc(ptr, newSize); // Resize the previously allocated block
    if(result == NULL) exit(1);
    return result;
}

