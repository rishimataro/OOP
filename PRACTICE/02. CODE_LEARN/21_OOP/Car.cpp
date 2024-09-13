#include "Transport.cpp"
#include <vector>
#pragma once

class Car : public Transport
{
    private:
        int numberSeat;
        string engineType;
    public:
        Car() {

        }

        Car(string manufacturer, string name, int year, int speed, int numberSeat, string engineType) : Transport(manufacturer, name, year, speed) {
            this->numberSeat = numberSeat;
            this->engineType = engineType;
        }

        int getNumberSeat() {
            return this->numberSeat;
        }

        string getEngineType() {
            return this->engineType;
        }

        double getSpeedBasic() {
            return getSpeed() / this->numberSeat;
        }

        void display() {
            Transport::display();
            cout << "Number Seat: " << numberSeat << endl;
            cout << "Engine Type: " << engineType << endl;
            cout << "Speed Basic: " << getSpeedBasic() << endl;
        }

        static vector<Car> getCarHaveMaxSpeedBasic(vector<Car> vt) {
            vector<Car> v;
            int max = vt[0].getSpeedBasic();
            int k;
            for (int i = 1; i < vt.size(); i++) {
                if (vt[i].getSpeedBasic() > max) {
                    max = vt[i].getSpeedBasic();
                    k = i;
                }
            }
            v.push_back(vt[k]);
            return v;
        }

        static vector<Car> getCarHaveMaxSeat(vector<Car> vt) {
            vector<Car> v;
            int max = vt[0].numberSeat;
            int k;
            for (int i = 1; i < vt.size(); i++) {
                if (vt[i].numberSeat > max) {
                    max = vt[i].numberSeat;
                    k = i;
                }
            }
            v.push_back(vt[k]);
            return v;
        }
};