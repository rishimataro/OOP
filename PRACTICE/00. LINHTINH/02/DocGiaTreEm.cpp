#include "DocGiaTreEm.h"

void DocGiaTreEm::input() {
    cin.ignore();
    DocGia::input();
    cout << "Nhap ho ten nguoi dai dien: "; getline(cin, representative);
}

void DocGiaTreEm::output() {
    DocGia::output();
    cout << "Ho ten nguoi dai dien: " << representative << endl;
}

int DocGiaTreEm::cardCalculation() {
    return DocGia::validMonths * 5000;
}

DocGiaTreEm::DocGiaTreEm() {
    
}

DocGiaTreEm::~DocGiaTreEm() {
    
}