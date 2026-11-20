#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstdlib>

int search_vector(std::string s, const std::vector<std::string>& v){
    if(v.empty()) {
        return -1;
    }
    for(int i=0; i<v.size(); i++) {
        if(s ==v[i]){
            return i;
        }
    }
    return -1;
}

void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout) {
    for(int i=0; i<vin1.size(); i++) {
    vout.push_back(vin2[search_vector(vin1[i], vin2)]);
}
}

void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    for(int i=0; i<vin1.size();i++){
        vout.push_back(vin1[i]);
    }
    for(int j=0; j<vin2.size(); j++){
        vout.push_back(vin2[j]);
    }

}

int main() {
    std::string input_file1;
    std::string input_file2;
    std::string uniony_file;
    std::string inter_file;
    std::ifstream infile1;
    std::ifstream infile2;
    std::ofstream uniony;
    std::ofstream inters;
    std::vector<std::string> v1;
    std::vector<std::string> v2;
    std::vector<std::string> v_u;
    std::vector<std::string> v_i;

    std::cout << "Input file names:" << std::endl;
    std::cin >> input_file1 >> input_file2;

    infile1.open(input_file1);
    if(!infile1.is_open()){
        std::cout << "error opening file"<<std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp;
    while(infile1 >> tmp) {
        v1.push_back(tmp);   
    }
    infile1.close();

    infile2.open(input_file2);
    if(!infile2.is_open()){
        std::cout << "error opening file"<<std::endl;
        return EXIT_FAILURE;
    }

    while(infile2 >> tmp) {
        v2.push_back(tmp);   
    }
    infile2.close();

    union_vector(v1, v2, v_u);
    intersection_vector(v1, v2, v_i);

    std::cout << "Output file names: " << std::endl;
    std::cin >> uniony_file >> inter_file;

    uniony.open(uniony_file);
    if(!uniony.is_open()) {
         std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    for(int i = v_u.size()-1; i>=0; i--) {
        uniony << v_u[i] <<std::endl;
    }
    uniony.close();

    
    inters.open(inter_file);
    if(!inters.is_open()) {
         std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    for(int i = v_i.size()-1; i>=0; i--) {
        inters << v_i[i] <<std::endl;
    }
    inters.close();






    
}