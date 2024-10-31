// >encaptulation:-Encapsulation is the concept of hiding the implementation details of an object from the outside world and only exposing the necessary information through public methods.
#include <iostream>
#include <string>

class Employee {
private:
    std::string name;
    int age;
    double salary;

public:
    // Constructor
    Employee(std::string name, int age, double salary) {
        this->name = name;
        this->age = age;
        this->salary = salary;
    }

    // Public method to get employee details
    void displayEmployeeDetails() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "Salary: " << salary << std::endl;
    }

    // Public method to update employee salary
    void updateSalary(double newSalary) {
        salary = newSalary;
    }
};

int main() {
    Employee emp("John Doe", 30, 5000.0);
    emp.displayEmployeeDetails();

    emp.updateSalary(6000.0);
    emp.displayEmployeeDetails();
    return 0;
}