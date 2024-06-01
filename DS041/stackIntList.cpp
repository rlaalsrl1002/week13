#include "stackIntList.h"
#include <iostream>

StackIntList::StackIntList(int size) : maxSize(size), top(-1) {
    list = new int[maxSize];
}

StackIntList::~StackIntList() {
    delete[] list;
}

bool StackIntList::isEmpty() {
    return top == -1;
}

bool StackIntList::isFull() {
    return top == maxSize - 1;
}

void StackIntList::push(int value) {
    if (isFull()) {
        std::cerr << "Stack is full" << std::endl;
        return;
    }
    list[++top] = value;
}

int StackIntList::pop() {
    if (isEmpty()) {
        std::cerr << "Stack is empty" << std::endl;
        return -1;
    }
    return list[top--];
}

int StackIntList::peek() {
    if (isEmpty()) {
        std::cerr << "Stack is empty" << std::endl;
        return -1;
    }
    return list[top];
}

void StackIntList::clear() {
    top = -1;
}

void StackIntList::print() {
    if (isEmpty()) {
        std::cout << "Stack is empty" << std::endl;
        return;
    }
    for (int i = 0; i <= top; ++i) {
        std::cout << list[i] << " ";
    }
    std::cout << std::endl;
}
