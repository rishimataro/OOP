#include "Point4D.h"

int main() {
    // Point p1(1, 2);
    // Point3D p2(3, 4, 5);
    // p1.show();
    // p2.show();

    // Point* p1;
    // Point3D* p2;
    // Point p11(2, 3);
    // Point3D p22(4, 5, 6);

    // p1 = &p11;
    // p2 = &p22;
    // p1->show();
    // p2->show();

    // //upcast
    // p1 = &p22;
    // p1->show();

    // //downcast
    // p2 = static_cast<Point3D*>(&p11);
    // p2->show();

    // cout << "-------------------" << endl;
    // Point *p3 = new Point3D(7, 8, 9);
    // delete p3;

    // cout << "-------------------" << endl;

    Point4D p4(1, 2, 3, 4);
    p4.show();

    return 0;
}