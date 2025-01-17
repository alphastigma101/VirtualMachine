#ifndef _VALUE_H_
#define _VALUE_H_
#include <declarations.h>
namespace ValueArray {
    class valueArray {
        public:
            friend class ::Debug::debug;
            explicit valueArray() noexcept = default;
            ~valueArray() {
                values.get_deleter();
            };
            static void initValueArray(ValueArray::valueArray* array);
            static void writeValueArray(ValueArray::valueArray* array, Value value);
            static void freeValueArray(ValueArray::valueArray* array);
        private:
            int capacity;
            int count;
            Unique<Value[]> values;
    };
};

#endif