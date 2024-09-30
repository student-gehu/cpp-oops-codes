#include<iostream>
using namespace std;

class student{
    public:
        int id;
        string name;
};

int main(){
    student s1;
    s1.id=53;
    s1.name="rahul";
    
    cout<<"id of student 1 is: "<<s1.id<<endl;
    cout<<"name of strudent 1 is: "<<s1.name<<endl;
    
    return 0;
}