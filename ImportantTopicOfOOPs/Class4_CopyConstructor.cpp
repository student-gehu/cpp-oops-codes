#include<iostream>
using namespace std;

class point{
    private:
        int x,y;
        
    public:
        point(int x1,int y1){
            x=x1;
            y=y1;
        }
        
        //copy constructor
        point(const point &p1){
            x=p1.x;
            y=p1.y;
        }
        int getX(){return x;}
        int getY(){return y;}
};
int main(){
    point p1(10,20);
    point p2=p1;
    
    cout<<"p1.x="<<p1.getX()<<",p1.y="<<p1.getY();
    cout<<"\np2.x="<<p2.getX()<<",p2.y="<<p2.getY();
    return 0;
} 