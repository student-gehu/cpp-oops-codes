#include <iostream>
using namespace std;

class Number {
    private:
        int value;
    public:
        Number(int val = 0) {
            value = val;
        }

        // Friend function for unary - operator overloading
        friend Number operator-(const Number&);

        // Friend function for unary ++ preincrement operator overloading
        friend Number& operator++(Number&);

        // Friend function for unary ++ postincrement operator overloading
        friend Number operator++(Number&, int);

        // Friend function for unary -- predecrement operator overloading
        friend Number& operator--(Number&);

        // Friend function for unary -- postdecrement operator overloading
        friend Number operator--(Number&, int);

        void display() {
            cout << "Value: " << value << endl;
        }
};

// Unary - operator overloading using friend function
Number operator-(const Number& num) {
    return Number(-num.value);
}

// Unary ++ preincrement operator overloading using friend function
Number& operator++(Number& num) {
    num.value++;
    return num;
}

// Unary ++ postincrement operator overloading using friend function
Number operator++(Number& num, int) {
    Number temp = num;
    num.value++;
    return temp;
}

// Unary -- predecrement operator overloading using friend function
Number& operator--(Number& num) {
    num.value--;
    return num;
}

// Unary -- postdecrement operator overloading using friend function
Number operator--(Number& num, int) {
    Number temp = num;
    num.value--;
    return temp;
}

int main() {
    Number num(10);

    // Unary - operator overloading
    cout << "Unary - operator overloading:" << endl;
    Number negNum = -num;
    negNum.display();

    // Unary ++ preincrement operator overloading
    cout << "\nUnary ++ preincrement operator overloading:" << endl;
    ++num;
    num.display();

    // Unary ++ postincrement operator overloading
    cout << "\nUnary ++ postincrement operator overloading:" << endl;
    Number temp = num++;
    temp.display();
    num.display();

    // Unary -- predecrement operator overloading
    cout << "\nUnary -- predecrement operator overloading:" << endl;
    --num;
    num.display();

    // Unary -- postdecrement operator overloading
    cout << "\nUnary -- postdecrement operator overloading:" << endl;
    temp = num--;
    temp.display();
    num.display();

    return 0;
}