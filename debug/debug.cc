#include <debug.h>

void Debug::debug::disassembleChunk(Chunk::chunk *chunk, const char *name) {
    std::cout << "== " << name << " ==" << std::endl;
    for (int offset = 0; offset < chunk->count;) {
        offset = disassembleInstruction(chunk, offset);
    }

}

int Debug::debug::disassembleInstruction(Chunk::chunk *chunk, int offset) {
    printf("%04d ", offset);
    uint8_t instruction = chunk->code[offset];
    switch (instruction) {
        case OP_RETURN:
            return simpleInstruction("OP_RETURN", offset);
        default:
            printf("Unknown opcode %d\n", instruction);
            return offset + 1;
    }
}

int Debug::debug::simpleInstruction(const char *name, int offset) {
    printf("%s\n", name);
    return offset + 1;
}
