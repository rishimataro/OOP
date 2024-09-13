#include <iostream>
using namespace std;

int UCLN(int a, int b) {
    if (b == 0) return a;
    return UCLN(b, a % b);
}

int BCNN(int a, int b) {
    return a / UCLN(a, b) * b;
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
        friend PhanSo operator + (PhanSo a, PhanSo b);
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

PhanSo operator + (PhanSo a, PhanSo b) {
    PhanSo tong(1, 1);

    int mauchung = BCNN(a.mau, b.mau);

    tong.tu = mauchung/a.mau * a.tu + mauchung/b.mau * b.tu;
    tong.mau = mauchung;

    // tong.tu = a.tu * b.mau + b.tu * a.mau;
    // tong.mau = a.mau * b.mau;

    tong.rutgon();

    return tong;
}

int main() {
    PhanSo p(1, 1), q(1, 1);
    cin >> p >> q;
    cout << p + q;
    return 0;
}