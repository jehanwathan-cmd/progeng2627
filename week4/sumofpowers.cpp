#include <iostream>
#include <cmath>

int main() {
    int n, x, val = 0;
    std::cin >> n >> x;
    for (int i = 1; i < n+1; i++) {
        val = std::pow(x, i) + val;
    }
    
    std::cout << val;
}