#include<iostream>

using namespace std;

class second;
class first {
    static int a;
public:
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
    cout << a->getA() << "\t" << b->getB() << endl;
}

int first::a = 1;

void main() {
    first *a = new first;

    //first *c;

    a->setA(10);
    printf("%x\n", a);
    delete a;
    printf("%x\n", a);
    first *d = new first;
    second *b = new second;
    b->setB(20);
    printf("%x\n", a);
    d->setA(30);
    printf("%x\n", d);
    printf("%x\n", b);
    seeFS(a, b);
}