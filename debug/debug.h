#ifndef _DEBUG_H_
#define _DEBUG_H_
#include <chunk.h>
namespace Debug {
    class debug: public Chunk::chunk {
        public:
            explicit debug() noexcept = default;
            ~debug() = default;
            static void disassembleChunk(Chunk::chunk* chunk, const char* name);
            static int disassembleInstruction(Chunk::chunk* chunk, int offset);
            static int simpleInstruction(const char* name, int offset);
            static int constantInstruction(const char* name, Chunk::chunk* chunk, int offset);
    };
};

#endif