#include "Point.cpp"
#include <math.h>

class Triangle : public Point
{
    private:
        Point vertice1;
        Point vertice2;
        Point vertice3;
    public:
        Triangle(Point vertice1, Point vertice2, Point vertice3) {
            this->vertice1 = vertice1;
            this->vertice2 = vertice2;
            this->vertice3 = vertice3;
        }

        Triangle(int x1, int y1, int x2, int y2, int x3, int y3) {
            vertice1.setX(x1);
            vertice1.setY(y1);

            vertice2.setX(x2);
            vertice2.setY(y2);

            vertice3.setX(x3);
            vertice3.setY(y3);
        }

        double getPerimeter() {
            double canh1 = sqrt(pow(vertice1.getX() - vertice2.getX(), 2) + pow(vertice1.getY() - vertice2.getY(), 2));
            double canh2 = sqrt(pow(vertice2.getX() - vertice3.getX(), 2) + pow(vertice2.getY() - vertice3.getY(), 2));
            double canh3 = sqrt(pow(vertice1.getX() - vertice3.getX(), 2) + pow(vertice1.getY() - vertice3.getY(), 2));

            return canh1 + canh2 + canh3;
        }
};
