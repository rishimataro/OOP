#include "PhuongTienGiaoThong.h"

PhuongTienGiaoThong::PhuongTienGiaoThong() {
    this->hangSanXuat = "";
    this->tenPhuongTien = "";
    this->namSanXuat = 0;
    this->vantocToiDa = 0;
}
PhuongTienGiaoThong::~PhuongTienGiaoThong() { }

PhuongTienGiaoThong::PhuongTienGiaoThong(string hangSanXuat, string tenPhuongTien, int namSanXuat,float vantocToiDa) {
    this->hangSanXuat = hangSanXuat;
    this->tenPhuongTien = tenPhuongTien;
    this->namSanXuat = namSanXuat;
    this->vantocToiDa = vantocToiDa;
}

void PhuongTienGiaoThong::setHangSanXuat(string hangSanXuat) { this->hangSanXuat = hangSanXuat; }
string PhuongTienGiaoThong::getHangSanXuat() { return this->hangSanXuat; }
void PhuongTienGiaoThong::setTenPhuongTien(string tenPhuongTien) { this->tenPhuongTien = tenPhuongTien; }
string PhuongTienGiaoThong::getTenPhuongTien() { return this->tenPhuongTien; }
void PhuongTienGiaoThong::setNamSanXuat(int namSanXuat) { this->namSanXuat = namSanXuat; }
int PhuongTienGiaoThong::getNamSanXuat() { return this->namSanXuat; }
void PhuongTienGiaoThong::setVantocToiDa(float vantocToiDa) { this->vantocToiDa = vantocToiDa; }
float PhuongTienGiaoThong::getVantocToiDa() { return this->vantocToiDa; }

istream& operator >> (istream& in, PhuongTienGiaoThong& phuongTien) {
    cout << "Hang san xuat: ";
    getline(in.ignore(numeric_limits<streamsize>::max(), '\n'), phuongTien.hangSanXuat);

    cout << "Ten phuong tien: ";
    getline(in, phuongTien.tenPhuongTien);

    cout << "Nam san xuat: ";
    in >> phuongTien.namSanXuat;
    in.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore the newline character left in the input buffer

    cout << "Van toc toi da: ";
    in >> phuongTien.vantocToiDa;
    in.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore the newline character left in the input buffer

    return in;
}

ostream& operator<<(ostream& out, const PhuongTienGiaoThong& phuongTien) {
    out << "Hang san xuat: " << phuongTien.hangSanXuat << endl;
    out << "Ten phuong tien: " << phuongTien.tenPhuongTien << endl;
    out << "Nam san xuat: " << phuongTien.namSanXuat << endl;
    out << "Van toc toi da: " << phuongTien.vantocToiDa << endl;
    return out;
}