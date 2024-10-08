#include<iostream>
using namespace std;


int main(){
    int num1 , num2;
    cin>>num1>>num2;
    int minimum = min(num1,num2);
    int maximum = max(num1,num2);
    cout<<"minimum "<<minimum<<endl;
    cout<<"maximum "<<maximum;
    return 0;
}