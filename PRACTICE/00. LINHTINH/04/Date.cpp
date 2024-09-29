#include "Date.h"

// Constructor & Destructor
Date::Date(int day, int month, int year) {
    this->day = day;
    this->month = month;
    this->year = year;
}

Date::Date(const Date& date) {
    this->day = date.day;
    this->month = date.month;
    this->year = date.year;
}

Date::~Date() { }

// Setter
void Date::setDay(int day) { this->day = day; }
void Date::setMonth(int month) { this->month = month; }
void Date::setYear(int year) { this->year = year; }

// Getter
int Date::getDay() const { return this->day; }
int Date::getMonth() const { return this->month; }
int Date::getYear() const { return this->year; }

// Input & Output
istream& operator>> (istream& in, Date& date) {
    cout << "\n\tNhap ngay: "; in >> date.day;
    cout << "\tNhap thang: "; in >> date.month;
    cout << "\tNhap nam: "; in >> date.year;
    return in;
}

ostream& operator<< (ostream& out, const Date &date) {
    out << date.day << "/" << date.month << "/" << date.year;
    return out;
}