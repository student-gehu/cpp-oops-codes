#include<iostream>
using namespace std;

int sum(int a , int b , int x=0 , int y=0){ //here x and y are assigned as 0 by default argument
    return (a+b+x+y);
}

int main(){
    cout<<sum(10,20)<<endl;
    cout<<sum(10,20,30)<<endl;
    cout<<sum(10,20,30,40)<<endl;
    return 0;
}
 
