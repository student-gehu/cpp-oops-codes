#include<iostream>
using namespace std;

int main(){
    int matrix[3][3]{
        {4,6,9},
        {3,6,9},
        {2,6,9},
    };
    for(auto &x:matrix){        //The "auto" keyword allows the compiler to infer the type of the iterator "x", and the "&" symbol means that "x" is a reference to the original matrix element, not a copy.

        for(auto y:x){//: This line starts a nested for loop that iterates over each element in the current row "x". The "auto" keyword is used again to infer the type of the iterator "y".
            cout<<y<<" ";
        }
        printf("\n");
    }
    return 0;
}