// stacks.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

int main(int argc, char *argv[])
{
    Stack s(5);

    for (int i=0; i<10; i++) {
        s.push(i);
    }

    while (s.is_empty() != true) {
        cout << s.pop() << endl;
    }

    for (int i=9; i>=0; i--) {
        s.push(i);
    }

    while (s.is_empty() != true) {
        cout << s.pop() << endl;
    }

    return 0;
}

