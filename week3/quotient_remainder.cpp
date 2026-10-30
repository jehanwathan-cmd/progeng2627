#include <iostream>
#include <string>

int main() {
    int a, b, r, q = 0;
    std::cin >> a >> b;

    if (a >= b) {
        r = a-b;
        q = q+1;
        while(r >= b) {
            r = r-b;
            q = q+1;

        }
        std::cout << "q = " << q << std::endl;
        std::cout << "r = " << r << std::endl;
    } else {
        std::cout << "can not compute" << std::endl;
    }
}
    
