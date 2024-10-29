#include <iostream>
int main() {
    int x = 1;
    int y = 2;
    int z = x+y;
    std::cout << z;

    double a = 10;
    double b = 20;
    double c = a;
    std::cout << c;

    int p = 10;
    int q = p++;   // (First assign then increment)
    std::cout << p; //(p = 11, q = 10)
    std::cout << q;     
}
