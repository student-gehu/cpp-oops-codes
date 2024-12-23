// Create a base class called shape. Use this class to store two double type values that could be used to compute the area of figures
#include <iostream>
using namespace std;

class Shape {
protected:
    double x, y;
public:
    void get_data(double xValue, double yValue) {
        x = xValue;
        y = yValue;
    }
    virtual void display_area() const = 0;
};

class Triangle : public Shape {
public:
    void display_area() const override {
        cout << "Area of Triangle: " << 0.5 * x * y << endl;
    }
};

class Rectangle : public Shape {
public:
    void display_area() const override {
        cout << "Area of Rectangle: " << x * y << endl;
    }
};

int main() {
    Shape* shapePtr = nullptr;
    Triangle triangle;
    Rectangle rectangle;
    char choice;

    cout << "Enter 'T' for Triangle or 'R' for Rectangle: ";
    cin >> choice;

    if (choice == 'T' || choice == 't') {
        shapePtr = &triangle;
    } else if (choice == 'R' || choice == 'r') {
        shapePtr = &rectangle;
    } else {
        cout << "Invalid choice!" << endl;
        return 1;
    }

    double x, y;
    cout << "Enter two dimensions (e.g., base and height for Triangle, length and breadth for Rectangle): ";
    cin >> x >> y;

    shapePtr->get_data(x, y);
    shapePtr->display_area();

    return 0;
}
