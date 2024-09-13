#include <iostream>
#include <string>
#include <iomanip>
#define s() s
using namespace std;

class SinhVien
{
    private:
        string id;
        string name;
        string grade;
        string birth;
        double gpa;
    public:
        SinhVien();
        SinhVien(string id, string name, string grade, string birth, double gpa);
        string getId();
        string getName();
        string getGrade();
        string getBirth();
        double getGpa();
        friend istream& operator >> (istream& in, SinhVien& s);
        friend ostream& operator << (ostream& out, SinhVien s);
};

SinhVien::SinhVien() {

}

SinhVien::SinhVien(string id, string name, string grade, string birth, double gpa)
{
    this->id = id;
    this->name = name;
    this->grade = grade;
    this->birth = birth;
    this->gpa = gpa;
}

string SinhVien::getId() {
    return this->id;
}

string SinhVien::getName() {
    return this->name;
}

string SinhVien::getGrade() {
    return this->grade;
}

string SinhVien::getBirth() {
    return this->birth;
}

double SinhVien::getGpa() {
    return this->gpa;
}

istream& operator >> (istream& in, SinhVien& s) {
    in >> s.id;
    in.ignore();
    getline(in, s.name);
    in >> s.grade >> s.birth >> s.gpa;
    if(s.birth[2] != '/') s.birth = "0" + s.birth;
    if(s.birth[5] != '/') s.birth.insert(3, "0");
    return in;
}

ostream& operator << (ostream& out, SinhVien s) {
    out << s.id << " " << s.name << " " << s.grade << " " << s.birth << " " << fixed << setprecision(2) << s.gpa << endl;
    return out;
}

int main() {
    SinhVien s();
    cin >> s;
    cout << s;
    return 0;
}