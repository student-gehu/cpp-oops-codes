#include<iostream>
using namespace std;
class student{
    private:
        string name;
        int age;
        int height;
    public:
        int getage(){
            return this->age;
        }
};

int main(){
    student first;
    cout<<"everything is okk!"<<endl;
    return 0;
}