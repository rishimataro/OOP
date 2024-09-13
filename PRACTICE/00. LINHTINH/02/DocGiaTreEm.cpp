#include "DocGiaTreEm.h"

void DocGiaTreEm::input() {
    // cin.ignore();
    DocGia::input();
    cin.ignore();
    cout << "Nhap ho ten nguoi dai dien: "; getline(cin, nguoiDaiDien);
}

void DocGiaTreEm::output() {
    DocGia::output();
    cout << "Ho ten nguoi dai dien: " << nguoiDaiDien << endl;
}

int DocGiaTreEm::cardCalculation() {
    return DocGia::validMonths * 5000;
}

DocGiaTreEm::DocGiaTreEm() {
    
}

DocGiaTreEm::~DocGiaTreEm() {
    
}