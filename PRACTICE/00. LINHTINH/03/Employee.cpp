#include "Employee.h"

Employee::Employee() : Person() {
    this->namSinh = 0;
    this->heSoLuong = 0;
}

Employee::~Employee() { }

Employee::Employee(string ID, string hoTen, int namSinh, float heSoLuong) : Person(ID, hoTen) {
    this->namSinh = namSinh;
    this->heSoLuong = heSoLuong;
}

void Employee::setNamSinh(int namSinh) { this->namSinh = namSinh; }
int Employee::getNamSinh() const { return this->namSinh; }
void Employee::setHeSoLuong(float heSoLuong) { this->heSoLuong = heSoLuong; }
float Employee::getHeSoLuong() const { return this->heSoLuong; }
void  Employee::setTienPhuCap(float tien) { tienPhuCap = tien; }
float Employee:: getTienPhuCap() { return tienPhuCap; }

float Employee::getLuong() {
    return heSoLuong * 1550 + tienPhuCap;
}

bool Employee::operator > (const Employee another) const {
    return this->heSoLuong > another.heSoLuong;
}

float Employee::tienPhuCap = 0.0f;

void Employee::input() {
    Person::input();
    cout << "Nhập năm sinh: "; cin >> namSinh;
    cout << "Nhập hệ số lương: "; cin >> heSoLuong;
    cout << "Nhập tiền phụ cấp: "; cin >> tienPhuCap; 
}

void Employee::output() {
    Person::output();
    cout << "Năm sinh: " << namSinh << endl;
    cout << "Hệ số lương: " << heSoLuong << endl;
}