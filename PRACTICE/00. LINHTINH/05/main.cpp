#include "Account.h"

int main() {
    Account a;
    fstream f;
    f.open("account.txt", ios::in);
    a.setAccount(f);
    system("cls");
    a.printAccount();
    f.close();
    return 0;
}