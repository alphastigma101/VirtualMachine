#include <chunk.h>

int main(int argc, const char* argv[]) {
    Unique<Chunk::chunk> chunk;
    chunk->initChunk(chunk.get());
    chunk->writeChunk(chunk.get(), OP_RETURN);
    chunk->freeChunk(chunk.get());
    return 0;
}