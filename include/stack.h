class Stack {
    struct node {
        int data;
        node *prev;
    };

    node *top;
public:
    Stack(int);
    void push(int);
    bool is_empty();
    int pop();
    int peek();
};
