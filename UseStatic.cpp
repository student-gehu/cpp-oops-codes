#include<iostream>
using namespace std;

class Account{
    public:
        int accountNumber;
        string name;
        static int count;
        
    Account(int accountNumber, string name){
        this->accountNumber=accountNumber;
        this->name=name;
        count++;
    }
    
    void display(){
        cout<<accountNumber<<" "<<name<<endl;
    }
};
int Account::count=0;
int main(){
    Account a1=Account(201,"Rahul");
    Account a2=Account(202,"Aman");
    Account a3=Account(203,"Rishabh");
    a1.display();
    a2.display();
    a3.display();
    cout<<"Total Object are:"<<Account::count;
    return 0;
}