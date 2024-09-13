#include "CThuVien.h"

CThuVien::CThuVien() { }
CThuVien::~CThuVien() { }

void CThuVien::input() {
    int choice;
    while (true) {
        system("cls");
        cout << "\n\n\t\t>>>>> THU VIEN <<<<<";
        cout << "\n\t1. Nhap Doc gia tre em.";
        cout << "\n\t2. Nhap Doc gia nguoi lon.";
        cout << "\n\t0. Thoat.";
        cout << "\n\n\t\t --------------------";
        cout << "\n\tNhap lua chon: "; cin >> choice;
        if(choice == 1) {
            DocGiaTreEm x;
            cout << "\n\n\t\tNHAP THONG TIN DOC GIA TRE EM" << endl;
            x.input();
            ds_TreEm.push_back(x);
        }
        else if(choice == 2) {
            DocGiaNguoiLon y;
            cout << "\n\n\t\tNHAP THONG TIN DOC GIA NGUOI LON" << endl;
            y.input();
            ds_NguoiLon.push_back(y);
        }
        else if (choice == 0) {
            break;
        }
        else {
            cout << "\n\tLua chon khong hop le! Vui long nhap lai!";
            system("pause");
        }
    }
}

void CThuVien::output() {
    int choice;
    while(true) {
        system("cls");
        cout << "\n\n\t\t>>>>> THU VIEN <<<<<";
        cout << "\n\t1. Xuat Doc gia tre em.";
        cout << "\n\t2. Xuat Doc gia nguoi lon.";
        cout << "\n\t0. Thoat.";
        cout << "\n\n\t\t--------------------";
        cout << "\n\tNhap lua chon: "; cin >> choice;

        if(choice == 1) {
            cout << "\n\n\t\tTHONG TIN DOC GIA TRE EM" << endl;
            for (int i = 0; i < ds_TreEm.size(); i++) {
                cout << "\n\tTre em thu " << i + 1 << endl;
                ds_TreEm[i].output(); cout << endl;
                system("pause");
            }
        }
        else if(choice == 2) {
            cout << "\n\n\t\tTHONG TIN DOC GIA NGUOI LON" << endl;
            for (int i = 0; i < ds_NguoiLon.size(); i++) {
                cout << "\n\tNguoi lon thu " << i + 1 << endl;
                ds_NguoiLon[i].output(); cout << endl;
                system("pause");
            }
        }
        else if (choice == 0) {
            break;
        }
        else {
            cout << "\n\tLua chon khong hop le! Vui long nhap lai!";
            system("pause");
            system("cls");
        }
    }
}