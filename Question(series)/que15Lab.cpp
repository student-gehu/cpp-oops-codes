// Using the concept of operator overloading. Implement a program to overload the following: a. Unary b. Unary ++ preincrement, postincrement c. Unary -- predecrement, postdecrement
#include<iostream>
using namespace std;

class Number {
    private:
        int val;

    public:
        Number(int v) {
            val = v;
        }

        Number operator-() {
            return Number(-val);
        }

        Number& operator++() {
            ++val;
            return *this;
        }

        Number operator++(int) {
            Number temp = *this;
            ++val;
            return temp;
        }

        Number& operator--() {
            --val;
            return *this;
        }

        Number operator--(int) {
            Number temp = *this;
            --val;
            return temp;
        }

        void display() {
            cout << val << endl;
        }
};

int main() {
    int val;
    cout<<"enter the val:";
    cin>>val;
    Number n(val);

    Number m = -n;
    cout << "Value of m: ";
    m.display();

    ++n;
    cout << "After preincrement: ";
    n.display();

    n++;
    cout << "After postincrement: ";
    n.display();

    --n;
    cout << "After predecrement: ";
    n.display();

    n--;
    cout << "After postdecrement: ";
    n.display();

    return 0;
}
