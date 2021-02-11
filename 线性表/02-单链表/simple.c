#include "simple.h"


_Bool init(Node *node) {
    node = (Node*) malloc(sizeof(Node));
    if (node == NULL) {
        return 0;
    }
    node->next = NULL;
    return 1;
}

_Bool insert(Node *node, uint8_t index, int8_t value) {
    Node *n = node;
    for (int i = 0; i < index-1; i++){
        n = node->next;
        if (n == NULL) return 0;
    }
    Node *t = (Node*) malloc(sizeof(Node));
    t->next = n->next;
    t->data = value;
    n->next = t;
    return 1;
}

_Bool delete(Node *node, uint8_t index, int8_t *value) {
    Node *n = node;
    for (int i = 0; i < index-1; i++){
        n = node->next;
        if (n == NULL) return 0;
    }
    Node *t = n->next;
    value = t->data;
    n->next = t->next;
    return 1;
}
