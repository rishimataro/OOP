#include "DocGiaNguoiLon.h"

void DocGiaNguoiLon::input() {
    DocGia::input();
    cin.ignore();
    cout << "Nhap CMND: "; cin >> CMND;
}

void DocGiaNguoiLon::output() {
    DocGia::output();
    cout << "CMND: " << CMND << endl;
}

int DocGiaNguoiLon::cardCalculation() {
    return DocGia::validMonths * 10000;
}

DocGiaNguoiLon::DocGiaNguoiLon() {

}

DocGiaNguoiLon::~DocGiaNguoiLon() {
    
}