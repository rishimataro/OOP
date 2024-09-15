#include "Point.h"

Point::Point() {
    this->xVal = this->yVal = 0;
}

Point::Point(int xVal, int yVal) {
    this->xVal = xVal;
    this->yVal = yVal;
}

Point::Point(const Point& p) {
    this->xVal = p.xVal;
    this->yVal = p.yVal;
}

Point::~Point() { }

void Point::show() {
    cout << this->xVal << ", " << this->yVal << endl;
}

void Point::tinhTien(int x) {
    xVal += x;
    yVal += x;
}