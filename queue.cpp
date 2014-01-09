#include "stdafx.h"

Queue::Queue() {
    front = back = NULL;
}

void Queue::put(int n) {
    Node *cur;
    cur = new Node;
    cur->next = NULL;

    if (front == NULL) {
        front = back = cur;
    }

    back->next = cur;
    back = cur;
}

int* Queue::get() {
    Node *cur = front;

    if(cur == NULL) {
        return NULL;
    }

    int *n = cur->data;

    front = cur->next;
    delete front;
    return n;
}
