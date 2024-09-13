#include <math.h>

class Point {
    private:
        double x;
        double y;
    public:
        Point(){

        }

        Point(double x, double y) {
            this->x = x;
            this->y = y;
        }

        void setXY(double x, double y) {
            this->x = x;
            this->y = y;
        }

        void setX(double x) {
            this->x = x;
        }

        void setY(double y) {
            this->y = y;
        }

        double getX() {
            return x;
        }

        double getY() {
            return y;
        }

        double distance(double x, double y) {
            double r;
            r = sqrt(pow((this->x - x), 2) + pow((this->y - y), 2));
            return r;
        }

        double distance(Point another) {
            double tmp = distance(another.x, another.y);
            return tmp;
        }
};