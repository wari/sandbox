class Queue {
    struct Node {
        int* data;
        Node *next;
    };

    Node *front;
    Node *back;
public:
    Queue();
    void put(int)
    int* get();
};
