#include <mem.h>
/** ---------------------------------------------------
 * @brief ...
 * @param pointer A raw pointer type void points to a raw pointer unint8[].
 * @param oldSize The old size of the dynamic allocated array
 * @param newSize The size to make the array grow to
 * @return Return the new allocated array
 * 
 * ----------------------------------------------------  
*/
void* Mem::mem::reallocate(void *pointer, size_t oldSize, size_t newSize) {
    if (newSize == 0) {
        free(pointer);
        return nullptr;
    }
    void* result = realloc(pointer, newSize); 
    if (result == nullptr) exit(1);
    return result;
}