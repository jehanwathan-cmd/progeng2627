#include <iostream>
#include <vector>
#include <cmath>
int search_vector(double n, const std::vector<double>& v){
    if(v.empty()) {
        return -1;
    }
    for(int i=0; i<v.size(); i++) {
        if(n ==v[i]){
            return i;
        }
    }
    return -1;
}

int main(){
    std::vector<double> v{1,234,45.3,-212.2, 5, 8};
    double n = 5;
    std::cout << search_vector(n, v) << std::endl;

    v = {3, 5, 5, 92, -12, 9};
    n = 5;
    std::cout << search_vector(n, v) << std::endl;

    v = {-8, 6.4, -6.4, -9, 2, -6.4, -9, 100};
    n = -6.4;
    std::cout << search_vector(n, v) << std::endl;

    v= {23,3567.7, 823, 9};
    n = 7;
     std::cout << search_vector(n, v) << std::endl;

    v={};
    n= 7;
    std::cout << search_vector(n, v) << std::endl;

}