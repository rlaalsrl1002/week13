#ifndef COUPONSTACK_H
#define COUPONSTACK_H

#include <iostream>
using namespace std;

struct Coupon {
    int number;
    string giftName;
};

class CouponStack {
private:
    int maxsize;
    int top;
    Coupon *list;

public:
    void initialize();
    bool isEmpty();
    bool isFull();
    void push(const Coupon &c);
    Coupon *pop();
    CouponStack(int size = 10);
    void print();
    void rprint();
    ~CouponStack();
};

void printCoupon(Coupon c);

#endif // COUPONSTACK_H
