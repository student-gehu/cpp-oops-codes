// Create a class called Student that contains the data members like age, name, enroll_no, marks. Create another class called Faculty that contains data members like facultyName, facultyCode, salary,deptt, age, experience, gender. Ceate the function display() in both the classes to display the respective information. The derived Class Person demonstrates multiple inheritance. The program should be able to call both the base classes and displays their information.
#include <iostream>
using namespace std;

class Student {
private:
    int age;
    string name;
    int enroll_no;
    int marks;

public:
    int getAge() {
        return age;
    }

    string getName() {
        return name;
    }

    int getEnrollNo() {
        return enroll_no;
    }

    int getMarks() {
        return marks;
    }

    void setAge(int ag) {
        age = ag;
    }

    void setName(string nam) {
        name = nam;
    }

    void setEnrollNo(int eno) {
        enroll_no = eno;
    }

    void setMarks(int m) {
        marks = m;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Enrollment No: " << enroll_no << endl;
        cout << "Marks: " << marks << endl;
    }
};

class Faculty {
private:
    string facultyName;
    int facultyCode;
    int salary;
    string deptt;
    int age;
    int experience;
    string gender;

public:
    Faculty(string n, int fc, int sal, string d, int a, int e, string g) {
        facultyName = n;
        facultyCode = fc;
        salary = sal;
        deptt = d;
        age = a;
        experience = e;
        gender = g;
    }

    void display() {
        cout << "Faculty Name: " << facultyName << endl;
        cout << "Faculty Code: " << facultyCode << endl;
        cout << "Salary: " << salary << endl;
        cout << "Department: " << deptt << endl;
        cout << "Age: " << age << endl;
        cout << "Experience: " << experience << " years" << endl;
        cout << "Gender: " << gender << endl;
    }
};

class Mix : public Student, public Faculty {
public:
    Mix(int ag, string nam, int eno, int m, string n, int fc, int sal, string d, int a, int e, string g)
        : Student(), Faculty(n, fc, sal, d, a, e, g) {
        setAge(ag);
        setName(nam);
        setEnrollNo(eno);
        setMarks(m);
    }
};

int main() {
    Mix obj(20, "Aman Kumar", 12345, 95, "Dr. Verma", 789, 750000, "Mathematics", 45, 20, "Male");

    cout << "Details of Student:" << endl;
    obj.Student::display();
    cout << endl;

    cout << "Details of Faculty:" << endl;
    obj.Faculty::display();

    return 0;
}

