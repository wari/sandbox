#include "stdafx.h"

using namespace std;

Stack::Stack(int v) {
    top = NULL;
    push(v);
}

int Stack::peek() {
    if (top != NULL) {
        return (*top->data);
    }
    return NULL;
}

int Stack::pop() {
    int *ret, *v;
    node *prev;
    node *cur;
    if (top == NULL) {
        return NULL;
    } else {
        v = top->data;
        ret = v;
        prev = top->prev;
        cur = top;
        top = prev;

        delete cur;
        delete v;
        return *ret;
    }
}

void Stack::push(int v) {
    node *s = new node;
    s->prev = top;
    s->data = new int(v);
    top = s;
    cout << s << endl;
}