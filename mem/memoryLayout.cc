#include <memoryLayout.h>

void *MemoryLayout::memoryLayout::reallocate(void *pointer, size_t oldSize, size_t newSize) {
    if (newSize == 0) {
        //free(pointer);
        return nullptr;
    }
    //void* result = realloc(pointer, newSize);
    //if (result == NULL) exit(1);
    //return result;
    return;
}
