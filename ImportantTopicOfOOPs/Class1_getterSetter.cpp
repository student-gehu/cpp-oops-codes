#include<iostream>
#include<string>
using namespace std;

class Hero{
    private:
        int health;
        string level;

    public:
        string name;

    void display(){
        cout<<"Main character name:"<<name<<endl;
        cout<<"Level:"<<level<<endl;
        cout<<"Health:"<<health<<endl;
    }

    int gethealth(){
        return health;
    }
    string getlevel(){
        return level;
    }
    void setlevel(string l){
        level=l;
    }
    void sethealth(int h){
        health=h;
    }
};
int main(){
    Hero rahul;  //object of Hero class
    rahul.name="Rahul";

    //using setter
    rahul.setlevel("S Class");
    rahul.sethealth(99);
    //using getter
    cout<<"Name:"<<rahul.name<<endl;
    cout<<"level:"<<rahul.getlevel()<<endl;
    cout<<"health:"<<rahul.gethealth()<<endl;
    // rahul.display();
    return 0;
}