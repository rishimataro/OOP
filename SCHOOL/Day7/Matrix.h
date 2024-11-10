#include <iostream>
using namespace std;

class Matrix
{
private:
    int **p;
    int col, row;
    int count;
public:
    Matrix(int = 0, int = 0);
    Matrix(const Matrix &);
    ~Matrix();
    friend ostream &operator<<(ostream &, const Matrix &);
    friend istream &operator>>(istream &, Matrix &);
    int& operator()(const int&, const int&);
};
