#include "Triangle.h"

Triangle::Triangle(Point A, Point B, Point C) : A(A), B(B), C(C) { }

Triangle::Triangle(int xa, int ya, int xb, int yb, int xc, int yc) : A(xa, ya), B(xb, yb), C(xc, yc) { }

Triangle::~Triangle() { 
    cout << "Huy Triangle" << endl; 
}

void Triangle::show() {
    A.show();
    B.show();
    C.show();
}
