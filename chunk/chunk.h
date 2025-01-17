#ifndef _CHUNK_H_
#define _CHUNK_H_
#include <mem.h>
// Controls what kind of instruction we’re dealing with—add, subtract, look up variable, etc.
typedef enum {
  OP_RETURN,
} OpCode;

namespace Chunk {
    class chunk {
        public:
            friend class ::Debug::debug;
            explicit chunk() noexcept = default;
            ~chunk() noexcept {
                code.get_deleter();
            };
            static void initChunk(Chunk::chunk* chunk);
            static void freeChunk(Chunk::chunk* chunk);
            static void writeChunk(Chunk::chunk* chunk, uint8_t byte);
        private:
            int count;
            int capacity;
            Unique<uint8_t[]> code;
    };
};
#endif