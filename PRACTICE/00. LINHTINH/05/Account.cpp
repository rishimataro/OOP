#include "Account.h"

//* Constructor & Destructor
Account::Account(string ID_acc, string password, string userName, int role)
{
    this->ID_acc = ID_acc;
    this->password = password;
    this->userName = userName;
    this->role = role;
}

Account::Account(const Account &another)
{
    this->ID_acc = another.ID_acc;
    this->password = another.password;
    this->userName = another.userName;
    this->role = another.role;
}

Account::~Account() {}

//* Setter
void Account::setID(const string &ID_acc) { this->ID_acc = ID_acc; }
void Account::setPassword(const string &password) { this->password = password; }
void Account::setUserName(const string &userName) { this->userName = userName; }
void Account::setRole(const int &role) { this->role = role; }

//* Getter
string Account::getID() const { return this->ID_acc; }
string Account::getPassword() const { return this->password; }
string Account::getUserName() const { return this->userName; }
int Account::getRole() const { return this->role; }

//* Function
// Lấy 1 account từ file
void Account::setAccount(fstream &f)
{
    string roleStr;
    getline(f, this->ID_acc, ';');
    getline(f, this->password, ';');
    getline(f, this->userName, ';');
    getline(f, roleStr, ';');

    // Chuyển đổi từ chuỗi sang số nguyên
    this->role = stoi(roleStr);
}

// Lưu 1 account vào file
void Account::saveAccount(ofstream &f)
{
    f << this->ID_acc << ";" << this->password << ";" << this->userName << ";" << this->role;
}

// In thông tin 1 account
void Account::printAccount()
{
    // box()
    // cout << "ID_acc: " << this->ID_acc << endl;
    // cout << "Password: " << this->password << endl;
    // cout << "UserName: " << this->userName << endl;
    // cout << "Role: " << this->role << endl;

    int x1 = whereX();
    int y1 = whereY();
    cout << "   " << this->ID_acc;
    gotoXY(x1 + 20, y1);
    cout << this->userName;
    gotoXY(x1 + 40, y1);
    cout << this->password;
    gotoXY(x1 + 60, y1);
    cout << this->role;
}