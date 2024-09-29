#include "Header.h"
#pragma once
#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
    private:
        string ID_acc;
        string password;
        string userName;
        int role;
    public:
        //* Constructor & Destructor
        Account(string ID_acc = "", string password = "", string userName = "", int role = 0);
        Account(const Account &another);
        ~Account();

        //* Setter
        void setID(const string& ID_acc);
        void setPassword(const string& password);
        void setUserName(const string& userName);
        void setRole(const int& role);

        //* Getter
        string getID() const;
        string getPassword() const;
        string getUserName() const;
        int getRole() const;

        //* Function
        // Lấy 1 account từ file
        void setAccount(fstream &f);    
        // Lưu 1 account vào file
        void saveAccount(ofstream &f);
        // In thông tin 1 account
        void printAccount();
};

#endif