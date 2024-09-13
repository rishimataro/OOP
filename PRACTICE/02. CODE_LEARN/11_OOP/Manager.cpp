#include "Employee.cpp"

class Manager : public Employee {
    private:
        int bonus;
    public:
        Manager(string name, int salary, int bonus) :Employee(name, salary) {
            this->bonus = bonus;
        }

        void setBonus(int bonus) {
            this->bonus = bonus;
        }

        int getBonus() {
            return bonus;
        }

        void display() {
            int salary = getSalary();
            salary += bonus;
            Employee::display();
        }
};