#include<iostream>
using namespace std;

class employe{
    public:
        int id;
        string name;
        float salary;
    
        void insert(int i , string n , float s){
            id=i;
            name=n;
            salary=s;
        }
    
        void display(){
            cout<<id<<" "<<name<<" "<<salary<<" "<<endl;
        }
};

int main(){
    employe e1;
    employe e2; 
    employe e3;
    
    e1.insert(18,"ayush",40000.00);
    e2.insert(32,"kuldeep",35000.00);
    e3.insert(53,"rahul",150000.00);
    
    e1.display();
    e2.display();
    e3.display();
    
    return 0;
}