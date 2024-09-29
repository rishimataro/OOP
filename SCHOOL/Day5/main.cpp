#include "Triangle.h"

int main() {
    // Point *p = new Point[3];
    // for (int i = 0; i < 3; i++) {
    //     (p + i)->show();
    //     (*(p + i)).show();
    //     cout << endl;
    // }

    // delete[] p;

    // 1:
    Point a(1, 2), b(2, 3), c(10, 9);
    Triangle t1(a, b, c); t1.show();

    // 2:
    Triangle t2(1, 2, 2, 3, 10, 9);
    t2.show();
    
    return 0;
}