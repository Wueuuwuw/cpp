#include <iostream>

int main()
{
    char* ps = new char;
    *ps = 'F';
    std::cout << "The value of s is: " << *ps << std::endl;
    delete ps; // Deallocate the memory
    return 0;
}