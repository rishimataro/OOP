#include <iostream>
#include <iomanip>
using namespace std;
int x = 1;

void A() {
    int y = 2;
    static int z = 3;
    y++; z++;
    cout << y << ", " << z << endl;
}

int main() {
    A(); //3, 4
    A(); //3, 5
    int x1 = 4;
    int &y1 = x1;
    cout << &x1 << ", " << &y1 << endl;
    y1 = 9;
    cout << x1 << ", " << y1 << endl;

    int *p = &x1;
    *p = 5;
    cout << *p << ", " << x1 << endl;
    cout << p << ", " << &x1 << endl;
    cout << &p << endl;
    // &p - địa chỉ của biến con trỏ p

    int x = 10;
    cout << x << ", " << ::x << endl;   
    // ::x - lấy giá trị của biến toàn cục 
    // :: - toán tử định phạm vi

    enum Color{
        RED, // khởi tạo giá trị mặc định = 0
        BLUE, // == giá trị phía trước và +1 // = 1
        GREEN = 3,
        YELLOW // tương tự BLUE // = 4
    };
    Color c = BLUE;
    cout << c << endl; //3 //0 //1
    
    // char x2; int y2;
    // cout << "Input: x2 = "; cin >> x2; // a
    // y2 = x2;
    // cout << "Output: x2 = " << x2 << ", y2 = " << y2 << endl; // a, 97
    // //
    // cout << "Input: y2 = "; cin >> y2; // 49
    // x2 = y2;
    // cout << "Output: x2 = " << x2 << ", y2 = " << y2 << endl; // 1, 49

    double a = 1234.5;
    cout << setiosflags(ios::showpoint) << setprecision(3) << a << endl; // 1.23e+03
    cout << setw(10) << "Pritesh" << endl;
    cout << setw(5) << "KHOA" << "CNTT" << endl;

    const int a1 = 1;
    int b = 2;
    const int &x3 = a1;
    const int &y3 = b;
    const int &z3 = 3;
    cout << x3 << y3 << z3 << endl;
    b++;
    cout << b << y3 << endl;
    return 0;
}