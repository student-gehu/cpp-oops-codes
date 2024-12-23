// Using the concept of operator overloading. Implement a program to overload the following:With the help of friend function a. Unary – b. Unary ++ preincrement, postincrement c. Unary -- predecrement, postdecrement
#include<iostream>
using namespace std;

class Number {
    private:
        int val;

    public:
        Number(int v) {
            val = v;
        }

        friend Number operator-(const Number& obj);
        friend Number& operator++(Number& obj);
        friend Number operator++(Number& obj, int);
        friend Number& operator--(Number& obj);
        friend Number operator--(Number& obj, int);

        void display() {
            cout << val << endl;
        }
};

Number operator-(const Number& obj) {
    return Number(-obj.val);
}

Number& operator++(Number& obj) {
    ++obj.val;
    return obj;
}

Number operator++(Number& obj, int) {
    Number temp = obj;
    ++obj.val;
    return temp;
}

Number& operator--(Number& obj) {
    --obj.val;
    return obj;
}

Number operator--(Number& obj, int) {
    Number temp = obj;
    --obj.val;
    return temp;
}

int main() {
    Number a(10);

    cout << "Initial value of a: ";
    a.display();

    Number b = -a;
    cout << "Value of b after unary '-': ";
    b.display();

    ++a;
    cout << "Value of a after preincrement: ";
    a.display();

    a++;
    cout << "Value of a after postincrement: ";
    a.display();

    --a;
    cout << "Value of a after predecrement: ";
    a.display();

    a--;
    cout << "Value of a after postdecrement: ";
    a.display();

    return 0;
}
