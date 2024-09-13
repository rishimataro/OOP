#include <iostream>
#include "CThuVien.h"

using namespace std;

int main() {
    CThuVien *x = new CThuVien;
    int choice; 
    while(true) {
        system("cls");
        cout << "\n\n\t\t>>>>> THU VIEN <<<<<";
        cout << "\n\t1. Nhap thong tin.";
        cout << "\n\t2. Xuat thong tin.";
        cout << "\n\t0. Thoat.";
        cout << "\n\n\t\t--------------------";
        cout << "\n\tNhap lua chon: "; cin >> choice;

        if(choice == 1) {
            x->input();
        }
        else if(choice == 2) {
            x->output();
        }
        else if(choice == 0) {
            cout << "\n\tCam on ban da ghe den thu vien!" << endl;
            break;
        }
        else {
            cout << "\nLua chon khong hop le! Vui long nhap lai!";
            system("pause");
        }
    }

    delete x;

    return 0;
}