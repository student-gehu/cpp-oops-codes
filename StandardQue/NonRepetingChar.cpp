#include<iostream>
using namespace std;

int main(){
    string s1;
    string s2;
    int i,j,count;
    
    cout<<"Enter the string:";
    getline(cin,s1);
    
    for(i=0;i<s1.size();i++){
        if(s1[i]==' '){
            continue;
        }
        count=0;
        for(j=0;j<s1.size();j++){
            if(s1[i]==s1[j]){
                count++;
            }
        }    
        if(count==1){
            s2+=s1[i];
        }
    }
    cout<<"Non repeting characters:"<<s2<<endl;
    return 0;
}