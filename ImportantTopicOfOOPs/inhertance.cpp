#include<iostream>
using namespace std;

class Human{
    private:
        int height;
        int weight;
        int age;
    public:
        int getHeight(){
            return height;
        }
        int getAge(){
            return age;
        }
        int getWeight(){
            return weight;
        }
        void setHeight(int h){
            this->height=h;
        }
        void setAge(int a){
            this->age=a;
        }
        void setWeight(int w){
            this->weight=w;
        }
    };
class Mail: public Human{
    public:
        string colour;

        void sleep(){
            cout<<"Mail enthustastic dev!"<<endl;
        }
};

int main(){
    Mail obj1;
    obj1.setAge(19);
    obj1.setHeight(175); 
    obj1.setWeight(60);

    cout<<"Age:"<<obj1.getAge()<<endl;
    cout<<"Height:"<<obj1.getHeight()<<endl;
    cout<<"Weight:"<<obj1.getWeight()<<endl;

    obj1.colour="red";
    cout<<"Color:"<<obj1.colour<<endl;
    obj1.sleep();
    return 0;
}