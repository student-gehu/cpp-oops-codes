#include<iostream>
using namespace std;

class MyClass{
    public:
        int data;
        
        MyClass(int val):data(val){
            cout<< "object created with data:"<<data<<endl;
        }
        
        ~MyClass(){
            cout<<"object with data "<<data<<" is being destroyed"<<endl;
        }
        
        void display(){
            cout<<"Data:"<<data<<endl;
        }
};

int main(){
    MyClass *ptr = new MyClass(20);   //dynamically allocate an object
    ptr->display();                   //access member function using pointer
    delete ptr;                       //free the dynamically allocated object
    return 0;
}