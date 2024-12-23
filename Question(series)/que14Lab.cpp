// Create a class Complex having two int type variable named real & img denoting real and imaginary part respectively of a complex number. Overload +, - , == operator to add, to subtract and to compare two complex umbers being denoted by the two complex type objects

#include <iostream>
using namespace std;

class Complex {
private:
    int real; 
    int img;  

public:
    Complex(int r, int i){
        real = r;
        img = i;
    }
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, img + other.img);
    }

    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, img - other.img);
    }

    bool operator==(const Complex& other) const {
        return real == other.real && img == other.img;
    }

    void display() const {
        cout << real << " + " << img << "i" << endl;
    }
};

int main() {
    Complex c1(3, 4); 
    Complex c2(1, 2); 

    Complex sum = c1 + c2;   
    Complex diff = c1 - c2;    
    bool isEqual = (c1 == c2); 

    cout << "Sum: ";
    sum.display();

    cout << "Difference: ";
    diff.display();

    cout << "Are c1 and c2 equal? " << (isEqual ? "Yes" : "No") << endl;

    return 0;
}
