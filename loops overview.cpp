#include <iostream>

int main() {
    int x = 5;
    if (x > 10) {
        std::cout << "x is greater than 10";
    } else {
        std::cout << "x is less than or equal to 10";
    }

    int day = 2;
    switch (day) {
        case 1:
            std::cout << "Monday";
            break;
        case 2:
            std::cout << "Tuesday";
            break;
        default:
            std::cout << "Unknown day";
            break;
    }

    int i = 0;
    while (i < 5) {
        std::cout << i << std::endl;
        i++;
    }

    for (int j = 0; j < 5; j++) {
        std::cout << j << std::endl;
    }

    int k = 0;
    do {
        std::cout << k << std::endl;
        k++;
    } while (k < 5);

    return 0;
}