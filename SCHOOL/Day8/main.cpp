#include "Point.h"
#include "Number.h"

int main() {
    int x1 = 1, x2 = 1;
    int y1 = x1++;  // Postfix ++ --> x1=2, y1=1
    int y2 = ++x2;  // Prefix ++ --> x2=2, y2=2

    cout << x1 << ", " << y1 << endl;
    cout << x2 << ", " << y2 << endl;
    cout << "-----------------------------" << endl;

    Point p1(1, 2), p2(3, 4);
    Point p3 = p1++;
    Point p4 = ++p2;
    cout << p1 << p3 << endl;   
    cout << p2 << p4;
    cout << "-----------------------------" << endl;

    Number n1(1.2);
    int x = int(n1);
    double y = double(n1);
    cout << x << ", " << y << endl;
    cout << "-----------------------------" << endl;

    
    return 0;
}