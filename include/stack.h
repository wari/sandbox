class Stack {
    struct node {
        int *data;
        node *prev;
    };

    node *top;
public:
    Stack(int);
    void push(int);
    int pop();
    int peek();
};