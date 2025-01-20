#ifndef _VALUE_H_
#define _VALUE_H_
#include <declarations.h>
namespace ValueArray {
    class valueArray {
        public:
            friend class ::Debug::debug;
            friend class ::Chunk::chunk;
            explicit valueArray() noexcept {
                this->values = nullptr;
                this->capacity = 0;
                this->count = 0;
            };
            ~valueArray() {
                delete values;
            };
            static void writeValueArray(ValueArray::valueArray* array, Value value);
            static void freeValueArray(ValueArray::valueArray* array);
            static void printValue(Value value);
        protected:
            static void initValueArray(ValueArray::valueArray* array);
        private:
            int capacity;
            int count;
            Value* values;
    };
};

#endif