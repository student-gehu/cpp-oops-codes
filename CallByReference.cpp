#include<iostream>

void swap(int *a , int *b){  //this is the adventage of call by reference of you can say using pointer we can change the value in main by passing the address of the value
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    int a=100 , b=200;
    swap(&a,&b);
    std::cout<<"a="<<a<<std::endl<<"b="<<b<<std::endl;
    return 0;
}