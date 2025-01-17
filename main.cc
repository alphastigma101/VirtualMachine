#include <chunk.h>
#include <debug.h>

int main(int argc, const char* argv[]) {
    Unique<Chunk::chunk> chunk(new Chunk::chunk());
    Unique<Debug::debug> debug(new Debug::debug());
    chunk->initChunk(chunk.get());
    chunk->writeChunk(chunk.get(), OP_RETURN);
    debug->disassembleChunk(chunk.get(), "test chunk");
    chunk->freeChunk(chunk.get());
    return 0;
}