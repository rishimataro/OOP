#include <iostream>
#include <iomanip>
using namespace std;
int x = 10;

// Truyền địa chỉ của biến bằng &a, &b
void hoanvi(int &a, int &b) {
    cout << "TRUOC HOAN VI: a = " << a << ", b = " << b << endl; 
    int t = a; a = b; b = t;
    cout << "SAU HOAN VI: a = " << a << ", b = " << b << endl; 
}

// Truyền con trỏ của biến a, b
void hoanvi1(int *a, int *b) {
    int t = *a; *a = *b; *b = t;
}

int sum(int a, int b) {
    return a + b;
}

// Không tồn tại vùng nhớ để trả về, dùng chung bộ nhớ với biến đc trả về.
// Nên là biến toàn cục hoặc biến cục bộ tĩnh
int& function() {
    static int x = 2;
    return x;
}

int& function1() {
    return x;
}

int& function2() {
    int n = 321;
    return n;
}

int main() {
    int m, n;
    cout << "m = "; cin >> m;
    cout << "n = "; cin >> n;
    // hoanvi(m, n);
    hoanvi1(&m, &n);
    cout << "SAU KHI GOI HAM: m = " << m << ", n = " << n << endl; 
    
    // cout << x << endl;  //10 10
    // cout << function1() << endl; //2 10
    // function1() = 57;
    // cout << x << endl;  //10 57

    // int k = 1;
    // int *p1 = &k;
    // int *p2; 
    // p2 = p1;
    // cout << *p1 << ", " << *p2 << ", " << k << endl;
    // cout << p1 << ", " << p2 << ", " << &k << endl;
    // cout << &p1 << ", " << &p2 << endl; 

    // int a = 4, b = 2;
    // //* con trỏ hằng
    // const int *p1 = &a; 
    // // (*p1)++ --> error
    // cout << *p1 << endl;
    // p1 = &b;
    // cout << *p1 << endl;

    // //* hằng con trỏ
    // int* const p2 = &a;
    // (*p2)++;
    // cout << *p2 << endl;
    // // p2 = &b --> error

    // int *p = &function2();
    // cout << *p << endl;
    // cout << " " << *p << endl;

    // int A[] = {1, 2, 3, 4, 5};
    // int *p = A; //con trỏ p bằng địa chỉ của phần tử đầu tiên trong mảng A

    // cout << "p = " << p << ", A = " << A << ", &A[0] = " << &A[0] << endl;
    // cout << A[1] << ", " << p[1] << ", " << *(p + 1) << endl; // 2, 2, 2
    // cout << &A[1] << ", " << &p[1] << ", " << (p + 1) << endl; 

    // int A[][3] = {1,2,3,4,5,6};

    // cout << A[1][1] << ", " << &A[1][1] << endl;
    // cout << *(A + 1) << ", " << &A[1][0] << endl;
    // cout << *(A + 1) + 2 << ", " << &A[1][2] << endl;
    // cout << *(*(A + 1) + 2) << ", " << A[1][2] << endl;

    return 0;
}