#include "Header.h"
#include "Oto.h"

Oto::Oto() {
    this->soChoNgoi = 0;
    this->kieuDongCo = "";
}
Oto::~Oto() { }

Oto::Oto(string hangSanXuat, string tenPhuongTien, int namSanXuat,float vantocToiDa, int soChoNgoi, string kieuDongCo): PhuongTienGiaoThong(hangSanXuat, tenPhuongTien, namSanXuat, vantocToiDa) {
    this->soChoNgoi = soChoNgoi;
    this->kieuDongCo = kieuDongCo;
}

void Oto::setSoChoNgoi(int soChoNgoi) { this->soChoNgoi = soChoNgoi; }
int Oto::getSoChoNgoi() { return this->soChoNgoi; }
void Oto::setKieuDongCo(string kieuDongCo) { this->kieuDongCo = kieuDongCo; }
string Oto::getKieuDongCo() { return this->kieuDongCo; }

float Oto::getVantoCoSo() const { 
    return vantocToiDa / 4;
}

bool Oto::operator > (const Oto &other) const {
    return this->getVantoCoSo() > other.getVantoCoSo();
}

istream& operator >> (istream& in, Oto& oto) {
    in >> static_cast<PhuongTienGiaoThong&>(oto); // Call the base class operator>>

    cout << "Nhap so cho ngoi: ";
    in >> oto.soChoNgoi;
    in.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore the newline character left in the input buffer

    cout << "Nhap kieu dong co: ";
    getline(in, oto.kieuDongCo);

    return in;
}

ostream& operator << (ostream& out, const Oto& oto) {
    out << static_cast<const PhuongTienGiaoThong&>(oto);
    out << "So cho ngoi: " << oto.soChoNgoi << endl;
    out << "Kieu dong co: " << oto.kieuDongCo << endl;
    out << "Van toc co so: " << oto.getVantoCoSo() << " km/h" << endl;
    return out;
}