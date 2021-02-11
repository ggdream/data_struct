#include <stdint.h>

#define MaxSize 10


typedef struct {
    int8_t   data[MaxSize];
    uint8_t  length;
} SequenceList;

void init(SequenceList *list);
