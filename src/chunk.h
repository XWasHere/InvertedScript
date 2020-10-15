#ifndef is_chunk_h
#define is_chunk_h

#include "common.h"

typedef enum {
OP_RETURN //return from current function
} OpCode; 

typedef struct {
int count; //number of array elements in use
int capacity; //number of array elements allocated for use.
uint8_t* code; //gotta keep it somwhere
} Chunk;

void initChunk(Chunk* chunk);
void freeChunk(Chunk* chunk);
void writeChunk(Chunk* chunk, uint8_t byte);

#endif