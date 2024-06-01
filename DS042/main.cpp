#include <iostream>
#include <sstream>
#include <string>
#include "MyLinkedStack.h"

using namespace std;

void evaluateExpression(const string& expression) {
    MyLinkedStack stack;
    istringstream iss(expression);
    string token;

    while (iss >> token) {
        if (token[0] == '#') {
            try {
                double value = stod(token.substr(1));
                stack.push(value);
            } catch (const invalid_argument&) {
                cout << "Expression error !!!" << endl;
                return;
            }
        } else if (token == "+" || token == "-" || token == "*" || token == "/") {
            if (stack.isEmpty()) {
                cout << "Expression error !!!" << endl;
                return;
            }
            double operand2 = stack.pop();
            if (stack.isEmpty()) {
                cout << "Expression error !!!" << endl;
                return;
            }
            double operand1 = stack.pop();
            double result;

            if (token == "+") {
                result = operand1 + operand2;
            } else if (token == "-") {
                result = operand1 - operand2;
            } else if (token == "*") {
                result = operand1 * operand2;
            } else if (token == "/") {
                if (operand2 == 0) {
                    cout << "Division by 0" << endl;
                    return;
                }
                result = operand1 / operand2;
            }
            stack.push(result);
        } else if (token == "=") {
            if (stack.isEmpty()) {
                cout << "Expression error !!!" << endl;
                return;
            }
            double result = stack.pop();
            if (!stack.isEmpty()) {
                cout << "Too many operands" << endl;
                return;
            }
            cout << result << endl;
            return;
        } else {
            cout << "Expression error !!!" << endl;
            return;
        }
    }
    cout << "Expression error !!!" << endl;
}

int main() {
    string expression;
    while (getline(cin, expression)) {
        evaluateExpression(expression);
    }
    return 0;
}
