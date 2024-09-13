#include "Point.cpp"
#include <vector>
#include <math.h>
#pragma once

using namespace std;

class PolyLine
{
    private:
        vector<Point> points;
    public:
        PolyLine() {

        }

        PolyLine(vector<Point> points) {
            this->points = points;
        }

        void appendPoint(Point point) {
            points.push_back(point);
        }

        void appendPoint(int x, int y) {
            points.push_back(Point(x, y));
        }

        double getLength() {
            double res = 0;
            for (int i = 0; i < points.size() - 1; i++) {
                res += sqrt(pow(points[i].getX() - points[i + 1].getX(), 2) + pow(points[i].getY() - points[i + 1].getY(), 2));
            }   
            return res;   
        }
};

