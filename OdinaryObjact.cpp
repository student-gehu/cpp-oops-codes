#include<iostream>
using namespace std;

class MyClass{
    public:
        int data;
        
        void display(){
            cout<<"Data:"<<data<<endl;
        }
};

int main(){
    MyClass obj;
    obj.data=20;
    obj.display();
    return 0;
}