#include "Header.h"

class Point
{
    private:
        int xVal;
        int yVal;
    public:
        Point(int xVal = 0, int yVal = 0);
        Point(const Point& p);
        ~Point();

        void setXVal(int xVal);
        int getXVal() const;
        void setYVal(int yVal);
        int getYVal() const;

        void show();
        void tinhTien(int x);

        friend void changePoint(Point& p);
        // * Đa năng hóa toán tử
        // Cách 1: dùng hàm bạn
        friend Point operator+(const Point& p1, const Point& p2);
        // Cách 2: khai báo là hàm thành viên
        Point operator-(const Point& another);

        // * Đa năng hóa toán tử nhập xuất ( >> << )
        friend ostream& operator << (ostream& out, const Point& p);
        friend istream& operator >> (istream& in, Point& p);
};