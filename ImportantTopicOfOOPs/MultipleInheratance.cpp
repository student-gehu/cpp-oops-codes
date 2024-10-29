#include<iostream>
using namespace std;

class Animal{
    public:
    void bark(){
        cout<<"Barking"<<endl;
    }
};

class Human{
    public:
    string color;

    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};
//Multiple inheritance
class hybrid:public Animal , public Human{

};
int main(){
    hybrid obj1;
    obj1.speak();
    obj1.bark();
    return 0;
}