#include <iostream>
int main() {
    int a = 1;
    int b = 2;

    //swaping variables
    int c = a;
    a = b , b = c;
    std::cout << a;
    std::cout << b;
}