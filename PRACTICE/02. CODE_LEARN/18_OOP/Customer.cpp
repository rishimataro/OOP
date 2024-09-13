#include <iostream>
#include <string>
#pragma once
using namespace std;

class Customer
{
    private:
        int id;
        string name;
        double discount;
    public:
        Customer() {

        }

        Customer(int id, string name, double discount) {
            this->id = id;
            this->name = name;
            this->discount = discount;
        }

        int getId() {
            return id;
        }

        void setName(string name) {
            this->name = name;
        }

        string getName() {
            return name;
        }

        void setDicount(double discount) {
            this->discount = discount;
        }

        double getDiscount() {
            return discount;
        }
};