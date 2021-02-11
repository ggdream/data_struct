#include <stdint.h>
#include <stdlib.h>

typedef struct LNode {
    int8_t data;
    struct LNode *next;
} Node;

void init(Node *node);
