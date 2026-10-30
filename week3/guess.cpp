#include <iostream>
#include <string>

int main() {
    int l, u, g;
    int res = 0;

    std::cout << "input lower and upper bounds: " << std::endl;
    std::cin >> l >> u;
    while(res != 2) {
        g = (l+u)/2;
        std::cout << "guess: " << g << std::endl;
        std::cout << "If higher, input 1, lower input 0, and if correct input 2." << std::endl;
        std::cin >> res;
        if (res==1) {
         l=g;
    }   else if (res==0) {
         u=g;
    } 
}
std::cout <<"Your number is: " << g;

    
}
