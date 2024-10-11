#include <iostream>

class Person {
    public:
    std::string name;
    int age;

    void greet(){
        std::cout << " Name: " << name << '\n' << " Age: " << age << '\n';
    }
};

int main() { 
    Person person;
    person.name = "John Doe";
    person.age = 30;
    person.greet(); // Call the greet function on the person object
    return 0;
}