#include "sequence_array.h"


void init(SequenceList *list) {
    for (uint8_t i = 0; i < MaxSize; i++){
        list->data[i] = 0;
    }
    list->length = 0;
}

_Bool insert(SequenceList *list, int index, int8_t value) {
    if (list->length >= MaxSize) {
        return 0;
    }

    for (int i = list->length; i >= index; i--) {
        list->data[i] = list->data[i-1];
    }
    list->data[index-1] = value;
    list->length++;
    return 1;
}
