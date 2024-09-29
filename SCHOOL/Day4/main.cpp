#include "Point.h"

int main() {
    Point p1;
    cout << Point::count << endl;
    Point p2(2, 3);
    cout << Point::count << p2.count << endl;
    Point p3(p2);
    cout << Point::count << p2.count << p3.count << endl;

    // p1.show();
    // p2.show();
    // p3.show();

    return 0;
}