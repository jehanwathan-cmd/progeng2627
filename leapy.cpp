#include <iostream>

int main() {
    int year;
    std::cout << "Input year: " << std::endl;
    std::cin >> year;
    std::cout << std::endl;
    if (year%4 == 0) {
        if (year%100 == 0) {
            
            if (year%400 == 0) {
                std::cout << year << " is a leap year :)" << std::endl;
            } else {
            std::cout << year << " is not a leap year :(" << std::endl;

        }} else {
            std::cout << year << " is a leap year! :)" << std::endl;
        }
    } else {
        std::cout << year << " is not a leap year :(" << std::endl;
    }
}