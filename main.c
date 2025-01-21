#include "common.h"
#include "chunk.h"
#include "debug.h"
//#include "vm.h"



int main(int argc, const char* argv[]) {
    Chunk chunk;
    //VirtualMachine::virtualmachine vm;
    //vm.initVM();
    initChunk(&chunk);
    int constant = addConstant(&chunk, 1.2);
    writeChunk(&chunk, OP_CONSTANT, 123);
    writeChunk(&chunk, constant, 123);
    writeChunk(&chunk, OP_RETURN, 123);
    disassembleChunk(&chunk, "test chunk");
    //vm.interpret(&chunk);
    //vm.freeVM();
    freeChunk(&chunk);
    return 0;
}