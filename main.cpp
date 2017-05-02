#include <iostream>
#include "lib.h"

int main() {
    int digit;

    std::cout << "Enter digit: ";
    std::cin >> digit;
    std::cout << "\n";
    
    lib lib1(digit);
    std::cout << "Hello from executable" << std::endl;
    return 0;
}