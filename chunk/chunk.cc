#include <chunk.h>

void Chunk::chunk::initChunk(Chunk::chunk* chunk) {
    chunk->count = 0;
    chunk->capacity = 0;
    //chunk->code = NULL;
}

void Chunk::chunk::freeChunk(Chunk::chunk* chunk) {
    FREE_ARRAY(uint8_t, &chunk->code, chunk->capacity);
    initChunk(std::move(chunk));
}

void Chunk::chunk::writeChunk(Chunk::chunk* chunk, uint8_t byte) {
    if (chunk->capacity < chunk->count + 1) {
        int oldCapacity = chunk->capacity;
        chunk->capacity = GROW_CAPACITY(oldCapacity);
        auto code = chunk->code.get(); // get the raw pointer
        size_t size = sizeof(GROW_ARRAY(uint8_t, std::move(code),
            oldCapacity, chunk->capacity));
        chunk->code = std::make_unique<uint8_t[]>(size); // update the managed pointer
    }

    chunk->code[chunk->count] = byte;
    chunk->count++;
}
