#include "Point.h"

int main() {
    Point p1;
    Point p2(2, 3);
    Point p3(p2);
    p1.show();
    p2.show();
    p3.show();

    return 0;
}