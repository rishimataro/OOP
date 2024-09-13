#include "Subject.cpp"
#include <vector>
#pragma once

class Student {
    private:
        string id;
        string name;
        vector<Subject> s;
    public:
        Student() {

        }

        Student(string id, string name, vector<Subject> s) {
            this->id = id;
            this->name = name;
            this->s = s;
        }

        string getId() {
            return this->id;
        }

        string getName() {
            return this->name;
        }

        vector<Subject> getS() {
            return s;
        }

        long getSumMoney() {
            long sum = 0;
            for (int i = 0; i < s.size(); i++) {
                sum += s[i].getMoney()*s[i].getNumberCredit();
            }
            return sum;
        }

        double avgPoint() {
            double avg;
            for (int i = 0; i < s.size(); i++) {
                avg += s[i].getPoint();
            }
            avg /= s.size();
            return avg;
        }

        void display() {
            cout << "Id: " << id << endl;
            cout << "Name Student: " << name << endl;
            cout << "List Subject" << endl;
            for (int i = 0; i < s.size(); i++) {
                cout << "Name Subject: " << s[i].getNameSub() << endl;
                cout << "Number Credit: " << s[i].getNumberCredit() << endl;
                cout << "Money Of One Credit: " << s[i].getMoney() << endl;
            }
            cout << "Sum Money Have To Pay: " << getSumMoney() << endl;
            cout << "Average Point: " << avgPoint() << endl;
            
        }
};