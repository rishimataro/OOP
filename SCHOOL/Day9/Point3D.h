#include "Header.h"
#include "Point.h"

class Point3D : public Point
{
    protected:
        int zVal;
    public:
        Point3D(int x = 1, int y = 2, int z = 3);
        virtual ~Point3D();

        void setZVal(int z);
        int getZVal();

        virtual void show();
        // friend operator>>(istream& in, Point3D& p);
};