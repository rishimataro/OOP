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
};
