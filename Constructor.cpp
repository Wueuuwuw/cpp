#include <iostream>

class Car {
public:
    std::string brand;
    int year;

    // Parameterized constructor
    Car(std::string b, int y) : brand(b), year(y) {}

    void displayInfo() {
        std::cout << "Brand: " << brand << ", Year: " << year << std::endl;
    }
};

int main() {
    Car car("Toyota", 2020);  // Uses the parameterized constructor
    car.displayInfo();  // Outputs: Brand: Toyota, Year: 2020
    return 0;
}