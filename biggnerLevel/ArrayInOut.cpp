#include<iostream>
using namespace std;

int main(){
    int i,n;
    int A[10];
    cout<<"Enter the size of an array:";
    cin>>n;

    cout<<"Enter the element:";
    for(i=0;i<n;i++){
        cin>>A[i];
    }

    for(i=0;i<n;i++){
        cout<<" "<<A[i];
    }
}