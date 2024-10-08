#include <iostream>
using namespace std;
// first name space
namespace first_space{
    void func(){
        cout << "Inside first_space" << endl;
    }
// second name space
namespace second_space{
    void func(){
        cout << "Inside second_space" << endl;
        }
    }
}
using namespace first_space::second_space;  //because of this we should access the second space , if we only write a first space we only able to acces first space
int main (){
    // This calls function from second name space.
    func();
    return 0;
}