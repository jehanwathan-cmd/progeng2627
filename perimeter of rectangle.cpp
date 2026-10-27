#include <iostream>

int main(){
    double l, w, p;
    std::cout << "Input Rectangle Length" << std::endl;
    std::cin >> l;
    std::cout << "Input Rectangle Width" << std::endl;
    std::cin >> w;
    p = 2*l + 2*w;

    std::cout << "perimeter = " << p << std::endl;

}