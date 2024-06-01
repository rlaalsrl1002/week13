#include "CouponStack.h"

void CouponStack::initialize() {
    top = 0;
}

bool CouponStack::isEmpty() {
    return top == 0 ? true : false;
}

bool CouponStack::isFull() {
    return top == maxsize ? true : false;
}

void CouponStack::push(const Coupon &c) {
    if (isFull()) return;
    list[top] = c;
    top++;
}

Coupon* CouponStack::pop() {
    if (isEmpty()) return nullptr;
    return &list[--top];
}

CouponStack::CouponStack(int size) {
    top = 0;
    maxsize = size;
    list = new Coupon[size];
}

void CouponStack::print() {
    if (isEmpty()) {
        return;
    }
    for (int i = 0; i < top; i++) {
        cout << list[i].number << "등 - " << list[i].giftName << endl;
    }
}

void CouponStack::rprint() {
    while (!isEmpty()) {
        Coupon *tmp;
        tmp = pop();
        cout << tmp->number << "등 - " << tmp->giftName << endl;
    }
}

CouponStack::~CouponStack() {
    delete[] list;
}

void printCoupon(Coupon c) {
    cout << c.number << "등 - " << c.giftName << endl;
}
