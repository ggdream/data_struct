#include <stdint.h>
#include <stdlib.h>
#define InitSize 10


typedef struct {
    int8_t      *data;
    uint8_t     MaxSize;
    uint8_t     length;
} SequenceList;

void init(SequenceList *list);
void increase_size(SequenceList *list, int length);
