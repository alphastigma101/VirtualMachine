#ifndef _VM_H_
#define _VM_H_
#include <declarations.h>
typedef enum {
    INTERPRET_OK,
    INTERPRET_COMPILE_ERROR,
    INTERPRET_RUNTIME_ERROR
} InterpretResult;

typedef struct {
  Chunk* chunk;
  uint8_t* ip;
} VM;

static void initVM();
static void freeVM();
static InterpretResult interpret(Chunk* chunk);
static InterpretResult run();
#endif