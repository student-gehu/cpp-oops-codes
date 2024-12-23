#include<iostream>
using namespace std;

class Customer{
    string name;
    int balance , account_number;

    public:
        Customer(string name, int balance, int account_number){
            this->name=name;
            this->balance=balance;
            this->account_number=account_number;
        }

        //deposit
        void deposit(int amount){
            cout<<"Enter the amount you want to deposit:"<<endl;
            cin>>amount;
            if(amount>0){
                balance+=amount;
                cout<<amount<<" is credited successfully!";
            }else{
                cout<<"amount should be grater than 0"<<endl;
            }
        }

        // withdraw
        void withdraw(int amount){
            cout<<"Enter the amount you want to withdraw:";
            cin>>amount;
            if(amount>0&&amount<=balance){
                balance-=amount;
                cout<<amount<<" is debited successfully!";
            }else if(amount<0){
                cout<<"amount should be greater than 0\n";
            }else{
                cout<<"your balance is low\n";
            }
        }

        //display details
        void displayDetail(){
            cout<<"\nbalanced amount:"<<balance;
        }
};

int main(){
    int balance , account_number,amount;
    string name;
    cout<<"Enter your name:";
    cin>>name;
    cout<<"Enter account Number:";
    cin>>account_number;
    cout<<"Enter balance:";
    cin>>balance;

    Customer c1(name,balance,account_number);

    c1.withdraw(amount);
    c1.displayDetail();
}

