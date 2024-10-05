 /* Imagine a tollbooth with a class called TollBooth. The two data items are of
type unsigned int and double to hold the total number of cars and total
amount of money collected. A constructor initializes both of these data
members to 0. A member function called payingCar( )increments the car
total and adds 0.5 to the cash total. Another function called nonPayCar( )
increments the car total but adds nothing to the cash total. Finally a member
function called display( )shows the two totals. Include a program to test this
class. This program should allow the user to push one key to count a paying
car and another to count a non paying car. Pushing the ESC key should
cause the program to print out the total number of cars and total cash and
then exit
*/

#include <iostream>
#include <conio.h>
using namespace std;

class Tollbooth{
    private:
        unsigned int carcount;
        double cashtotal;
    public:
        Tollbooth(){
            carcount = 0;
            cashtotal = 0.0;
        }
        void payingCar(){
            carcount++;
            cashtotal += 0.5;
        }
        void nonPayCar(){
            carcount++;
        }
        void display(){
            cout<< "Car count is: " <<carcount<<endl;
            cout<< "Cash total is: " <<cashtotal<<endl;
        }
};

int main(){
    char ch;
    Tollbooth t;
    while(true){
        ch = cin.get();

        if ((ch=='P')||(ch=='p')){
            t.payingCar();
            cout<< "Paying car counter" <<endl;
        }
        else if ((ch=='N')||(ch=='n')){
            t.nonPayCar();
            cout<< "Non-Paying car counter" <<endl;
        }
        else if (ch==27){
            t.display();
            break;
        }
        else{
            printf("Invalid input");
        }
    }
    return 0;
}

