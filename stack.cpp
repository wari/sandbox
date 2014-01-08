#include "stdafx.h"

using namespace std;

Stack::Stack(int v) {
    top = NULL;
    push(v);
}

int Stack::peek() {
    if (top != NULL) {
        return top->data;
    }
    return -255;
}

bool Stack::is_empty() {
    return (top == NULL);
}

int Stack::pop() {
    int ret;
    node *prev;
    node *cur;
    if (top == NULL) {
        return -255;
    } else {
        ret = top->data;
        prev = top->prev;
        cur = top;
        top = prev;

        delete cur;
        return ret;
    }
}

void Stack::push(int v) {
    node *s = new node;
    s->prev = top;
    s->data = v;
    top = s;
}
