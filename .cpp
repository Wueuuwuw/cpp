#include <iostream>



int main(){
int size = 10;
char* pstr = new char[size];  // allocate memory for an array of characters
for (int i = 0; i < size; i++) {
    pstr[i] = 'A' + i;  // assign values to the allocated memory
}
std::cout << "Value at pstr: ";
for (int i = 0; i < size; i++) {
    std::cout << pstr[i] << " ";
}
std::cout << std::endl;
delete[] pstr;  // deallocate the memory
}