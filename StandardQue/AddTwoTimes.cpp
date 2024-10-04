#include<iostream>
using namespace std;

class MyTime{
    int hours,minutes,seconds;
    public:
        void gettime(int h,int m,int s){
            hours=h;
            minutes=m;
            seconds=s;
        }
        void puttime(void){
            cout<<hours<<" hours and ";
            cout<<minutes<<" minutes ";
            cout<<seconds<<" seconds"<<endl;
        }
        MyTime sum(MyTime t2); // declaration of function with object as argument
};

MyTime MyTime::sum(MyTime t2) {
    MyTime result;
    result.seconds = seconds + t2.seconds;
    result.minutes = minutes + t2.minutes + result.seconds / 60;
    result.hours = hours + t2.hours + result.minutes / 60;
    result.minutes %= 60;
    result.seconds %= 60;
    return result;
}

int main(){
    MyTime T1,T2,T3;
    T1.gettime(2,45,120);
    T2.gettime(3,30,120);
    T3 = T1.sum(T2);
    cout<<"T1 = ";
    T1.puttime();
    cout<<"T2 = ";
    T2.puttime();
    cout<<"T3 = ";
    T3.puttime();
    return 0;
}
