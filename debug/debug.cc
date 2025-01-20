#include <debug.h>
#include <value.h>
/** ---------------------------------------------------
 * @brief ...
 * @param chunk A raw pointer that is should be managed by a unique pointer
 * @param name
 * 
 * ----------------------------------------------------  
*/
void Debug::debug::disassembleChunk(Chunk::chunk *chunk, const char *name) {
    printf("== %s ==\n", name);
    for (int offset = 0; offset < chunk->count;) {
        offset = disassembleInstruction(chunk, offset);
    }

}
/** ---------------------------------------------------
 * @brief dissassemble's the targted instructions based on the offset
 * @param chunk A raw pointer of the class chunk
 * @param offset The location of a specific set of instructions
 * 
 * ----------------------------------------------------  
*/
int Debug::debug::disassembleInstruction(Chunk::chunk *chunk, int offset) {
    printf("%04d ", offset);
    if (offset > 0 && chunk->lines[offset] == chunk->lines[offset - 1]) printf("   | ");
    else printf("%4d ", chunk->lines[offset]);
    uint8_t instruction = chunk->code[offset];
    switch (instruction) {
        case OP_CONSTANT:
            return constantInstruction("OP_CONSTANT", chunk, offset);
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

int Debug::debug::constantInstruction(const char *name, Chunk::chunk *chunk, int offset) {
    uint8_t constant = chunk->code[offset + 1];
    printf("%-16s %4d '", name, constant);
    printValue(chunk->constants.values[constant]);
    printf("'\n");
    return offset + 2;
}