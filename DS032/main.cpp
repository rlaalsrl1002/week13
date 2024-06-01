#include <fstream>
#include <iostream>
#include "MyStack.h"
using namespace std;

// gpa값이 더 큰지 비교하는 함수
int compareGpa(Element s1, Element s2) {
    if (s1.gpa < s2.gpa) {
        return 1;
    } else if (s1.gpa == s2.gpa) {
        return 0;
    }
    return -1;
}

void printGpa(MyStack s) {
    Element *tmp;
    tmp = s.pop();

    cout << "Top GPA: " << tmp->gpa << endl;
    cout << tmp->name << endl;
    while (!s.isEmpty()) {
        tmp = s.pop();
        cout << tmp->name << endl;
    }
}

void analyzeGPA() {
    fstream f;
    f.open("./gpaData/gpa_1.txt");
    if (!f.is_open()) {
        cout << "File Open Error" << endl;
        return;
    }
    MyStack s(10);

    Element standard;
    f >> standard.gpa >> standard.name;
    s.push(standard);
    Element tmp;
    while (!f.eof()) {
        f >> tmp.gpa >> tmp.name;

        if (compareGpa(standard, tmp) == 1) {
            while (!s.isEmpty()) {
                s.pop();
            }
            s.push(tmp);
            standard = tmp;
        } else if (compareGpa(standard, tmp) == 0) {
            s.push(tmp);
        }
    }
    printGpa(s);
}

int main() {
    analyzeGPA();
    return 0;
}
