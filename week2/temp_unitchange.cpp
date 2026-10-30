#include <iostream>
#include <string>

int main() {
    double length_in, length_out;
    std::string unit_in, unit_out;

    // we declare variables for the input and the output
    // the length is a number, the unit name is text


    std::cin >> length_in >> unit_in;
    // we don't print a prompt, we just read the input
    bool valid_unit = true;
    if((unit_in == "C") || (unit_in == "c")){
        unit_out = "F";
        length_out = (length_in*9/5)+32 ;
        
    }
    else if((unit_in == "F") || (unit_in == "f")  ){
        unit_out = "C";
        length_out = (length_in-32)*5/9;
    
    } else {
        valid_unit = false;
    }
    if (valid_unit == false) {
        std::cout << "error, unit is wrong, fuck off." << std::endl;
    } else {
        std::cout << length_out << unit_out << std::endl;
    }

}

