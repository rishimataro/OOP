#pragma once
#include <iostream>
using namespace std;

//* Khuon mau lop
template<class T>
class Vector
{
    private:
        T *Data;
        int size;
    public:
        // * Constructor & Destructor
        Vector();
        Vector(int, const T&);
        ~Vector();

        // * Display
        void show();
};
