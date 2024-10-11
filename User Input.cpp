#include <iostream>

int main() {
    std::string name;
    int age;

    std::cout << "Enter name: ";
    std::cin >> name;

    std::cout << "Enter age: ";
    std::cin >> age;

    std::cout << "Hello, " << name << "! You are " << age << " years old.\n";
}