#include "PhongKS.h"

// Contructor & Destructor
PhongKS::PhongKS(string maPhong, int nguoiToiDa, bool tinhTrang, Date ngayNhanPhong, Date ngayTraPhong, unsigned long long giaPhong) {
    this->maPhong = maPhong;
    this->nguoiToiDa = nguoiToiDa;
    this->tinhTrang = tinhTrang;
    this->ngayNhanPhong = ngayNhanPhong;
    this->ngayTraPhong = ngayTraPhong;
    this->giaPhong = giaPhong;
}

PhongKS::PhongKS(const PhongKS& phongKS) {
    this->maPhong = phongKS.maPhong;
    this->nguoiToiDa = phongKS.nguoiToiDa;
    this->tinhTrang = phongKS.tinhTrang;
    this->ngayNhanPhong = phongKS.ngayNhanPhong;
    this->ngayTraPhong = phongKS.ngayTraPhong;
    this->giaPhong = phongKS.giaPhong;
}

PhongKS::~PhongKS() { }

// Setter
void PhongKS::setMaPhong(string maPhong) { this->maPhong = maPhong; }
void PhongKS::setNguoiToiDa(int nguoiToiDa) { this->nguoiToiDa = nguoiToiDa; }
void PhongKS::setTinhTrang(bool tinhTrang) { this->tinhTrang = tinhTrang; }
void PhongKS::setNgayNhanPhong(Date ngayNhanPhong) { this->ngayNhanPhong = ngayNhanPhong; }
void PhongKS::setNgayTraPhong(Date ngayTraPhong) { this->ngayTraPhong = ngayTraPhong; }
void PhongKS::setGiaPhong(unsigned long long giaPhong) { this->giaPhong = giaPhong; }

// Getter
string PhongKS::getMaPhong() const { return this->maPhong; }
int PhongKS::getNguoiToiDa() const { return this->nguoiToiDa; }
bool PhongKS::getTinhTrang() const { return this->tinhTrang; }
Date PhongKS::getNgayNhanPhong() const { return this->ngayNhanPhong; }
Date PhongKS::getNgayTraPhong() const { return this->ngayTraPhong; }
unsigned long long PhongKS::getGiaPhong() const { return this->giaPhong; }

bool PhongKS::isCheckOutDataValid() const {
    Date currentDate = PhongKS::getCurrentDate();

    if(ngayTraPhong.getYear() > currentDate.getYear()) return true;
    else if(ngayTraPhong.getYear() == currentDate.getYear()) {
        if(ngayTraPhong.getMonth() > currentDate.getMonth()) return true;
        else if(ngayTraPhong.getMonth() == currentDate.getMonth()) {
            return ngayTraPhong.getDay() >= ngayTraPhong.getDay();
        }
    }

    return false;
}

Date PhongKS::getCurrentDate() {
    time_t now = time(0);
    tm *ltm = localtime(&now);

    int currentDay = ltm->tm_mday;
    int currentMonth = 1 + ltm->tm_mon;
    int currentYear = 1900 + ltm->tm_year;

    return Date(currentDay, currentMonth, currentYear);
}

// Input & Output
istream& operator>> (istream& in, PhongKS &phongKS) { 
    cout << "Nhap ma phong (ky tu dau la tang 1 - 5, 4 ky tu sau la so 0 - 9): "; in >> phongKS.maPhong;
    cout << "Nhap so nguoi toi da: "; in >> phongKS.nguoiToiDa;
    cout << "Nhap tinh trang (1 la phong trong, 0 la da co nguoi): "; in >> phongKS.tinhTrang;

    if(!phongKS.tinhTrang) {
        cout << "Nhap ngay nhan phong: "; in >> phongKS.ngayNhanPhong;
        do
        {
            cout << "Nhap ngay tra phong: "; in >> phongKS.ngayTraPhong;
            if(!phongKS.isCheckOutDataValid()) {
                cerr << "\n\t<!> Ngay tra phong phai lon hon hoac bang ngay hien tai! Vui long nhap lai!" << endl;
            }
        } while (!phongKS.isCheckOutDataValid());
    }
    
    cout << "Nhap gia phong: "; in >> phongKS.giaPhong;

    return in;
}

ostream& operator<< (ostream& out, const PhongKS &phongKS) { 
    out << "Ma phong (ky tu dau la tang 1 - 5, 4 ky tu sau la so 0 - 9): " << phongKS.maPhong << endl;
    out << "So nguoi toi da: " << phongKS.nguoiToiDa << endl;
    out << "Tinh trang: " << (phongKS.tinhTrang ? "Trong" : "Da co nguoi") << endl;
    if(!phongKS.tinhTrang) {
        out << "Ngay nhan phong: " << phongKS.ngayNhanPhong << endl;
        out << "Ngay tra phong: " << phongKS.ngayTraPhong << endl;
    }
    out << "Gia phong: " << phongKS.giaPhong << " VND" << endl;
    return out;
}
