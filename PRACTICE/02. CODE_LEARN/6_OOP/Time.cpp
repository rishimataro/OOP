#include <string>
#include <iostream>
using namespace std;

class Time {
    private:
        int hour;
        int minute;
        int second;
    
    public:
        Time(int hour, int minute, int second) {
            this->hour = hour;
            this->minute = minute;
            this->second = second;
        }

        void setTime(int hour, int minute, int second) {
            this->hour = hour;
            this->minute = minute;
            this->second = second;
        }

        void setHour(int hour) {
            this->hour = hour;
        }

        void setMinute(int minute) {
            this->minute = minute;
        }

        void setSecond(int second) {
            this->second = second;
        }

        int getHour() {
            return hour;
        }

        int getMinute() {
            return minute;
        }

        int getSecond() {
            return second;
        }

        void nextSecond() {
            second++;
            if(second == 60) {
                second = 0;
                minute++;
                if(minute == 60) {
                    minute = 0;
                    hour++;
                    if(hour == 24) {
                        hour = 0;
                    }
                }
            }
        }

        void previousSecond() {
            second--;
            if(second == -1) {
                second = 59;
                minute--;
                if(minute == -1) {
                    minute = 59;
                    hour--;
                    if(hour == -1) {
                        hour = 23;
                    }
                }
            }
        }

        void display() {
            string hour = to_string(this->hour);
            string minute = to_string(this->minute);
            string second = to_string(this->second);

            if(hour.length() == 1) {
                hour = "0" + hour;
            }

            if(minute.length() == 1) {
                minute = "0" + minute;
            }

            if(second.length() == 1) {
                second = "0" + second;
            }

            cout << hour << ":" << minute << ":" << second << endl;
        }
};