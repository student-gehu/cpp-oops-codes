#include<iostream>
using namespace std;

int main(){
    int age;

    cin>>age;
    if(age<18){
        cout<<"not eleigible for job";
    }else if(age <= 57){
        cout<<"eleigible for job";
        if(age>=55){
            cout<<"but retirment soon";
        }
    }else{
        cout<<"retirement time";
    }
    return 0;
}