#include<iostream>
using namespace std;

class space{
    private:
        int x;
        int y;
        int z;
        
    public:
        void getdata(int a , int b , int c){
            x=a;
            y=b;
            z=c;
        }
        void display(){
            cout<<x<<" "<<y<<" "<<z<<endl;
        }
        void operator-(){ //it takes no argument, it can directly access the members of the object which activated it 
            x=-x;
            y=-y;
            z=-z;
        }
};
int main(){
    space s;
    s.getdata(10,-20,30);
    
    cout<<"Object s"<<endl;
    s.display();
    -s;
    cout<<"Now Object s"<<endl;
    s.display();
    return 0;
}