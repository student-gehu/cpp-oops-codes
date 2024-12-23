#include<iostream>
#include<exception>
using namespace std;

int main(){
    try{
        int *p = new int[1000000000];
        cout<<"Memory allocation is successfull\n";
        delete[] p;
    }catch(const exception &e){
        cout<<"Memory Occured due to line 9:"<<e.what()<<endl;  //Memory Occured:std::bad_alloc
    }
}