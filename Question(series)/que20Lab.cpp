// Implement a real case scenario by a proper C++ code to provide the solution to Diamond Problem in C++
#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a){
        name = n;
        age = a;
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Manager : virtual public Person {
protected:
    string department;

public:
    Manager(string n, int a, string dept) : Person(n, a), department(dept) {}

    void displayManager() {
        cout << "Department: " << department << endl;
    }
};

class Engineer : virtual public Person {
protected:
    string skillset;

public:
    Engineer(string n, int a, string skill) : Person(n, a), skillset(skill) {}

    void displayEngineer() {
        cout << "Skillset: " << skillset << endl;
    }
};

class TechnicalManager : public Manager, public Engineer {
private:
    int teamSize;

public:
    TechnicalManager(string n, int a, string dept, string skill, int team)
        : Person(n, a), Manager(n, a, dept), Engineer(n, a, skill), teamSize(team) {}

    void displayTechnicalManager() {
        displayPerson();
        displayManager();
        displayEngineer();
        cout << "Team Size: " << teamSize << endl;
    }
};

int main() {
    TechnicalManager tm("Alice Johnson", 35, "Software Development", "C++ and AI", 10);

    cout << "Technical Manager Details:" << endl;
    tm.displayTechnicalManager();

    return 0;
}
