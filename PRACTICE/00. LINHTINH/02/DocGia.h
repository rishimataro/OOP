#pragma once
#include <iostream>
#include <string>
using namespace std;

class DocGia    // parent
{
    protected:
        string fullName;
        string cardCreationDate;
        int validMonths;
    public:
        void input();
        void output();

        DocGia();
        ~DocGia();
};
