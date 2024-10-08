#include "Point.h"

Point::Point(int xVal = 0, int yVal = 0) : n(2) {
    this->count++;
    this->xVal = xVal;
    this->yVal = yVal;
}

Point::Point(const Point& p) : n(3) {
    this->count++; 
    this->xVal = p.xVal;
    this->yVal = p.yVal;
}

Point::~Point() { }

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

int Point::count = 0;