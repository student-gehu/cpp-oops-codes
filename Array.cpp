#include<iostream>
using namespace std;

void printArray(int arr[5]);
int main(){
    int arr1[5]={10,20,30,40,50};
    int arr2[5]={5,15,25,35,45};
    printArray(arr1);
    printArray(arr2);
}

void printArray(int arr[5]){
    cout<<"printing array elements:"<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    printf("\n");
}
//OUTPUT
/*
array elements:
10 20 30 40 50 
printing array elements:
5 15 25 35 45 
*/