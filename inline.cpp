#include<iostream>
using namespace std;

inline int add(int a , int b){
    return(a+b);
}

int main(){
    cout<<"Addition of 'a' and 'b' is :"<<add(6,9);
    return 0;
}