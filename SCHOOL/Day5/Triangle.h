#include "Header.h"
#include "Point.h"

class Triangle
{
    private:
        Point A, B, C;
    public:
        Triangle(Point A, Point B, Point C);
        Triangle(int xa, int ya, int xb, int yb, int xc, int yc);
        ~Triangle();

        void show();
};
