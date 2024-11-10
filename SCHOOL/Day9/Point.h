#include "Header.h"

class Point
{
    protected:
        int xVal;
        int yVal;
    public:
        Point(int xVal = 0, int yVal = 0);
        Point(const Point& p);
        virtual ~Point();

        void setXVal(int xVal);
        int getXVal() const;
        void setYVal(int yVal);
        int getYVal() const;

        virtual void show();
        void A();

        // * Đa năng hóa toán tử nhập xuất ( >> << )
        friend ostream& operator << (ostream& out, const Point& p);
        friend istream& operator >> (istream& in, Point& p);
};
