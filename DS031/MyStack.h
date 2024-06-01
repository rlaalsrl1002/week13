#ifndef MYSTACK_H
#define MYSTACK_H

template<typename T>
class MyStack {
private:
    int maxsize;
    int top;
    T* list;

public:
    MyStack(int size = 10);
    ~MyStack();
    void initialize();
    bool isEmpty() const;
    bool isFull() const;
    void push(const T& elem);
    T pop();
    void print();
};

#endif
