#include "MyStack.h"
#include <iostream>

template<typename T>
MyStack<T>::MyStack(int size) : maxsize(size), top(-1), list(new T[maxsize]) {}

template<typename T>
MyStack<T>::~MyStack() {
    delete[] list;
}

template<typename T>
void MyStack<T>::initialize() {
    top = -1;
}

template<typename T>
bool MyStack<T>::isEmpty() const {
    return top == -1;
}

template<typename T>
bool MyStack<T>::isFull() const {
    return top == maxsize - 1;
}

template<typename T>
void MyStack<T>::push(const T& elem) {
    if (!isFull()) {
        list[++top] = elem;
    } else {
        std::cerr << "Stack is full!" << std::endl;
    }
}

template<typename T>
T MyStack<T>::pop() {
    if (!isEmpty()) {
        return list[top--];
    } else {
        std::cerr << "Stack is empty!" << std::endl;
        return T();  // Default return value of type T
    }
}

template<typename T>
void MyStack<T>::print() {
    for (int i = top; i >= 0; i--) {
        std::cout << list[i] << " ";
    }
    std::cout << std::endl;
}

// Template instantiation for common types
template class MyStack<int>;
template class MyStack<double>;
template class MyStack<char>;
