#include "Header.h"
#pragma once

class PhuongTienGiaoThong
{
    protected:
        string hangSanXuat;
        string tenPhuongTien;
        int namSanXuat;
        float vantocToiDa;
    public:
        PhuongTienGiaoThong();
        ~PhuongTienGiaoThong();

        PhuongTienGiaoThong(string hangSanXuat, string tenPhuongTien, int namSanXuat,float vantocToiDa);
        void setHangSanXuat(string hangSanXuat);
        string getHangSanXuat();
        void setTenPhuongTien(string tenPhuongTien);
        string getTenPhuongTien();
        void setNamSanXuat(int namSanXuat);
        int getNamSanXuat();
        void setVantocToiDa(float vantocToiDa);
        float getVantocToiDa();

        friend istream& operator >> (istream& in, PhuongTienGiaoThong& phuongTien);
        friend ostream& operator << (ostream& out, const PhuongTienGiaoThong& phuongTien);
};