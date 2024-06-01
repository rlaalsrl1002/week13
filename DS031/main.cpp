#include "MyStack.h"
#include <iostream>
#include <string>

int main() {
    MyStack<int> stack;  // int 타입의 스택 인스턴스 생성
    std::string command;
    int value;

    while (true) {
        std::cin >> command;
        if (command == "push") {
            std::cin >> value;
            stack.push(value);
        } else if (command == "pop") {
            stack.pop();
        } else if (command == "print") {
            stack.print();
            break;  // print 후에 프로그램 종료
        }
    }
    return 0;
}
