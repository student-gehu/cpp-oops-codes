// Create a Base class that consists of private, protected and public data members and member functions. Try using different access modifiers for inheriting Base class to the Derived class and create a table that summarizes the above three modes (when derived in public, protected and private modes) and shows the access specifier of the members of base class in the Derived class.
#include <iostream>
using namespace std;

class Base {
private:
    int privateVar;
protected:
    int protectedVar;
public:
    int publicVar;

    Base(int p, int pr, int pub) {
        privateVar = p;
        protectedVar = pr;
        publicVar = pub;
    }

    void showValues() {
        cout << "Private Variable: " << privateVar << ", Protected Variable: " << protectedVar << ", Public Variable: " << publicVar << endl;
    }
};

class DerivedPublic : public Base {
public:
    DerivedPublic(int p, int pr, int pub) : Base(p, pr, pub) {}

    void display() {
        cout << "Public Inheritance:" << endl;
        cout << "Protected Var: " << protectedVar << ", Public Var: " << publicVar << endl;
    }
};

class DerivedProtected : protected Base {
public:
    DerivedProtected(int p, int pr, int pub) : Base(p, pr, pub) {}

    void display() {
        cout << "Protected Inheritance:" << endl;
        cout << "Protected Var: " << protectedVar << ", Public Var: " << publicVar << endl;
    }
};

class DerivedPrivate : private Base {
public:
    DerivedPrivate(int p, int pr, int pub) : Base(p, pr, pub) {}

    void display() {
        cout << "Private Inheritance:" << endl;
        cout << "Protected Var: " << protectedVar << ", Public Var: " << publicVar << endl;
    }
};

int main() {
    DerivedPublic dp(1, 2, 3);
    DerivedProtected dpr(4, 5, 6);
    DerivedPrivate dprv(7, 8, 9);

    dp.display();
    dpr.display();
    dprv.display();

    return 0;
}
