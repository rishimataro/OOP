#include "Header.h"

class Point
{
    public:
        static int count;
        const static int t = 10;
    private:
        int xVal;
        int yVal;
        const int n;
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
};
