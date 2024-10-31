// write a cpp program to overload ++operator(prefix and postfix both)
#include <iostream>
using namespace std;

class Counter {
private:
    int value;

public:
    // Constructor to initialize the counter
    Counter(int v = 0) : value(v) {}

    // Overload prefix ++ operator
    Counter& operator++() {
        ++value; // Increment the value
        return *this; // Return the current object
    }

    // Overload postfix ++ operator
    Counter operator++(int) {
        Counter temp = *this; // Store the current state
        ++value; // Increment the value
        return temp; // Return the old state
    }

    // Function to display the value
    void display() const {
        cout << "Counter Value: " << value << endl;
    }
};

int main() {
    Counter c1(5);

    cout << "Initial ";
    c1.display();

    // Using prefix increment
    ++c1;
    cout << "After prefix increment: ";
    c1.display();

    // Using postfix increment
    Counter c2 = c1++;
    cout << "After postfix increment: ";
    c1.display();
    cout << "Value returned by postfix increment: ";
    c2.display();

    return 0;
}