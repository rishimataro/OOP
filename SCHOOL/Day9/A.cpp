#include "A.h"

A::A(int a1, int a2) : a1(a1), a2(a2) { }
A::~A() { cout << "huy A" << endl; }

void A::A1() {
    cout << "A1" << endl;
}

void A::A2() {
    cout << "A2" << endl;
}

void A::AB() {
    cout << "A-AB" << endl;
}