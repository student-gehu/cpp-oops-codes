#include<iostream>
using namespace std;
class shapes{
    public:
        int calculateAreaOfSquare(int s){
            return s*s;
        }
        int calculateAreaOfRectangle(int l, int b){
            return l*b;
        }
        float calculateAreaOfTriangle(float b,float h){
            return 0.5*b*h;
        }
};
int main(){
    int s,l,b;
    float base,height;
    shapes sh;
    cout<<"Enter side of a square:";
    cin>>s;
    cout<<sh.calculateAreaOfSquare(s)<<endl;
    cout<<"Enter length and breadth of rectangel:";
    cin>>l;
    cin>>b;
    cout<<sh.calculateAreaOfRectangle(l,b)<<endl;
    cout<<"Enter base and height of a triangle:";
    cin>>base;
    cin>>height;
    cout<<sh.calculateAreaOfTriangle(base,height)<<endl;
    return 0;
}