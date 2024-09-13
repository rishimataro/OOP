#include "Employee.h"

int main() {
    SetConsoleOutputCP(65001);
    int choice;
    Person *person = new Person;
    vector<Employee *> ds_employee;

    while (true) {
        system("cls");
        cout << "\n\n\t\t\tQUẢN LÝ NHÂN VIÊN";
        cout << "\n\t\t---------------------------------------------------------------------------";
        cout << "\n\t\t1. Nhập thông tin 1 người.";
        cout << "\n\t\t2. Hiển thị thông tin 1 người vừa nhập.";
        cout << "\n\t\t3. Nhập thông tin nhân viên.";
        cout << "\n\t\t4. Hiển thị thông tin nhân viên.";
        cout << "\n\t\t5. Sắp xếp và hiển thị nhân viên theo thứ tự giảm dần theo hệ số lương.";
        cout << "\n\t\t0. Thoát chương trình.";
        cout << "\n\t\t---------------------------------------------------------------------------";
        cout << "\n\t\t\tNhập lựa chọn của bạn: "; cin >> choice; cin.ignore();
        
        if(choice == 1) {
            cout << "\n\tNHẬP THÔNG TIN MỘT NGƯỜI" << endl;
            person->input();
            cout << endl;
            system("pause");
        }
        else if(choice == 2) {
            cout << "\n\tHIỂN THỊ THÔNG TIN MỘT NGƯỜI" << endl;
            person->output();
            cout << endl;
            system("pause");
        }
        else if(choice == 3) {
            Employee *e = new Employee;
            cout << "\n\tNHẬP THÔNG TIN NHÂN VIÊN" << endl;
            e->input();
            ds_employee.push_back(e);
            cout << endl;
            system("pause");
        }
        else if(choice == 4) {
            cout << "\n\tHIỂN THỊ THÔNG TIN NHÂN VIÊN";
            for (int i = 0; i < ds_employee.size(); i++) {
                cout << "\n\tNhân viên " << i + 1 << ":" << endl;
                ds_employee[i]->output();
                cout << "Lương: " << ds_employee[i]->getLuong() << " VNĐ\n\n";
            }
            system("pause");
        }
        else if(choice == 5) {
            sort(ds_employee.begin(), ds_employee.end(), greater<Employee*>());
            cout << "\n\tHIỂN THỊ THÔNG TIN SAU KHI SẮP XẾP NHÂN VIÊN";
            for (int i = 0; i < ds_employee.size(); i++) {
                cout << "\n\tNhân viên " << i + 1 << ": " << ds_employee[i]->getHoTen() << "\n\n";
            }
            system("pause");
        }
        else if(choice == 0) {
            cout << "\n\t\tCẢM ƠN BẠN ĐÃ SỬ DỤNG ỨNG DỤNG!" << "\n\n";
            break;
        }
        else {
            cout << "\n\t\tLựa chọn không hợp lệ! Vui lòng chọn lại!" << endl;
            system("pause");
        }
    }
    return 0;
}