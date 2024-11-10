#include "Header.h"
#include "Point.h"

class Point3D : public Point
{
    private:
        int zVal;
    public:
        Point3D(int x = 1, int y = 2, int z = 3);
        ~Point3D();

        void setZVal(int z);
        int getZVal();

        void show3D();
};