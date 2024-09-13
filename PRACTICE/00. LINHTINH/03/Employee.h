#include "Header.h"
#include "Person.h"

class Employee : public Person
{
    private:
        int namSinh;
        float heSoLuong;
        static float tienPhuCap;
    public:
        Employee();
        ~Employee();
        Employee(string ID, string hoTen, int namSinh, float heSoLuong);

        void setNamSinh(int namSinh);
        int getNamSinh() const;
        void setHeSoLuong(float heSoLuong);
        float getHeSoLuong() const;
        static void setTienPhuCap(float tienPhuCap);
        static float getTienPhuCap();

        float getLuong();
        bool operator > (const Employee another) const;

        void input();
        void output();
};
