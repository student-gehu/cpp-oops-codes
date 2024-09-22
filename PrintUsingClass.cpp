#include<iostream>
using namespace std;

class printData {
    public:
        void print(int i){
            cout<<"printing int:"<<i<<endl;
        }
        void print(double f){
            cout<<"printing float:"<<f<<endl;
        }
        void print(char* c){
            cout<<"printing char:"<<c<<endl;
        }
        void print(string s){
            cout<<"printing string:"<<s<<endl;
        }
    };

int main(void){
    printData pd;
    
    pd.print(4);
    pd.print(500.23);
    pd.print("hello gunjan");
    pd.print("hello C++");
    
    return 0;
}