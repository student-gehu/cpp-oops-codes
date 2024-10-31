#include<iostream>
using namespace std;

class A{
    public:
    void sayHello(){
        cout<<"Hello harry bhai"<<endl;
    }
    void sayHello(string name){
        cout<<"Hello love babbar"<<name<<endl;
    }
};

int main(){
    A obj;
    obj.sayHello();
    return 0;
}