#include <iostream>
#include "DocGia.h"
#include "DocGiaTreEm.h"
#include "DocGiaNguoiLon.h"

using namespace std;

int main() {
    DocGia x;
    cout << "NHAP THONG TIN" << endl;
    x.input();
    
    cout << "\n----------------------------------------";
    cout << "XUAT THONG TIN" << endl;
    x.output();

//    return 0;
}