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

void MyLinkedStack::push(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = top;
    top = newNode;
}

int MyLinkedStack::pop() {
    if (isEmpty()) {
        throw std::runtime_error("Stack is empty");
    }
    Node* temp = top;
    int value = temp->data;
    top = top->next;
    delete temp;
    return value;
}

int MyLinkedStack::peek() const {
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

void MyLinkedStack::print() const {
    if (isEmpty()) {
        std::cout << "Stack is empty" << std::endl;
        return;
    }

    Node* current = top;
    int count = 0;
    while (current != nullptr) {
        if (current != top) {
            std::cout << " -> ";
        }
        std::cout << current->data;
        current = current->next;
        count++;
    }
    std::cout << " (" << count << " nodes)" << std::endl;
}
