#include<iostream>
using namespace std;

class car{
    private:
        string brand;
        string model;
        int year;
    public:
        car(string b, string m, int y){
            brand=b;
            model=m;
            year=y;
        }
        string getBrand() { return brand; }
        string getModel() { return model; }
        int getYear() { return year; }
};

int main(){
    car carobj1("BMW","X5",2009);
    car carobj2("rollsroys","ghost",2019);
    
    cout<<carobj1.getBrand()<<" "<<carobj1.getModel()<<" "<<carobj1.getYear()<<endl;
    cout<<carobj2.getBrand()<<" "<<carobj2.getModel()<<" "<<carobj2.getYear()<<endl;
    return 0;
}
