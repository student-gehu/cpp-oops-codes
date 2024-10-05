#include<iostream>
#include<string>
using namespace std;
class Hotel{
    private:
        int Rno;
        string Name;
        float Tariff;
        int NOD;
        float CALC(){
            float amount=NOD*Tariff;
            if(amount>10000){
                amount*=1.05;
            }
            return amount;
        }
    public:
        void checkin(){
            cout<<"Enter Room Number:";
            cin>>Rno;
            cin.ignore();
            cout<<"Enter Name:";
            getline(cin,Name);
            cout<<"Enter Tariff:";
            cin>>Tariff;
            cout<<"Enter Number of Days:";
            cin>>NOD;
        }
        void checkout(){
            cout<<"\n***************\n";
            cout<<"Room Number:"<<Rno<<endl;
            cout<<"Name:"<<Name<<endl;
            cout<<"Tariff per day:"<<Tariff<<endl;
            cout<<"Number of days:"<<NOD<<endl;
            cout<<"Total amount:"<<CALC()<<endl;
        }
};
int main(){
    Hotel c1;
    c1.checkin();
    c1.checkout();
    return 0;
}