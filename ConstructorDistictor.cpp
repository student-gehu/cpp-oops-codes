#include<iostream>
using namespace std;

class staticDemo{
    int i;
    
    public:
        staticDemo(){
            i=0;
            cout<<"Inside the Constructor!"<<endl;
        }
        ~staticDemo(){
            cout<<"Inside the Distrector!"<<endl;
        }
};

int main(){
    int x=0;
    if(x==0){
        staticDemo obj;            //if we add (static) here then the main is end first then the Distrector is called (like: static staticDemo obj)
    }
    cout<<"End of main"<<endl;
}

//if we add static in line 20 then the output is change because the scope of static object is throughout the life time of program