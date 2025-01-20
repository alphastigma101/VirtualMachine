#ifndef _MEM_H_
#define _MEM_H_
#include <declarations.h>
namespace Mem {
    class mem {
        public:
            explicit mem() noexcept = default;
            ~mem() noexcept = default;
            static void* reallocate(void* pointer, size_t oldSize, size_t newSize);
        private:
            template<typename Type, typename... Types>
            inline static Type& reinterpretation(Type& value, Types... types) {
                if (((sizeof(value) == sizeof(types)) || ...)) {
                    return value;
                }
                // TODO: Need to test out my runtimerror class and copy it over here after the test cases pass
                throw;
            };
    };
};
#define GROW_CAPACITY(capacity) \
    ((capacity) < 8 ? 8 : (capacity) * 2)

#define GROW_ARRAY(type, pointer, oldCount, newCount) \
    (type*)Mem::mem::reallocate(pointer, sizeof(type) * (oldCount), \
        sizeof(type) * (newCount))
#define FREE_ARRAY(type, pointer, oldCount) \
    Mem::mem::reallocate(pointer, sizeof(type) * (oldCount), 0)

#endif