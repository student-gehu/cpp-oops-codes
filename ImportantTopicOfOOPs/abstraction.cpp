// abstraction:-Abstraction is the concept of showing only the necessary information to the outside world while hiding the implementaion detail detail
#include <iostream>

class Car {
private:
    int gear;
    int speed;

public:
    // Constructor
    Car() {
        gear = 0;
        speed = 0;
    }

    // Public method to accelerate the car
    void accelerate() {
        gear++;
        speed += 10;
        std::cout << "Accelerating... Gear: " << gear << ", Speed: " << speed << std::endl;
    }

    // Public method to brake the car
    void brake() {
        gear--;
        speed -= 10;
        std::cout << "Braking... Gear: " << gear << ", Speed: " << speed << std::endl;
    }
};

int main() {
    Car myCar;
    myCar.accelerate();
    myCar.accelerate();
    myCar.brake();

    return 0;
}
