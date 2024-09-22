#include<iostream>
using namespace std;

class value{
    private:
        int x,y;
    
    public:
        void val(int a , int b){
            x=a;
            y=b;
        }
        void display(){
            cout<<"the value of x:"<<x<<endl;
            cout<<"the value of y:"<<y<<endl;
        }
};

int main(){
    value v1;
    v1.val(10,20);
    v1.display();
    return 0;
}