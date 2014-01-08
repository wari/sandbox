// stacks.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

int main(int argc, char *argv[])
{
    Stack s(5);
    int *result;

    for (int i=0; i<10; i++) {
        s.push(i);
    }

    while (s.peek() != NULL) {
        result = s.pop();
        cout << *result << endl;
        delete result;
    }

    for (int i=9; i>=0; i--) {
        s.push(i);
    }

    while (s.peek() != NULL) {
        result = s.pop();
        cout << *result << endl;
        delete result;
    }

    return 0;
}

