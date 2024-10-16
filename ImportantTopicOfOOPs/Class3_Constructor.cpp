#include<iostream>
using namespace std;

class detail{
    private:
        string name;
        float salary;
    
    public:
        string getname(){
            return name;
        }
        void setname(string n){
            name=n;
        }
        float getsalary(){
            return salary;
        }
        void setsalary(float s){
            salary=s;
        }
        detail(string name, float salary){
            this->name=name;
            this->salary=salary;
        }

        ~detail(){
            cout<<"Inside the Distrector!"<<endl;
        }
};

int main(){
    detail d1("rahul",500000.00);
    cout<<"name:"<<d1.getname()<<endl;
    cout<<"salary:"<<d1.getsalary()<<endl;
    
    return 0;    
}