#include<iostream>
using namespace std;

void value(int val);
int main(){
    int val=5;
    value(val);
    cout<<"the value of val is:"<<val;   //OUTPUT:5  EXPECTED OUTPUT:10
    return 0;
}
void value(int val){
    //it is passed to the function is locally stored by the function parameter in stack mmemoory location.if you change the value of function parameter , it is changed for the current function only.it will not change the value of variable inside the caller method such as main()
    val+=5;
}