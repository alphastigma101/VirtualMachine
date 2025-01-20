#include <chunk.h>
#include <debug.h>

int main(int argc, const char* argv[]) {
    Chunk::chunk chunk;
    Debug::debug debug;
    int constant = chunk.addConstant(&chunk, 1.2);
    chunk.writeChunk(&chunk, OP_CONSTANT, 123);
    chunk.writeChunk(&chunk, constant, 123);
    chunk.writeChunk(&chunk, OP_RETURN, 123);
    debug.disassembleChunk(&chunk, "test chunk");
    chunk.freeChunk(&chunk);
    return 0;
}