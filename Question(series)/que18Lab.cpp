// You are given three classes A, B and C. All three classes implement their own version of func. In class A, func multiplies the value passed as a parameter by 2. In class B, func multiplies the value passed as a parameter by 3 In Class C, func multiplies the value passed as a parameter by 5.You are given class D such that You need to modify the class D and implement the function update_val which sets D's val to new_val by manipulating the value by only calling the func defined in classes A, B and C.It is guaranteed that new_val has only 2, 3 and 5 as its prime factors. Implement class D's function update_val. This function should update D's val only by calling A, B and C's func.
#include <iostream>
using namespace std;

class A {
public:
    int func(int val) {
        return val * 2;
    }
};

class B {
public:
    int func(int val) {
        return val * 3;
    }
};

class C {
public:
    int func(int val) {
        return val * 5;
    }
};

class D {
private:
    int val;
    int countA, countB, countC;

public:
    D() {
        val = 1;
        countA = 5;
        countB = 6;
        countC = 4;
    }
    void updateVal(int newVal) {
        A a;
        B b;
        C c;

        while (val < newVal) {
            if (newVal % val == 0) {
                if ((newVal / val) % 2 == 0) {
                    val = a.func(val);
                    countA++;
                } else if ((newVal / val) % 3 == 0) {
                    val = b.func(val);
                    countB++;
                } else if ((newVal / val) % 5 == 0) {
                    val = c.func(val);
                    countC++;
                }
            } else {
                break;
            }
        }

        cout << "A's func called " << countA << " times" << endl;
        cout << "B's func called " << countB << " times" << endl;
        cout << "C's func called " << countC << " times" << endl;
    }

    int getVal() {
        return val;
    }
};

int main() {
    D d;
    int newVal = 30; 
    d.updateVal(newVal);
    return 0;
}
