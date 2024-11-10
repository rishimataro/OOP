#include "B.h"

B::B(int b1, int b2) : b1(b1), b2(b2) { }
B::~B() { cout << "huy B" << endl; }

void B::B1() {
    cout << "B1" << endl;
}

void B::B2() {
    cout << "B2" << endl;
}

void B::AB() {
    cout << "B-AB" << endl;
}