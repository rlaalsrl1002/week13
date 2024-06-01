#ifndef MYLINKEDSTACK_H
#define MYLINKEDSTACK_H

#include <iostream>

struct Node {
    double data;
    Node* next;
};

class MyLinkedStack {
private:
    Node* top;

public:
    MyLinkedStack();
    ~MyLinkedStack();
    bool isEmpty() const;
    void push(double value);
    double pop();
    double peek() const;
    void clear();
};

#endif // MYLINKEDSTACK_H
