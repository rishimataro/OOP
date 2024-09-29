#include "Point.h"

int main() {
    Point p1(1, 2), p2(3, 4);
    // Point p3 = p1 + p2;
    // Point p4 = operator+(p1, p2);
    // p3.show();
    // p4.show();

    // Point p5 = p1 - p2; // p1 là this, p2 là another
    // Point p6 = p2 - p1;
    // Point p7 = p2.operator-(p1); // p2 - p1
    // Point p8 = p1.operator-(p2); // p1 - p2
    // p5.show();
    // p6.show();
    // p7.show();
    // p8.show();

    // cout << p1;
    Point p9;
    // cin >> p9;  // ~operator>>(cin, p9)
    // cout << p9; // ~operator<<(cout, p9)
    cin >> p9;
    cout << p9;

    return 0;
}