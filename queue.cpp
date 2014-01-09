#include "stdafx.h"

using namespace std;

Queue::Queue() {
    front = back = NULL;
}

void Queue::put(int n) {
    Node *cur = new Node;
    cur->next = NULL;
    cur->data = new int(n);

    if (front == NULL) {
        front = back = cur;
        return;
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
    delete cur;
    return n;
}
