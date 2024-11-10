#include "C.h"

C::C(int a, int b, int c, int d) : A(a, b), B(c, d) { }
C::~C() { cout << "huy C" << endl; }

void C::AB() {
    cout << "C-AB" << endl;
}