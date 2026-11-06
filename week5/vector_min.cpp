#include <iostream>
#include <vector>
#include <cmath>

int min_v(const std::vector<double>& vin) {
     if(vin.size()==0) {
        return -1;
    }
    int curmin=vin[0], min_index=0;
    for(double i=0; i<vin.size(); i++) {
        if(vin[i]<curmin){
            curmin = vin[i];
            min_index = i;

        }
    }
    return min_index;
}

int main() {
    std::vector<double> v{9, 12, 5, 3.2, 1, 0.2};
    std::cout << min_v(v) <<std::endl;

    v = {2,45,333,12.5,4.321};
     std::cout << min_v(v) <<std::endl;

    v = {12,456,67,5,-2.35,5};
    std::cout << min_v(v) <<std::endl;

    std::vector<double> g;
    std::cout << min_v(g) << std::endl;
}
