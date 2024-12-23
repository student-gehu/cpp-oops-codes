#include<iostream>
using namespace std;

void fun(int b){
    if(b==0){
        throw runtime_error{"the dinominatior should not be zero!"};
    }
}

void divide(int a, int b){
    try{
        fun(b);
        int c=a/b;
        cout<<c<<endl;
    }catch(const runtime_error &e){
        cout<<"Error!:"<<e.what();
    }
}

int main(){
    int a,b;
    cout<<"Enter a and b:";
    cin>>a>>b;
    divide(a,b);
}