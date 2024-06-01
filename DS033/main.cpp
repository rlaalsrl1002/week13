#include <iostream>
#include "CouponStack.h"

using namespace std;

void manageCoupons() {
    int size;
    cin >> size;
    CouponStack cs(size);
    string in;

    while (in != "q") {
        cin >> in;
        if (in == "+") {
            Coupon c;
            cin >> c.number;
            getline(cin >> ws, c.giftName);
            cs.push(c);
        } else if (in == "-") {
            if (cs.isEmpty()) {
                return;
            }
            Coupon *c = cs.pop();
            printCoupon(*c);
        } else if (in == "print") {
            cs.print();
        } else if (in == "rprint") {
            cs.rprint();
        }
    }
}

int main() {
    manageCoupons();
    return 0;
}
