#include <iostream>
using namespace std;
namespace LibraryA {
 void info() {
 cout << "Info from LibraryA" << endl;
 }
}
namespace LibraryB {
 void info() {
 cout << "Info from LibraryB" << endl;
 }
}
int main() {
 LibraryA::info(); // Calls info() from LibraryA
 LibraryB::info(); // Calls info() from LibraryB
 return 0;
}
