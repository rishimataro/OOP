#include <iostream>
#include <string>

using namespace std;

class Student {
    private:
        string name;
        char gender;
    public:
        Student();
        Student(string name);
        Student(char gender);
        Student(string name, char gender);
        void display();
};

Student::Student(){
    name = "Unknow";
    gender = 'u';
}

Student::Student(string name){
    this->name = name;
    this->gender = 'u';
}

Student::Student(char gender){
    this->name = "Unknow";
    this->gender = gender;
}

Student::Student(string name, char gender){
    this->name = name;
    this->gender = gender;
}

void Student::display(){
    cout << "Name: " << name << endl;
    if(gender == 'm'){
        cout << "Gender: Male" << endl;
    }
    else if(gender == 'f'){
        cout << "Gender: Female" << endl;
    }
    else if(gender == 'u'){
        cout << "Gender: Unknow" << endl;
    }
}

