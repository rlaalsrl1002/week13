#include <iostream>
#include <string>
#include "stackIntList.h"

using namespace std;

void manageIntStack() {
    int size;
    cin >> size;
    StackIntList stack(size);
    string command;

    while (cin >> command) {
        if (command == "push") {
            int value;
            cin >> value;
            stack.push(value);
        } else if (command == "pop") {
            stack.pop();
        } else if (command == "peek") {
            cout << stack.peek() << endl;
        } else if (command == "clear") {
            stack.clear();
        } else if (command == "print") {
            stack.print();
        } else if (command == "q") {
            break;
        }
    }
}

int main() {
    manageIntStack();
    return 0;
}
