// stacks.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

int main(int argc, char *argv[])
{
    Stack s(5);
    int *result;

    for (int i=0; i<3; i++) {
        s.push(i);
    }

    while (s.peek() != NULL) {
        result = s.pop();
        cout << *result << endl;
        delete result;
    }

    for (int i=3; i>=0; i--) {
        s.push(i);
    }

    while (s.peek() != NULL) {
        result = s.pop();
        cout << *result << endl;
        delete result;
    }

    Queue q;

    cout << "Put 5" << endl;
    q.put(5);
    cout << "Put 3" << endl;
    q.put(3);

    result = q.get();
    cout << "Got " << *result << endl;
    delete result;

    result = q.get();
    cout << "Got " << *result << endl;
    delete result;

    assert(q.get() == NULL);

    return 0;
}

