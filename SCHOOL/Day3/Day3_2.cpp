#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int TT(int a, int b, int (*p)(int, int)) {
    return (*p)(a, b);
}

int main() {
    int (*p)(int, int);
    // int *p(int, int);

    p = sum;
    cout << sum(1, 2) << ", " << (*p)(1, 2) << endl;
    p = sub;
    cout << sub(1, 2) << ", " << (*p)(1, 2) << endl;

    cout << TT(1, 2, sum) << ", " << TT(1, 2, sub) << endl;

    return 0;
}