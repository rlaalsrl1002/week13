#include "MyLinkedStack.h"
#include <iostream>
#include <stdexcept>

MyLinkedStack::MyLinkedStack() : top(nullptr) {}

MyLinkedStack::~MyLinkedStack() {
    clear();
}

bool MyLinkedStack::isEmpty() const {
    return top == nullptr;
}

void MyLinkedStack::push(char value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = top;
    top = newNode;
}

char MyLinkedStack::pop() {
    if (isEmpty()) {
        throw std::runtime_error("Stack is empty");
    }
    Node* temp = top;
    char value = temp->data;
    top = top->next;
    delete temp;
    return value;
}

char MyLinkedStack::peek() const {
    if (isEmpty()) {
        throw std::runtime_error("Stack is empty");
    }
    return top->data;
}

void MyLinkedStack::clear() {
    while (!isEmpty()) {
        pop();
    }
}
