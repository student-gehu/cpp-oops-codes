#include<iostream>
using namespace std;

// int main(){
//     string fullName;
//     cout << "Type your full name: ";
//     cin >> fullName;
//     cout << "Your name is: " << fullName;    // only print rahul not rana so we use funtion to resolve it 
//     return 0;
// }

int main(){
    string fullName;
    cout << "Type your full name: ";
    getline(cin,fullName);
    cout << "Your name is: " << fullName;    
    return 0;
}