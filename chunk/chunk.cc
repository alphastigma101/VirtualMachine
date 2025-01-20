#include <chunk.h>
// initialize count and capacity for the dynamic array
void Chunk::chunk::initChunk(Chunk::chunk* chunk) {
    chunk->code = nullptr;
    chunk->lines = nullptr;
    initValueArray(&chunk->constants);
    chunk->count = 0;
    chunk->capacity = 0;
}

void Chunk::chunk::freeChunk(Chunk::chunk* chunk) {
    FREE_ARRAY(uint8_t, chunk->code, chunk->capacity);
    FREE_ARRAY(int, chunk->lines, chunk->capacity);
    freeValueArray(&chunk->constants);
    initChunk(std::move(chunk));
}
// Write cpu instructions to the chunks of memory that has been created 
void Chunk::chunk::writeChunk(Chunk::chunk* chunk, uint8_t byte, int line) {
    if (chunk->capacity < chunk->count + 1) {
        int oldCapacity = chunk->capacity;
        chunk->capacity = GROW_CAPACITY(oldCapacity);
        chunk->code = GROW_ARRAY(uint8_t, chunk->code,
            oldCapacity, chunk->capacity);
        chunk->lines = GROW_ARRAY(int, chunk->lines,
        oldCapacity, chunk->capacity);
    }
    chunk->code[chunk->count] = byte;
    chunk->lines[chunk->count] = line;
    chunk->count++;
}
// Add constant numeric values in their own pool because 
// if something is too big, then it needs to be placed somewhere else.
int Chunk::chunk::addConstant(Chunk::chunk *chunk, Value value) {
    writeValueArray(&chunk->constants, value);
    return chunk->constants.count - 1;
}
