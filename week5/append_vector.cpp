#include<iostream>
#include <vector>

void append_vectors(const std::vector<double>& vin1, const std::vector<double>& vin2, std::vector<double>& vout) {
    for(int i=0; i<vin1.size(); i++) {
        vout.push_back(vin1[i]);
    }
    for(int i=0; i<vin2.size(); i++) {
        vout.push_back(vin2[i]);
    }
}



int main() {
    std::vector<double> vin1{1,4,5,6};
    std::vector<double> vin2{12,45,67,89};
    std::vector<double> vout;
    append_vectors(vin1, vin2, vout);
    for(int i=0; i<vout.size(); i++) {
    std::cout << vout[i] <<std::endl;
    }
}