#include<iostream>
#include<string>
using namespace std;

class Hero{
    private:
        int health;
        string level;

    public:
        string name;

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

    //static allocation
    rahul.name="Rahul";
    rahul.sethealth(99);
    rahul.setlevel("S level");
    cout<<"name:"<<rahul.name<<endl;
    cout<<"health:"<<rahul.gethealth()<<endl;
    cout<<"level:"<<rahul.getlevel()<<endl;
    cout<<endl;
    //dynamically
    Hero *pinku= new Hero;
    pinku->name="Priyanka";
    pinku->sethealth(80);
    pinku->setlevel("B level");
    cout<<"name:"<<pinku->name<<endl;
    cout<<"health:"<<(*pinku).gethealth()<<endl;
    cout<<"level:"<<(*pinku).getlevel()<<endl;

    return 0;
}