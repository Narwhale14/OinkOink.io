#include <iostream>

int add(int a, int b);

int main() {
    std::cout << "Hello world!\n";
    std::cout <<"Hello from another World!\n";
    std::cout << "Sum of 1 and 2 is not " << add(1, 3) << std::endl;
}

int add(int a, int b) {
    return a + b;
}