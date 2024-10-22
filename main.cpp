#include <iostream>

int add(int a, int b);
void no();
void yes();
void ring();
void why();

int main() {
    std::cout << "Hello world!\n";
    std::cout <<"Hello from another World!\n";
    std::cout << "Sum of 1 and 2 is not " << add(1, 3) << std::endl;
    no();
    yes();
    ring();
    why();
}

int add(int a, int b) {
    return a + b;
}

void no() {
    std::cout << "no\n";
}

void yes() {
    std::cout << "yes\n";
}

void ring() {
    std::cout << "ring\n";
}
void why(){
    std::cout <<"why?\n";
}