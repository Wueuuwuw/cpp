#include <iostream>

void print(int result) {
    std::cout << "The result is: " << result << '\n';
}

int add(int hi, int bye) {
    return hi + bye;
}

int main() {
    int result = add(2, 3);
    print(result);
    return 0;
}