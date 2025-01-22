#ifndef cnuke_vm_h
#define cnuke_vm_h
#include "object.h"
#include "table.h"
#define FRAMES_MAX 64
#define STACK_MAX 256
typedef struct {
  ObjFunction* function;
  uint8_t* ip;
  Value* slots;
} CallFrame;
typedef enum {
    INTERPRET_OK,
    INTERPRET_COMPILE_ERROR,
    INTERPRET_RUNTIME_ERROR
} InterpretResult;

typedef struct {
  CallFrame frames[FRAMES_MAX];
  int frameCount;
  Value stack[STACK_MAX];
  Value* stackTop;
  Table globals;
  Table strings;
  Obj* objects;
} VM;

extern VM vm;

void initVM();
void freeVM();
InterpretResult interpret(const char* source);
static InterpretResult run();
void push(Value value);
Value pop();
#endif