#include "A.h"
#include "B.h"

class C : public A, public B
{
    private:
        int a, b, c, d;
    public:
        C(int = 0, int = 0, int = 0, int = 0);
        ~C();

        void AB();
};
