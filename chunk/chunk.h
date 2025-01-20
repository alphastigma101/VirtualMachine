#ifndef _CHUNK_H_
#define _CHUNK_H_
#include <mem.h>
#include <value.h>
// Controls what kind of instruction we’re dealing with—add, subtract, look up variable, etc.
typedef enum {
    OP_CONSTANT,
    OP_RETURN,
} OpCode;

namespace Chunk {
    class chunk: protected ValueArray::valueArray {
        public:
            friend class ::Debug::debug;
            explicit chunk() noexcept {
                this->code = nullptr;
                this->lines = nullptr;
                this->count = 0;
                this->capacity = 0;
            };
            ~chunk() noexcept {
                delete code;
            };
            static void freeChunk(Chunk::chunk* chunk);
            static void writeChunk(Chunk::chunk* chunk, uint8_t byte, int line);
            static int addConstant(Chunk::chunk* chunk, Value value);
        protected:
            static void initChunk(Chunk::chunk* chunk);
        private:
            int count;
            int capacity;
            int* lines;
            ValueArray::valueArray constants;
            uint8_t* code;
    };
};
#endif