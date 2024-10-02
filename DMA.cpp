#include<iostream>
using namespace std;

int main(){
    int n , sum=0;
    cout<<"Enter the number of student in the group:";
    cin>>n;
    int *marks=new int[n];
    cout<<"Enter the marks of the student"<<endl;
    for(int i=0;i<n;i++){
        cin>>*(marks+i);
    }
    for(int i=0;i<n;i++){
        sum+=*(marks+i);
    }
    cout<<"sum is "<<sum<<endl;
    delete[]marks;
    return 0;
}
