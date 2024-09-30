#include<iostream>
using namespace std;

class student{
    public:
        int id;
        string name;
        void incert(int i , string n){
            id = i;
            name = n;
        }
        
        void display(){
            cout<<id<<" "<<name<<endl;
        }
};

int main(){
    student s1;
    student s2;
    student s3;
    s1.incert(18,"ayush");
    s2.incert(32,"kuldeep");
    s3.incert(53,"rahul");
    
    s1.display();
    s2.display();
    s3.display();
    
    return 0;
}