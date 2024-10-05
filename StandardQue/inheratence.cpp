#include <iostream>
using namespace std;

// Base class
class Base {
    private:
        int privateVar;
        void privateMethod() {
            cout << "Base class private method" << endl;
        }

    protected:
        int protectedVar;
        void protectedMethod() {
            cout << "Base class protected method" << endl;
        }

    public:
        int publicVar;
        void publicMethod() {
            cout << "Base class public method" << endl;
        }

        Base() {
            privateVar = 10;
            protectedVar = 20;
            publicVar = 30;
        }
};

// Derived class inheriting Base class in public mode
class DerivedPublic : public Base {
    public:
        void display() {
            // Accessing public members of Base class
            cout << "Public variable: " << publicVar << endl;
            publicMethod();

            // Accessing protected members of Base class
            cout << "Protected variable: " << protectedVar << endl;
            protectedMethod();

            // Cannot access private members of Base class
            // cout << "Private variable: " << privateVar << endl;
            // privateMethod();
        }
};

// Derived class inheriting Base class in protected mode
class DerivedProtected : protected Base {
    public:
        void display() {
            // Accessing public members of Base class
            // cout << "Public variable: " << publicVar << endl; // Error: publicVar is protected in DerivedProtected
            // publicMethod(); // Error: publicMethod is protected in DerivedProtected

            // Accessing protected members of Base class
            cout << "Protected variable: " << protectedVar << endl;
            protectedMethod();

            // Cannot access private members of Base class
            // cout << "Private variable: " << privateVar << endl;
            // privateMethod();
        }
};

// Derived class inheriting Base class in private mode
class DerivedPrivate : private Base {
    public:
        void display() {
            // Accessing public members of Base class
            // cout << "Public variable: " << publicVar << endl; // Error: publicVar is private in DerivedPrivate
            // publicMethod(); // Error: publicMethod is private in DerivedPrivate

            // Accessing protected members of Base class
            // cout << "Protected variable: " << protectedVar << endl; // Error: protectedVar is private in DerivedPrivate
            // protectedMethod(); // Error: protectedMethod is private in DerivedPrivate

            // Cannot access private members of Base class
            // cout << "Private variable: " << privateVar << endl;
            // privateMethod();
        }
};

int main() {
    DerivedPublic dp;
    dp.display();

    DerivedProtected dpt;
    dpt.display();

    DerivedPrivate dpv;
    dpv.display();

    return 0;
}