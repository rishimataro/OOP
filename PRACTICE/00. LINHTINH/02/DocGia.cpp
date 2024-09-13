#include "DocGia.h"

void DocGia::input() {
    cin.ignore();  // xoa bo nho dem
    cout << "Nhap ho ten doc gia: "; getline(cin, fullName); 
    cout << "Nhap ngay lap the (dd/mm/yy): "; cin >> cardCreationDate; 
    cout << "Nhap so thang co hieu luc: "; cin >> validMonths;
}

void DocGia::output() {
    cout << "Ho ten doc gia: " << fullName << endl;
    cout << "Ngay lap the (dd/mm/yy): " << cardCreationDate << endl;
    cout << "So thang co hieu luc: " << validMonths << endl;
}

DocGia::DocGia() {
	
}

DocGia::~DocGia() {
    
}