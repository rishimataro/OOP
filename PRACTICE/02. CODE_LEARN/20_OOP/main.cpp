#include "Subject.cpp"
#include "Student.cpp"

int main() {
    vector<Subject> subjects;
    subjects.push_back(Subject("OOP", 9.9, 3, 300));
    subjects.push_back(Subject("Math", 8.5, 4, 400));
    
    Student x("1", "Nguyen Minh Hieu", subjects);
    x.display();
    return 0;
}