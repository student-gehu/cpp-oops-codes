#include <iostream>
using namespace std;

class Number {
    private:
        int value;
    public:
        Number(int val = 0) {
            value = val;
        }

        // Unary - operator overloading
        Number operator-() {
            return Number(-value);
        }

        // Unary ++ preincrement operator overloading
        Number& operator++() {
            value++;
            return *this;
        }

        // Unary ++ postincrement operator overloading
        Number operator++(int) {
            Number temp = *this;
            value++;
            return temp;
        }

        // Unary -- predecrement operator overloading
        Number& operator--() {
            value--;
            return *this;
        }

        // Unary -- postdecrement operator overloading
        Number operator--(int) {
            Number temp = *this;
            value--;
            return temp;
        }

        void display() {
            cout << "Value: " << value << endl;
        }
};

int main() {
    Number num(10);

    // Unary - operator overloading
    cout << "Unary - operator overloading:" << endl;
    Number negNum = -num;
    negNum