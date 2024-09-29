#include "Header.h"

class SinhVien
{
    private:
        string MSV;
        string fullName;
        string dayOfBirth;
        double GPA;
        double DRL;
    public:
        // Contructor & Dectructor
        SinhVien(string MSV = "", string fullName = "", string dayOfBirth = "", double GPA = 0.0, double DRL = 0.0);
        SinhVien(const SinhVien& SV);
        ~SinhVien();

        // Setter
        void setMSV(string MSV);
        void setFullName(string fullName);
        void setDayOfBirth(string dayOfBirth);
        void setGPA(double GPA);
        void setDRL(double DRL);

        // Getter
        string getMSV() const;
        string getFullName() const;
        string getDayOfBirth() const;
        double getGPA() const;
        double getDRL() const;

        // Input & Output
        void inputSV();
        void outputSV();

        bool operator == (const SinhVien& other) const;
};