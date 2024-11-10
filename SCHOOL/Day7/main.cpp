#include "Vector.h"
// #include "Matrix.h"

int main() {
    // Vector v1(2);
    // v1[1] = 11;
    // cout << v1 << endl;

    // Matrix m1(2, 3);
    // m1(1, 1) = 20;
    // cout << m1;

    Vector v1(3);
    Vector v2(v1); //copy
    Vector v3 = v1; //copy
    Vector v4;
    v4 = v1;

    return 0;
}