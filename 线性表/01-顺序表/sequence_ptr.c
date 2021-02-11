#include "sequence_ptr.h"


void init(SequenceList *list) {
    list->data = (int8_t*)malloc(sizeof(int8_t) * InitSize);
    list->length = 0;
    list->MaxSize = InitSize;
}

void increase_size(SequenceList *list, int length) {
    int8_t *p = list->data;
    list->data = (int8_t*)malloc(sizeof(int8_t) * (list->MaxSize + length));
    for (int i = 0; i < list->length; i++){
        list->data[i] = p[i];
    }
    list->MaxSize = list->MaxSize + length;
    free(p);
    p = NULL;
}
