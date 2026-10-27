#include <iostream>

int main() {
    int n, curmax, s = 0;
    std::cin >> n;
    curmax=n;

    while(n != 1) {
            if (n%2 == 0) {
                n = n/2;
            } else {
                n=3*n+1;
            }
            if (n > curmax) {
                curmax = n;
            }
            std::cout << n << " ";
            s = s+1;
}
std::cout << std::endl;
std::cout << "steps: " << s << std::endl;
std::cout << "max number: " << curmax << std::endl;
}