#ifndef NEO_CHUNK_H
#define NEO_CHUNK_H

#include "commons.h"

/* Operation Codes, or opcodes are numbers or instructions which are used in our bytecode representation to control which operation were dealing with; i.e addition, subtraction, etc.
 * We define our opcodes in this enum. */
typedef enum {
    OP_RETURN,
} OpCode;

/* Bytecode is a series of instructions. This struct will hold the instructions, and other data we might need to keep track of. */
typedef struct Chunk {
    int count;
    int capacity;
    uint8_t* code;
} Chunk;

/* Function to initialize a new chunk because C doesnt have constructors. */
void initChunk(Chunk* chunk);
/* Function to free all the memory and free the chunk. */
void freeChunk(Chunk* chunk);
/* Function to append a byte to the end of the chunk. */
void writeChunk(Chunk* chunk, uint8_t byte);

#endif
