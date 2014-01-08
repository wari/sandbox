#include "stdafx.h"

using namespace std;

Stack::Stack(int v) {
    top = NULL;
    push(v);
}

int* Stack::peek() {
    if (top != NULL) {
        return top->data;
    }
    return NULL;
}

bool Stack::is_empty() {
    return (top == NULL);
}

int* Stack::pop() {
    int *ptr;
    node *prev, *cur;
    if (top == NULL) {
        return NULL;
    } else {
        ptr = top->data;
        prev = top->prev;
        cur = top;
        top = prev;

        delete cur;
        return ptr;
    }
}

void Stack::push(int v) {
    node *s = new node;
    s->prev = top;
    s->data = new int(v);
    top = s;
}
