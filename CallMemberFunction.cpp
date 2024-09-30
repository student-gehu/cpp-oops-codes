#include<iostream>
using namespace std;

class Myclass{
    public:
        void Xclass(){
            cout<<"Hello there!"<<endl;
            cout<<"is everything okay! :)"<<endl;
        }
    };
    
int main(){
    Myclass myobj;
    myobj.Xclass();
    
    return 0;
}