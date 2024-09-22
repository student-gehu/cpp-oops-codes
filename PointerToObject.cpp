#include<iostream>
using namespace std;

class myclass{
    public:
        int data;
        
        void display(){
            cout<<"Data:"<<data<<endl;
        }
};

int main(){
    myclass obj;
    myclass *ptr = &obj;
    
    ptr->data=10;
    ptr->display();
    
    return 0;
}