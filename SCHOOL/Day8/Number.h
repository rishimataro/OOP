#include "Header.h"

class Number
{
private:
    double d;
public:
    Number(double = 0.0);
    ~Number();
    operator int();
    operator double();
};

