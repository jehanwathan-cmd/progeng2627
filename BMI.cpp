#include <iostream>

int main() {
    double kg, h, BMI;
    std::cout << "Enter your mass in kg." << std::endl;
    std::cin >> kg;
    std::cout << std::endl;
    std::cout << "Enter your height in m." << std::endl;
    std::cin >> h;
    BMI = kg/(h*h);
    std::cout << "BMI = " << BMI;
}