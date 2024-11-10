#ifndef HEADER_H
#define HEADER_H

#include "Header.h"

//* Cài đặt lớp Date với các phép toán ++, --, +=, >>, <<...
class Date {
private:
    int day, month, year;

public:
    // Constructor
    Date(int d = 0, int m = 0, int y = 0);
    Date(const Date&);

    // Destructor mặc định
    ~Date();

    // Setter
    void setDay(int);
    void setMonth(int);
    void setYear(int);

    // Getter
    int getDay() const;
    int getMonth() const;
    int getYear() const;

    // Operator overloading
    Date& operator++(); // ++d
    const Date operator++(int); // d++
    Date& operator--(); // --d 
    const Date operator--(int); // d--
    Date& operator+=(int);
    Date& operator-=(int);

    bool operator==(const Date&) const;
    bool operator!=(const Date&) const;
    bool operator<=(const Date&) const;
    bool operator>=(const Date&) const;

    // Input & Output
    friend istream& operator>>(istream&, Date&);
    friend ostream& operator<<(ostream&, const Date&);
};

#endif
