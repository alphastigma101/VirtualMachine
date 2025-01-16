#include <mem.h>

void *Mem::mem::reallocate(void *pointer, size_t oldSize, size_t newSize) {
    if (newSize == 0) {
        auto code = reinterpret_cast<Unique<uint8_t[]>*>(pointer);
        code->get_deleter();
        return nullptr;
    }
    void* result = realloc(pointer, newSize);
    if (result == nullptr) exit(1);
    return result;
}