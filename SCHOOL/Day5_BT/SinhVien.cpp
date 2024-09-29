#include "SinhVien.h"

// Contructor & Dectructor
SinhVien::SinhVien(string MSV, string fullName, string dayOfBirth, double GPA, double DRL) {
    this->MSV = MSV;
    this->fullName = fullName;
    this->dayOfBirth = dayOfBirth;
    this->GPA = GPA;
    this->DRL = DRL;
}

SinhVien::SinhVien(const SinhVien& SV) {
    this->MSV = SV.MSV;
    this->fullName = SV.fullName;
    this->dayOfBirth = SV.dayOfBirth;
    this->GPA = SV.GPA;
    this->DRL = SV.DRL;
}
SinhVien::~SinhVien() { }

// Setter
void SinhVien::setMSV(string MSV) { this->MSV = MSV; }
void SinhVien::setFullName(string fullName) { this->fullName = fullName; }
void SinhVien::setDayOfBirth(string dayOfBirth) { this->dayOfBirth = dayOfBirth; }
void SinhVien::setGPA(double GPA) { this->GPA = GPA; }
void SinhVien::setDRL(double DRL) { this->DRL = DRL; }

// Getters
string SinhVien::getMSV() const { return this->MSV; }
string SinhVien::getFullName() const { return this->fullName; }
string SinhVien::getDayOfBirth() const { return this->dayOfBirth; }
double SinhVien::getGPA() const { return this->GPA; }
double SinhVien::getDRL() const { return this->DRL; }

// Input & Output
void SinhVien::inputSV() {
    cout << "\tNhap ma sinh vien: "; cin >> this->MSV; cin.ignore();
    cout << "\tNhap ho va ten: "; getline(cin, this->fullName); 
    cout << "\tNhap ngay sinh (dd/mm/yyyy): "; cin >> this->dayOfBirth; cin.ignore();
    cout << "\tNhap GPA: "; cin >> this->GPA;
    cout << "\tNhap diem ren luyen: "; cin >> this->DRL;
}

void SinhVien::outputSV() {
    cout << "\tMa sinh vien: " << this->MSV << endl;
    cout << "\tHo va ten: " << this->fullName << endl;
    cout << "\tNgay sinh: " << this->dayOfBirth << endl;
    cout << "\tGPA: " << this->GPA << endl;
    cout << "\tDiem ren luyen: " << this->DRL << endl;
}

bool SinhVien::operator == (const SinhVien& other) const {
    return this->MSV == other.MSV;
}