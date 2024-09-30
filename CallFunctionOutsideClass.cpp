#include<iostream>
using namespace std;

class myclass{
    public:                         //Access specifier
        void Xclass();              //method/function declaration
};

//method/function definition outside the class
void myclass::Xclass(){
    cout<<"Hello there!"<<endl;
    cout<<"how are you :)"<<endl;
}

int main(){
    myclass myobj;
    myobj.Xclass();
    return 0;
}