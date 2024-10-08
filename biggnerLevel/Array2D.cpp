#include<iostream>
using namespace std;

int main(){
    string s = "rahul";
    cout<<s[3]<<endl;         //return the later in that position ex:- 3 pa "u" ha 
    int len = s.size();
    cout<<s[len-1]<<endl;     //l    because it was a last element
    s[len-2]='x';             // remove u with x 
    cout<<s;                  
    return 0;
}