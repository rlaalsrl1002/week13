#include <iostream>
#include <string>
#include "MyLinkedStack.h"

using namespace std;

void printCurrentState(MyLinkedStack& leftStack, MyLinkedStack& rightStack) {
    MyLinkedStack temp;

    // Print left stack content
    while (!leftStack.isEmpty()) {
        temp.push(leftStack.pop());
    }
    while (!temp.isEmpty()) {
        char c = temp.pop();
        cout << c;
        leftStack.push(c);
    }

    // Print right stack content
    MyLinkedStack rightTemp;
    while (!rightStack.isEmpty()) {
        rightTemp.push(rightStack.pop());
    }
    while (!rightTemp.isEmpty()) {
        cout << rightTemp.pop();
    }
    cout << endl;
}

void processInput() {
    MyLinkedStack leftStack, rightStack;
    string input;

    while (true) {
        getline(cin, input);
        if (input == "q") break;

        for (char ch : input) {
            if (ch == '<') {
                if (!leftStack.isEmpty()) {
                    rightStack.push(leftStack.pop());
                }
            } else if (ch == '>') {
                if (!rightStack.isEmpty()) {
                    leftStack.push(rightStack.pop());
                }
            } else {
                leftStack.push(ch);
            }
        }

        cout << "=> ";
        printCurrentState(leftStack, rightStack);

        // Clear stacks for the next input
        leftStack.clear();
        rightStack.clear();
    }
}

int main() {
    processInput();
    return 0;
}
