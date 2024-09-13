#include <iostream>
#include <string>
#pragma once

using namespace std;

class Person
{
    private:
        string name;
        string address; 
    public:
        Person(string name, string address) {
            this->name = name;
            this->address = address;
        }

        void setName(string name) {
            this->name = name;
        }

        void setAddress(string address) {
            this->address = address;
        }

        string getName() {
            return name;
        }

        string getAddress() {
            return address;
        }

        virtual void display() = 0;
};
