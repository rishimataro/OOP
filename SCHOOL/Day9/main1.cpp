#include "C.h"

int main() {
    C c(1, 2, 3, 4);
    c.A1();
    c.B1();
    c.A::AB();
    c.B::AB();
    c.AB();
    
    return 0;
}