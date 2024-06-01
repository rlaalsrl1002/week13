#include "MyStack.h"

void MyStack::initialize() {
    top = 0;
}

bool MyStack::isEmpty() const {
    return (top == 0);
}

bool MyStack::isFull() const {
    return (top == maxsize);
}

void MyStack::push(const Element &e) {
    if (isFull()) return;
    list[top] = e;
    top++;
}

Element* MyStack::pop() {
    if (isEmpty()) return nullptr;
    return &list[--top];
}

MyStack::MyStack(int size) {
    list = new Element[size];
    maxsize = size;
    top = 0;
}

MyStack::~MyStack() {
    delete[] list;
}
