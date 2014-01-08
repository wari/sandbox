// stacks.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
    Stack s(5);
    s.peek();
    exit(0);

    for (int i=0; i<10; i++) {
        s.push(i);
    }

    while (s.peek() != NULL) {
        cout << s.pop() << endl;
    }

    for (int i=0; i<10; i++) {
        s.push(i);
    }

    while (s.peek() != NULL) {
        cout << s.pop() << endl;
    }

    return 0;
}

