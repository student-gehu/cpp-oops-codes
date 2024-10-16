#include<iostream>
#include<string>
using namespace std;

class Hero{
    //properties
    public:
        string name;
        string level;
        int health;

    void display(){
        cout<<"Main character name:"<<name<<endl;
        cout<<"Level:"<<level<<endl;
        cout<<"Health:"<<health<<endl;
    }
};
int main(){
    Hero rahul;  //object of Hero class
    rahul.name="Rahul";
    rahul.level="S Class";
    rahul.health=99;
    // cout<<"name is:"<<rahul.name<<endl;
    // cout<<"level is:"<<rahul.level<<endl;
    // cout<<"health is:"<<rahul.health<<endl;
    rahul.display();
    return 0;
}
