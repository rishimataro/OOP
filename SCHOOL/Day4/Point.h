#include "Header.h"

class Point
{
    private:
        int xVal;
        int yVal;
    public:
        Point();
        Point(int xVal, int yVal);
        Point(const Point& p);
        ~Point();

        void show();
        void tinhTien(int x);
};
