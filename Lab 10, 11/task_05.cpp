#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    float salary;

public:
    Employee(string n, float s) : name(n), salary(s) {}

    virtual void calculateBonus() {
        cout << name << ": Bonus not defined.\n";
    }

    virtual ~Employee() {}
};

// Derived class: Manager
class Manager : public Employee {
private:
    float performanceRating;

public:
    Manager(string n, float s, float rating)
        : Employee(n, s), performanceRating(rating) {}

    void calculateBonus() override {
        float bonus = salary * (performanceRating / 10);
        cout << name << " (Manager) Bonus: $" << bonus << endl;
    }
};

// Derived class: Engineer
class Engineer : public Employee {
private:
    int skillLevel;

public:
    Engineer(string n, float s, int level)
        : Employee(n, s), skillLevel(level) {}

    void calculateBonus() override {
        float bonus = skillLevel * 500;
        cout << name << " (Engineer) Bonus: $" << bonus << endl;
    }
};

class Intern : public Employee {
public:
    Intern(string n, float s) : Employee(n, s) {}

    void calculateBonus() override {
        cout << name << " (Intern) Bonus: $0 (Not eligible)\n";
    }
};

int main() {
    Employee* emp1 = new Manager("Alice", 80000, 9.2);
    Employee* emp2 = new Engineer("Bob", 60000, 4);
    Employee* emp3 = new Intern("Charlie", 20000);

    emp1->calculateBonus();
    emp2->calculateBonus();
    emp3->calculateBonus();

    // Clean
    delete emp1;
    delete emp2;
    delete emp3;

    return 0;
}
