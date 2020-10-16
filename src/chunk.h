#ifndef is_chunk_h
#define is_chunk_h

#include "common.h"
#include "value.h"

typedef enum {
OP_CONSTANT,
  OP_ADD,
  OP_SUBTRACT,
  OP_MULTIPLY,
  OP_DIVIDE,
OP_NEGATE,
OP_RETURN //return from current function
} OpCode; 

typedef struct {
int count; //number of array elements in use
int capacity; //number of array elements allocated for use.
uint8_t* code; //gotta keep it somwhere
int* lines;
ValueArray constants;
} Chunk;

void initChunk(Chunk* chunk);
void freeChunk(Chunk* chunk);
void writeChunk(Chunk* chunk, uint8_t byte, int line);
int addConstant(Chunk* chunk, Value value);

#endif