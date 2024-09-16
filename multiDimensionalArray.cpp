#include<iostream>
using namespace std;

int main(){
    int arr[3][3];
    
    arr[0][0]=5;
    arr[0][1]=10;
    arr[1][1]=15;
    arr[1][2]=20;
    arr[2][0]=25;
    arr[2][2]=30;
    arr[3][3]=35;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}