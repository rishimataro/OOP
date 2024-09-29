#include "Header.h"

class Date
{
    private:
        int day;
        int month;
        int year;
    public:
        // Constructor & Destructor
        Date(int day = 0, int month = 0, int year = 0);
        Date(const Date& date);
        ~Date();

        // Setter
        void setDay(int day);
        void setMonth(int month);
        void setYear(int year);

        // Getter
        int getDay() const;
        int getMonth() const;
        int getYear() const;

        // Input & Output
        friend istream& operator>> (istream& in, Date& date);
        friend ostream& operator<< (ostream& out, const Date &date);
};