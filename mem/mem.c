#include <stdlib.h>
#include "mem.h"
#include "vm.h"
/** ---------------------------------------------------
 * @brief ...
 * @param pointer A raw pointer type void points to a raw pointer unint8[].
 * @param oldSize The old size of the dynamic allocated array
 * @param newSize The size to make the array grow to
 * @return Return the new allocated array
 * 
 * ----------------------------------------------------  
*/
void* reallocate(void *pointer, size_t oldSize, size_t newSize) {
    if (newSize == 0) {
      free(pointer);
      return NULL;
    }
    void* result = realloc(pointer, newSize); 
    if (result == NULL) exit(1);
    return result;
}
static void freeObject(Obj* object) {
  switch (object->type) {
    case OBJ_STRING: {
      ObjString* string = (ObjString*)object;
      FREE_ARRAY(char, string->chars, string->length + 1);
      FREE(ObjString, object);
      break;
    }
  }
}
void freeObjects() {
  Obj* object = vm.objects;
  while (object != NULL) {
    Obj* next = object->next;
    freeObject(object);
    object = next;
  }
}