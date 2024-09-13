#pragma once
#include <iostream>
#include <string>
#include "DocGia.h"
using namespace std;

class DocGiaNguoiLon : public DocGia   // children
{
    private:
        string CMND;
    public:
        void input();
        void output();
        int cardCalculation();

        DocGiaNguoiLon();
        ~DocGiaNguoiLon();
};
