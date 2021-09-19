#include <iostream>

int main(int argc, const char * argv[]) {
    int x; // left value
    x = 123; // '123' is right value
    
    std::cout << x << std::endl;
    std::cout << &x << std::endl; // memory address
    return 0;
}
