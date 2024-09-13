#include "Header.h"
#include "PhuongTienGiaoThong.h"
#include "Oto.h"

// Hàm nhập và xuất thông tin PhuongTienGiaoThong
void BT1(PhuongTienGiaoThong& p) {
    cout << "Nhap thong tin cua phuong tien: " << endl;
    cin >> p;
    cout << "---------------------------------------------" << endl;

    cout << "Thong tin cua phuong tien vua nhap: " << endl;
    cout << p;
    cout << "---------------------------------------------" << endl;
}

// Hàm nhập và xuất danh sách các đối tượng Oto
void BT2(vector<Oto>& dsOto, const int& n) {
    for (int i = 0; i < n; i++) {
        cout << "Nhap thong tin o to thu " << i + 1 << ": " << endl;
        cin >> dsOto[i];
        cout << endl;
    }
    cout << "---------------------------------------------" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Thong tin cua o to thu " << i + 1 << ": " << endl;
        cout << dsOto[i] << endl;
    }
    cout << "---------------------------------------------" << endl;
}

// Hàm sắp xếp danh sách Oto theo vận tốc cơ sở giảm dần
void BT3(vector<Oto>& dsOto, const int& n) {
    sort(dsOto.begin(), dsOto.end(), greater<Oto>());

    cout << "Danh sach Oto sau khi sap xep: " << endl;
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". " << dsOto[i].getTenPhuongTien() << endl;
    }
    cout << "---------------------------------------------" << endl;
}

// Hàm hiển thị menu
void hienThiMenu() {
    cout << "\n========= MENU =========" << endl;
    cout << "1. Nhap va xuat thong tin PhuongTienGiaoThong" << endl;
    cout << "2. Nhap va xuat danh sach Oto" << endl;
    cout << "3. Sap xep danh sach Oto theo van toc co so giam dan" << endl;
    cout << "0. Thoat chuong trinh" << endl;
    cout << "=========================" << endl;
    cout << "Nhap lua chon cua ban: ";
}

int main() {
    PhuongTienGiaoThong p;
    int n;
    vector<Oto> dsOto;
    int luaChon;

    do {
        hienThiMenu();
        cin >> luaChon;

        switch (luaChon) {
            case 1:
                BT1(p);  // Bài tập 1: Nhập và xuất thông tin phương tiện giao thông
                break;
            case 2:
                cout << "Nhap so luong o to: "; 
                cin >> n; cin.ignore(numeric_limits<streamsize>::max(), '\n');
                dsOto.resize(n);  // Đảm bảo danh sách đủ kích thước
                BT2(dsOto, n);  // Bài tập 2: Nhập và xuất danh sách Oto
                break;
            case 3:
                if (!dsOto.empty()) {
                    BT3(dsOto, n);  // Bài tập 3: Sắp xếp danh sách Oto theo vận tốc cơ sở
                } else {
                    cout << "Danh sach Oto rong. Vui long nhap thong tin Oto truoc!" << endl;
                }
                break;
            case 0:
                cout << "Thoat chuong trinh." << endl;
                break;
            default:
                cout << "Lua chon khong hop le. Vui long chon lai." << endl;
        }
    } while (luaChon != 0);

    return 0;
}
