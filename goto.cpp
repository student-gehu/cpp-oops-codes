#include<iostream>
using namespace std;
void printNumber(){
    int n=1;
    lable:
        cout<<n<<" ";
        n++;
        if(n<=10){
            goto lable;
        }
}

int main(){
    printNumber();
    return 0;
}