#include "Person.h"

Person::Person() { this->ID = ""; this->hoTen = ""; }

Person::~Person() { }

Person::Person(string ID, string hoTen) {
    this->ID = ID;
    this->hoTen = hoTen;
}

void Person::setID(string ID) { this->ID = ID; }
string Person::getID() const { return this->ID; }
void Person::setHoTen(string hoTen) { this->hoTen = hoTen; }
string Person::getHoTen() const { return this->hoTen; }

void Person::input() {
    cout << "Nhập ID: "; getline(cin, ID);
    cout << "Nhập họ và tên: "; getline(cin, hoTen);
}
void Person::output() const {
    cout << "ID: " << ID << endl;
    cout << "Họ và tên: " << hoTen << endl;
}