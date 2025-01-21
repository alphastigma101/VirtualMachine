#include "vm.h"
#include "chunk.h"

void initVM() {

}

void freeVM() {
}

InterpretResult interpret(Chunk::chunk *chunk) {
    vm->chunk = chunk;
    vm->ip = vm->chunk->code;
    return run();
}

InterpretResult run() {
    #define READ_BYTE() (*vm.ip++)
    #define READ_CONSTANT() (vm->chunk->constants.values[READ_BYTE()])
    for (;;) {
        uint8_t instruction;
        switch (instruction = READ_BYTE()) {
            case OP_CONSTANT: {
                Value constant = READ_CONSTANT();
                printValue(constant);
                printf("\n");
                break;
            }
            case OP_RETURN: {
                return INTERPRET_OK;
            }
        }
    }
    #undef READ_BYTE
    #undef READ_CONSTANT
}
