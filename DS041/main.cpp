#include <iostream>
#include <string>
#include "MyLinkedStack.h"

using namespace std;

void processCommands() {
    MyLinkedStack stack;
    string command;
    int value;

    while (cin >> command) {
        if (command == "push") {
            cin >> value;
            stack.push(value);
        } else if (command == "pop") {
            try {
                cout << stack.pop() << endl;
            } catch (const std::runtime_error& e) {
                cout << e.what() << endl;
            }
        } else if (command == "peek") {
            try {
                cout << stack.peek() << endl;
            } catch (const std::runtime_error& e) {
                cout << e.what() << endl;
            }
        } else if (command == "clear") {
            stack.clear();
        } else if (command == "print") {
            stack.print();
        }
    }

    cout << "Bye!" << endl;
}

int main() {
    processCommands();
    return 0;
}
