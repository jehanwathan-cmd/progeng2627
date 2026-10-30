#include <iostream>

float maxtwo(float a, float b) {
    float max;
    if(a<b) {
        if(a>b) {
            max = a;
        } else {
            max = b;
        }
        return max;
    }
}

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << maxtwo(a, b);
}