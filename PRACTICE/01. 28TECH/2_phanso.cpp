#include <iostream>
using namespace std;

int UCLN(int a, int b) {
    if (b == 0) return a;
    return UCLN(b, a % b);
}

class PhanSo {
    private:
        int tu;
        int mau;
    public:
        PhanSo(int tu, int mau);
        friend istream& operator >> (istream& in, PhanSo& p);
        friend ostream& operator << (ostream& out, PhanSo p);
        void rutgon();
};

PhanSo::PhanSo(int tu, int mau) {
    this->tu = tu;
    this->mau = mau;
}

istream& operator >> (istream& in, PhanSo& p) {
    cout << "Nhap tu va mau cua phan so: ";
    in >> p.tu >> p.mau;
    return in;
}

ostream& operator << (ostream& out, PhanSo p) {
    cout << "Phan so: " << p.tu << "/" << p.mau << endl;
    return out;
}

void PhanSo::rutgon() {
    int ucln = UCLN(tu, mau);
    tu /= ucln;
    mau /= ucln;
}

int main() {
    PhanSo p(1, 1);
    cin >> p;
    p.rutgon();
    cout << p;
    return 0;
}