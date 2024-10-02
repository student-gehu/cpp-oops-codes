#include<iostream>
using namespace std;

class employe{
    private:
        int salary;   //private attribute
        
    public:
        //setter
        void setSalary(int s){
            salary=s;
        }
        //getter
        int getSalary(){
            return salary;
        }
};

int main(){
    employe emp1;
    emp1.setSalary(5000000);
    cout<<"Rahul's salary "<<emp1.getSalary()<<" per/anum";
    return 0;
}