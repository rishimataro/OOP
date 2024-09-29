#include "Point.h"

Point::Point(int xVal, int yVal) {
    this->xVal = xVal;
    this->yVal = yVal;
}

Point::Point(const Point& p) {
    this->xVal = p.xVal;
    this->yVal = p.yVal;
}

Point::~Point() {
    cout << "Huy Point!" << endl;
 }

void Point::setXVal(int xVal) { this->xVal = xVal; }
int Point::getXVal() const { return this->xVal; }
void Point::setYVal(int yVal) { this->yVal = yVal; }
int Point::getYVal() const { return this->yVal; }

void Point::show() {
    cout << this->xVal << ", " << this->yVal << endl;
}

void Point::tinhTien(int x) {
    xVal += x;
    yVal += x;
}

void changePoint(Point& p) {
    p.xVal = 10;
    p.yVal= 30;
}