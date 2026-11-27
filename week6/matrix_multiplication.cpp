#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>

std::vector<double> line_to_vector(std::string s){

    std::stringstream ss;
    std::string tmp;
    std::vector<double> out;

    ss << s;
    while(ss >> tmp){
        out.push_back(std::stod(tmp));
    }
    return out;
}

std::vector<std::vector<double>> read_matrix_from_file(std::string input_file){

    std::ifstream infile;
    infile.open(input_file);
    if(!infile.is_open()){
        std::cout << "error opening file " << input_file << std::endl;
        std::exit(EXIT_FAILURE);
    }

    std::string line;
    std::vector<std::vector<double>> out;

    while(std::getline(infile, line)){
        out.push_back(line_to_vector(line));
    }

    return out;
}

std::string matrix_to_string(const std::vector<std::vector<double>>& m){

    std::stringstream out;
    out << std::fixed << std::setprecision(2);

    for(int i = 0; i < m.size(); i++){
        for(int j = 0; j < m[0].size(); j++){
            out << (m[i][j]) << "\t";
        }
        out << "\n";
    }

    return out.str();
}

std::vector<double> column_extract(const std::vector<std::vector<double>>& m, int n) {
    std::vector<double> out;
    for(int i=0; i<m.size(); i++) {
        out.push_back(m[i][n]);
    }
    return out;
}

std::vector<double> scalar_product(const std::vector<double>& v, const std::vector<std::vector<double>>& m){
    std::vector<double> out;
    for(int i=0; i<m.size(); i++){
        double k=0;
        for(int j=0; j<v.size(); j++) {
            k=k+m[i][j]*v[j];
        }
        out.push_back(k);
    }
    return out;
}

std::vector<std::vector<double>> matrix_mult(const std::vector<std::vector<double>>& m1, const std::vector<std::vector<double>>& m2) {
    std::vector<std::vector<double>> out;
    std::vector<double> out_vector;
    std::vector<std::vector<double>> flip;

    for(int i=0; i<m2[0].size(); i++){
        flip.push_back(scalar_product(column_extract(m2, i), m1));
    }
    
    for(int i=0; i<flip[0].size(); i++) {
        out_vector.clear();
        for(int j=0; j<flip.size(); j++) {
            out_vector.push_back(flip[j][i]);
        }
        out.push_back(out_vector);
    }
    return out;

}

int main(int argc, char* argv[]){

    if(argc != 3){
        std::cout << "two arguments needed" << std::endl;
        return EXIT_FAILURE;
    }

    std::vector<std::vector<double>> m1 = read_matrix_from_file(argv[1]);
    std::vector<std::vector<double>> m2 = read_matrix_from_file(argv[2]);

    std::vector<std::vector<double>> m3 = matrix_mult(m1, m2);

    std::cout << matrix_to_string(m1) << std::endl;
    std::cout << "*" << std::endl << std::endl;
    std::cout << matrix_to_string(m2) << std::endl;
    std::cout << "=" <<std::endl << std::endl;
    std::cout << matrix_to_string(m3) << std::endl;
}