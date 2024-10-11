#include <iostream>

class print {
    public:
    void show(int i ) {
        std::cout << "The number is: " << i << '\n';
    }

    void show(double d ) {
        std::cout << "The number is: " << d << '\n';
    }
};

int main() {
    print p;
    p.show(10);
    p.show(3.14);
    return 0;
}