#include <iostream>

double mypow(double base, int exp){
    double result = 1;
    // we declare a variable for the result
    // (should it be initialised? to what value?)

    // TODO: use a for loop to implement the repeated multiplication algorithm 
    // so that at the end of the loop variable result contains base^exp
    for(int i=0; i < std::abs(exp); i++) {
        result = base*result;
    }

    if (exp < 0) {
        result = 1/result;
    }

    return result;
    // at the end we return the value we computed
    // we *do not print* anything in the function
}

int main() {
    int n, x, val = 0;
    std::cin >> n >> x;
    for (int i = 1; i < n+1; i++) {
        val = mypow(x, i) + val;
    }
    
    std::cout << val;
}