#include <iostream>

int main() {
    double n;

    std::cout << "Enter a number" << std::endl;
    std::cin >> n;
    std::cout << std::endl;

    if (n<0 == true) {
        n = -n;
    }

    std::cout << "absolute n =" << n << std::endl;
    
}
