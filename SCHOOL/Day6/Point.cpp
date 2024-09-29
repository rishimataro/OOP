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

Point operator+(const Point& p1, const Point& p2) {
    return Point(p1.xVal + p2.xVal, p1.yVal + p2.yVal);
}

Point Point::operator-(const Point& another) {
    return Point(this->xVal - another.xVal, this->yVal - another.yVal);
}

ostream& operator << (ostream& out, const Point& p) {
    out << p.xVal << ", " << p.yVal << endl;
    return out;
}

istream& operator >> (istream& in, Point& p) {
    cout << "Nhap x: "; in >> p.xVal;
    cout << "Nhap y: "; in >> p.yVal;
    return in;
}