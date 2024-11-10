#include "Point3D.h"

class Point4D : public Point3D
{
    private:
        int tVal;
    public:
        Point4D(int = 0, int = 0, int = 0, int  = 0);
        ~Point4D();

        virtual void show();
};