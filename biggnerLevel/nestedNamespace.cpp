#include <iostream>
namespace OuterNamespace {
    namespace InnerNamespace {
        void display() {
            std::cout << "Inside InnerNamespace" << std::endl;
        }
    }
}
int main() {
    OuterNamespace::InnerNamespace::display(); // Calls display from InnerNamespace
    return 0;
}
