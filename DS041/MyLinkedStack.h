#ifndef MYLINKEDSTACK_H
#define MYLINKEDSTACK_H

#include <iostream>

struct Node {
    int data;
    Node* next;
};

class MyLinkedStack {
private:
    Node* top;

public:
    MyLinkedStack();
    ~MyLinkedStack();
    bool isEmpty() const;
    void push(int value);
    int pop();
    int peek() const;
    void clear();
    void print() const;
};

#endif // MYLINKEDSTACK_H
