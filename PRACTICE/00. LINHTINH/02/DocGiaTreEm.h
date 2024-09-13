#pragma once
#include <iostream>
#include <string>
#include "DocGia.h"
using namespace std;

class DocGiaTreEm : public DocGia   // children
{
    private:
        string representative;
    public:
        void input();
        void output();
        int cardCalculation();

        DocGiaTreEm();
        ~DocGiaTreEm();
};