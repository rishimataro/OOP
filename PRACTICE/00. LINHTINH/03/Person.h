#include "Header.h"

class Person
{
    protected:
        string ID;
        string hoTen;
    public:
        Person();
        ~Person();
        Person(string ID, string hoTen);
        
        void setID(string ID);
        string getID() const;
        void setHoTen(string hoTen);
        string getHoTen() const;

        void input();
        void output() const;
};
