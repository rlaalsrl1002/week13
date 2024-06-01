#ifndef STACKINTLIST_H
#define STACKINTLIST_H

class StackIntList {
private:
    int* list;
    int maxSize;
    int top;

public:
    StackIntList(int size = 10);
    ~StackIntList();
    bool isEmpty();
    bool isFull();
    void push(int value);
    int pop();
    int peek();
    void clear();
    void print();
};

#endif // STACKINTLIST_H
