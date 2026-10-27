#include <iostream>

int main() {
    int m;
    std::cin >> m;

    for(int p = 1; p < m+1; p++) {
        for(int i = 1; i < m+1; i++) {
            std::cout << i*p << "\t";
        }
        std::cout << std::endl;
    } 
    
}