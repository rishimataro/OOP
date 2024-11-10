#include "Point3D.h"

Point3D::Point3D(int x, int y, int z) : Point(x, y), zVal(z) {}
    
Point3D::~Point3D() { }

void Point3D::setZVal(int z) {
    zVal = z;
}

int Point3D::getZVal() {    
    return zVal;
}

void Point3D::show3D() {
    cout << xVal << ", " << yVal << ", " << zVal << endl;
}   