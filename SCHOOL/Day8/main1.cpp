#include "Date.h"

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    Date d1; //(28, 2, 2020);
    Date d2; //(15, 4, 2024);
    
    cout << "Nhập ngày 1: "; cin >> d1;
    cout << "Nhập ngày 2: "; cin >> d2;
    
    cout << "Ngày 1: " << d1 << endl;
    cout << "Ngày 2: " << d2 << endl;

    d1 += 3;
    cout << "Ngày 1 sau khi thêm 3 ngày: " << d1 << endl;
    d1 -= 5;
    cout << "Ngày 1 sau khi trừ 5 ngày: " << d1 << endl;

    cout << "Ngày 1 == Ngày 2: " << (d1 == d2) << endl;
    cout << "Ngày 1 != Ngày 2: " << (d1 != d2) << endl;
    // cout << "Ngày 1 < Ngày 2: " << (d1 < d2) << endl;
    cout << "Ngày 1 <= Ngày 2: " << (d1 <= d2) << endl;
    // cout << "Ngày 1 > Ngày 2: " << (d1 > d2) << endl;
    cout << "Ngày 1 >= Ngày 2: " << (d1 >= d2) << endl;

    ++d1;
    cout << "Ngày 1 sau khi tăng (prefix): " << d1 << endl;

    d1++;
    cout << "Ngày 1 sau khi tăng (postfix): " << d1 << endl;

    --d2;
    cout << "Ngày 2 sau khi giảm (prefix): " << d2 << endl;

    d2--;
    cout << "Ngày 2 sau khi giảm (postfix): " << d2 << endl;

    return 0;
}