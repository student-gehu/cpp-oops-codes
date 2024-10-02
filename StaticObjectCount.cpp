#include<iostream>
using namespace std;

class Box{
    private:
        double length;
        double breadth;
        double height;
        
    public:
        static int objCount;
        
        //constructor definition
        Box(double l=2.0,double b=2.0,double h=2.0){
            cout<<"constructor called."<<endl;
            length=l;
            breadth=b;
            height=h;
            //increase every time object is created
            objCount++;
        }
        double volume(){
            return length*breadth*height;
        }
        static int getCount(){
            return objCount;
        }
};

//initalize static member of class Box
int Box::objCount=0;

int main(){
    //print total number of object before creating object
    cout<<"Inital stage count:"<<Box::getCount()<<endl;
    
    Box Box1(3.3,1.2,1.5);
    Box Box2(8.5,6.0,2.0);
    
    //print total number of object after creating object
    cout<<"Final stage count:"<<Box::getCount()<<endl;
    
    return 0;
}





