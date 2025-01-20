#include <value.h>
#include <mem.h>

void ValueArray::valueArray::initValueArray(ValueArray::valueArray *array) {
    array->values = nullptr;
    array->capacity = 0;
    array->count = 0;
}

void ValueArray::valueArray::writeValueArray(ValueArray::valueArray *array, Value value) {
    if (array->capacity < array->count + 1) {
        int oldCapacity = array->capacity;
        array->capacity = GROW_CAPACITY(oldCapacity);
        array->values = GROW_ARRAY(Value, array->values,
                               oldCapacity, array->capacity);
    }
    array->values[array->count] = value;
    array->count++;
}

void ValueArray::valueArray::freeValueArray(ValueArray::valueArray *array) {
    FREE_ARRAY(Value, array->values, array->capacity);
    initValueArray(array);
}

void ValueArray::valueArray::printValue(Value value) {
    printf("%g", value);
}
