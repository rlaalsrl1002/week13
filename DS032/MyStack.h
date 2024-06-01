#ifndef MYSTACK_H
#define MYSTACK_H

#include <iostream>
using namespace std;

struct Element {
    string name;
    double gpa;
};

class MyStack {
private:
    int maxsize;
    int top;
    Element *list;

public:
    void initialize();
    bool isEmpty() const;
    bool isFull() const;
    void push(const Element &e);
    Element *pop();

    MyStack(int size = 10);
    ~MyStack();
};

#endif // MYSTACK_H
