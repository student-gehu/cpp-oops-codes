//static variable in a method

#include<iostream>
using namespace std;
void disp()
{
int x=0;
static int y=0;
cout<<"x= "<<x<<"  "<<"y= "<<y<<"\n";
x++;
y++;
}
int main()
{
    for (int i=0;i<5;i++)
    {
     disp();
    }
}
// o/p:
// x= 0  y= 0
// x= 0  y= 1
// x= 0  y= 2
// x= 0  y= 3
// x= 0  y= 4

-------------------------------
// static variable in class
--------------------------------
#include<iostream>
using namespace std;
class Xyz
{public:
    int x;
    static int y;
    };

int Xyz::y=10;;
int main()
{
Xyz d;
d.x=15;
Xyz::y=20;
cout<<d.x<<endl;
cout<<Xyz::y; //// you can write d.y but not recommended
}

// Output:
// 15
// 20
 ----------------------------------
// static functions in class
----------------------------------
#include<iostream>
using namespace std;
class Xyz
{
    public:
    static int x;
    int y=0;
    //static void show(); //Approach 1
    static void show()
    {
    cout<<x;
    }
};
/*void Xyz:: show() //Approach 1
    {
    cout<<y;
    cout<<x;
    } */
    int Xyz::x=15;
    int main()
    {
    Xyz d;
    Xyz::show(); // you can write d.show() but not recommended
    }

// o/p:
// 15
// //Note : In static functions you can-
// 1. use static variables 
// 2. call others static functions also.
// 3. Non static members (variables or functions) are not allowed here