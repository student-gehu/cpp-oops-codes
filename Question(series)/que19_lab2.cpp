#include <iostream>
#include <string>
using namespace std;

// Base class Student
class Student {
public:
    string name;
    int age;
    string enroll_no;
    float marks;

    Student(string n, int a, string e, float m) : name(n), age(a), enroll_no(e), marks(m) {}

    void display() {
        cout << "Student Information:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Enrollment Number: " << enroll_no << endl;
        cout << "Marks: " << marks << endl;
    }
};

// Base class Faculty
class Faculty {
public:
    string facultyName;
    int age;
    string facultyCode;
    float salary;
    string deptt;
    int experience;
    string gender;

    Faculty(string fn, int a, string fc, float s, string d, int exp, string g)
        : facultyName(fn), age(a), facultyCode(fc), salary(s), deptt(d), experience(exp), gender(g) {}

    void display() {
        cout << "Faculty Information:" << endl;
        cout << "Name: " << facultyName << endl;
        cout << "Age: " << age << endl;
        cout << "Faculty Code: " << facultyCode << endl;
        cout << "Salary: " << salary << endl;
        cout << "Department: " << deptt << endl;
        cout << "Experience: " << experience << " years" << endl;
        cout << "Gender: " << gender << endl;
    }
};

// Derived class Person using multiple inheritance
class Person : public Student, public Faculty {
public:
    Person(string studentName, int studentAge, string enroll, float studentMarks,
           string facultyName, int facultyAge, string code, float facultySalary,
           string department, int exp, string gender)
        : Student(studentName, studentAge, enroll, studentMarks),
          Faculty(facultyName, facultyAge, code, facultySalary, department, exp, gender) {}

    void display() {
        // Resolve ambiguity by explicitly calling the base class methods
        Student::display();
        Faculty::display();
    }
};

int main() {
    // Create an object of the derived class Person
    Person person("Alice", 20, "EN12345", 88.5, "Dr. Smith", 45, "F123", 75000.0, "Computer Science", 20, "Male");

    // Call the display function to show both Student and Faculty information
    person.display();

    return 0;
}
