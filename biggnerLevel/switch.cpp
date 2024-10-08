#include<iostream>
using namespace std;

int main(){
    int daynum;
    cout<<"enter any number 1-7 for know which day is in that number:"<<endl;
    cin>>daynum;

    switch(daynum){
    case 1:cout<<"Monday";
    break;
    case 2:cout<<"Tuesday";
    break;
    case 3:cout<<"Wednesda";
    break;
    case 4:cout<<"Thrusday";
    break;
    case 5:cout<<"friday";
    break;
    case 6:cout<<"sataday";
    break;
    case 7:cout<<"sunday";
    break;
    default:cout<<"not day belong to that number";
    return 0;
    }
}