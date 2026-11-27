#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <cstdlib>

void word_count(const std::vector<std::string>& v_data, const std::vector<std::string>& v_sel, std::vector<int>& vout) {
   
    for(int i=0; i<v_sel.size(); i++) {
        int counter=0;
        for(int j=0; j<v_data.size(); j++) {
            if(v_sel[i] == v_data[j]) {
                counter++;
            }
        }
        vout.push_back(counter);
    }
} 

int main() {
    std::string data_name, sel_name, outfile_name;
    std::ifstream infile_data, infile_sel;
    std::ofstream outfile;
    std::vector<std::string> v_data, v_sel;
    std::vector<int> vout;

    std::cout << "input data text and selecting text file names." << std::endl;
    std::cin >> data_name >> sel_name;
    infile_data.open(data_name);
    infile_sel.open(sel_name);
    if(!infile_data.is_open() || !infile_sel.is_open() ) {
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp;

    while(infile_data >> tmp) {
        v_data.push_back(tmp);
    }
    while(infile_sel >> tmp) {
        v_sel.push_back(tmp);
    }
    infile_data.close();
    infile_sel.close();

    word_count(v_data, v_sel, vout);

    std::cout << "Input output file name." << std::endl;
    std::cin >> outfile_name;
    outfile.open(outfile_name);
    if(!outfile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    for(int i=0; i<v_sel.size(); i++) {
        outfile << v_sel[i] << ": " << vout[i] << std::endl; 
    }
    outfile.close();
}