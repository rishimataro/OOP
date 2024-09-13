#include<bits/stdc++.h>
using namespace std;

class soPhuc
{
    private:
        int thuc;
        int ao;
    public:
        friend istream& operator >> (istream& in, soPhuc& a);
        friend ostream& operator << (ostream& out, soPhuc a);    
        soPhuc operator + (soPhuc another);
        soPhuc operator - (soPhuc another);
        bool operator == (soPhuc another);
};

istream& operator >> (istream& in, soPhuc& a){
    cout << "Nhap so thuc va so ao cua so phuc: ";
    in >> a.thuc >> a.ao;
    return in;
}

ostream& operator << (ostream& out, soPhuc a){
    out << "So phuc: " << a.thuc << "i + " << a.ao << endl;
    return out;
}

soPhuc soPhuc::operator + (soPhuc another){
    soPhuc tong;
    tong.thuc = this->thuc + another.thuc;
    tong.ao = this->ao + another.ao;
    return tong;
}

soPhuc soPhuc::operator - (soPhuc another){
    soPhuc hieu;
    hieu.thuc = this->thuc - another.thuc;
    hieu.ao = this->ao - another.ao;
    return hieu;
}

bool soPhuc::operator == (soPhuc another){
    return this->thuc == another.thuc && this->ao == another.ao;
}

int main() {
    soPhuc x, y;
    cin >> x >> y;

    soPhuc tong = x + y;
    soPhuc hieu = x - y;

    cout << tong << endl;
    cout << hieu << endl;

    if (x == y) cout << "x bang y\n";
    else cout << "x khong bang y\n";

    return 0;
}
