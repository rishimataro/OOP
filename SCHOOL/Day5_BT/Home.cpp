#include "Home.h"

bool isAscending(const SinhVien& a, const SinhVien& b) {
    return a.getGPA() < b.getGPA();
}

bool isDescending(const SinhVien& a, const SinhVien& b) {
    return a.getGPA() > b.getGPA();
}

void home() {
    SinhVien_management SV;
    SinhVien a, *arr;
    int choice, dem, k;
    string str;

    do {
        system("cls");
        cout << "\n\t------------- QUAN LY SINH VIEN -------------" << endl;
        cout << "\t1. Them 1 sinh vien." << endl;
        cout << "\t2. Them nhieu sinh vien." << endl;
        cout << "\t3. Xoa sinh vien o cuoi danh sach." << endl;
        cout << "\t4. Xoa 1 sinh vien o vi tri bat ki." << endl;
        cout << "\t5. Cap nhat thong tin sinh vien." << endl;
        cout << "\t6. Tim kiem sinh vien theo ten." << endl;
        cout << "\t7. Sap xep sinh vien theo GPA." << endl;
        cout << "\t8. Xuat thong tin sinh vien." << endl;
        cout << "\t9. Xem so luong sinh vien." << endl;
        cout << "\t0. Thoat chuong trinh." << endl;
        cout << "\t---------------------------------------------" << endl;
        cout << "\n\tLua chon cua ban: ";
        cin >> choice;
        cin.ignore();
        switch (choice) {   
            case 1:
                a.inputSV();
                SV.addLast(a);
                break;
            case 2:
                cout << "\tSo sinh vien ban muon nhap: "; cin >> dem;
                arr = new SinhVien[dem];
                for (int i = 0; i < dem; i++) {
                    cout << "\n\tSINH VIEN THU " << i + 1 << endl;
                    arr[i].inputSV();
                }
                SV.addRange(arr, dem);
                break;
            case 3:
                SV.removeLast();
                break;
            case 4:
                if(SV.getCount() == 0) {
                    cout << "Danh sach rong!" << endl;
                    break;
                }
                cout << "\tNhap vi tri sinh vien can xoa (0 - " << SV.getCount() - 1 << "): ";
                cin >> k;
                if (k >= 0 && k < SV.getCount()) {
                    SV.removeAt(SV.getSinhVien(k)); // Xóa sinh viên tại vị trí đã chỉ định
                } else {
                    cout << "\t<!> Vi tri khong hop le!" << endl;
                }
                break;
            case 5:
                cout << "\tNhap MSV cua sinh vien can cap nhat: "; cin >> str;
                SV.update(str);
                break;
            case 6:
                cout << "\tTen sinh vien can tim: "; getline(cin, str); cout << endl;
                SV.searchName(str);
                break;
            case 7:
                cout << "\n\t1. Sap xep tang dan." << endl;
                cout << "\t2. Sap xep giam dan." << endl;
                cout << "\t---------------------------------------------" << endl;
                cout << "\tLua chon cua ban: "; cin >> k;
                if (k == 1) {
                    SV.sortGPA(isAscending);
                }
                else if (k == 2) {
                    SV.sortGPA(isDescending);
                }
                break;
            case 8:
                SV.displayAll();
                break;
            case 9:
                cout << "\tSo luong sinh vien: " << SV.getCount() << endl;
                break;
            case 0:
                return;
            default:
                cout << "\tLua chon khong hop le. Vui long nhap lai." << endl;
        }
        system("pause");
    } while (true);
    
}