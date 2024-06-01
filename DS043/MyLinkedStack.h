#ifndef MYLINKEDSTACK_H
#define MYLINKEDSTACK_H

#include <iostream>

struct Node {
    char data;
    Node* next;
};

class MyLinkedStack {
private:
    Node* top;

public:
    MyLinkedStack();
    ~MyLinkedStack();
    bool isEmpty() const;
    void push(char value);
    char pop();
    char peek() const;
    void clear();
};

#endif // MYLINKEDSTACK_H
