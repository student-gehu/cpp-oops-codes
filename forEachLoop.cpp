#include<iostream>
using namespace std;

int main(){
    int arr[10]={1,2,3,4,5,6,7,7,8,9};
    
    for(int i:arr){
        cout<<i<<endl;
    }
    return 0;
}