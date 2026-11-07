#include <iostream>
#include <vector>

void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout) {
    for(int i=0; i<vin.size(); i++) {
        if(vin[i]<t) {
            vout.push_back(vin[i]);
        }
    }
}

int main() {
    std::vector<double> vout;
    std::vector<double> v{2, 4, 67, 34, 13, 110, 1099, 891, 889};
    int t=890;
    filter_v(v, t, vout);
    for(int i=0; i<vout.size(); i++) {
        std::cout << vout[i] <<std::endl;
    }
}