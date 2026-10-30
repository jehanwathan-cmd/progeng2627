#include <iostream>

float maxthree(float a, float b, float c) {
    float max=0;
    for(int i=0; i<max; i++)
    if(a>max) {
        max=a;
    }
    if (b>max) {
        max=b;
    }
    if (c>max) {
        max=c;
    }
    return max;
}

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    std::cout << maxthree(a, b, c);
}
