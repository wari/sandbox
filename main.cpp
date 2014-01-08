#include<iostream>
#include "stdio.h"

using namespace std;

class second;
class first {
    static int a;
    int b;
public:
    void setB(int v) {
        b = v;
    }
    int getB() {
        return b;
    }
    static void setA(int v) {
        a = v;
    }
    static int getA() {
        return a;
    }
    friend void seeFS(first, second);
};
class second {
    int b;
public:
    void setB(int v) {
        b = v;
    };
    int getB() {
        return b;
    }
    friend void seeFS(first, second);
};

void seeFS(first *a, second *b) {
    cout << a->getA() << "\t" << a->getB() << "\t" << b->getB() << endl;
}

int first::a = 1;

int main() {
    first *a = new first;

    //first *c;

    a->setA(10);
    a->setB(60);
    printf("%x\n", (unsigned)a);
    //printf("%x\n", (unsigned)a);
    second *b = new second;
    //first *d = new first;
    b->setB(20);
    seeFS(a, b);
    delete a;
    //printf("%x\n", (unsigned)d);
    //d->setA(30);
    //printf("%x\n", (unsigned)d);
    printf("%x\n", (unsigned)b);
    seeFS(a, b);

    return 0;
}
