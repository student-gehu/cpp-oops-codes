#include<iostream>
using namespace std;

class hero{
    public:
        static int salary;        //if we use static let think we in simple language it is a superior member , it will belongs to the class , it will not require an object to access 

    static int random(){          //this is a static function , it will also directly access in a main function 
        return salary;
    }
};

int hero::salary=5000000;
int main(){
    cout<<hero::salary<<endl;
    cout<<hero::random()<<endl;
}