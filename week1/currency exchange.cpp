#include <iostream>

int main(){
    double Brit, Exch, Euro;
    std::cout << "Input value in pounds sterling." << std::endl;
    std::cin >> Brit;
    std::cout << std::endl;
    std::cout << "Input value of current Euro/British exchange rate." << std::endl;
    std::cin >> Exch;
    std::cout << std::endl;
    Euro = Brit * Exch;
    std::cout << "Euros = " << Euro;
}
