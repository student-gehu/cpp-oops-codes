#include<iostream>
using namespace std;

int main(){
    string str1;
    string str2;
    char ch;
    cout<<"Enter the string:"<<endl;
    getline(cin,str1);
    
    cout<<"Enter the char you want to deleat:"<<endl;
    cin>>ch;
    
    for(size_t i=0;i<str1.size();i++){
        if(str1[i]!=ch){
            str2=str2+str1[i];
        }
    }
    cout<<"The updated string is:"<<str2;
    return 0;
}