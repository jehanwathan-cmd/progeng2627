#include <iostream>
#include <string>
#include <vector>

// for std::pair
#include <utility>

std::string char_to_string(char c){
    std::string s;
    s.push_back(c);
    return s;
}

bool is_palindrome(std::string test_cases) {
    std::string reversed;
    std::string right_way;
    for(int i=test_cases.size()-1; i>=0; i--) {
        if(char_to_string(test_cases[i]) != " "){
            reversed.push_back(test_cases[i]);
    }
    }
    for(int i=0; i<test_cases.size(); i++) {
        if(char_to_string(test_cases[i]) != " "){
            right_way.push_back(test_cases[i]);
        }
    }
    if(right_way == reversed) {
        return true;
    } else {
        return false;
    }

}
int main(){

    std::vector<std::pair<std::string, bool>> test_cases = 
    {
        {"a man a plan a canal panama", true}, 
        {"a man plan a canal panama", false},
        {"a toyota", true},
        {"never odd or even", true},
        {"never even or odd", false}
    };

    for(int i = 0; i < test_cases.size(); i++){
        // each variable of type std::pair has two fields called first and second

        bool test = is_palindrome(test_cases[i].first);

        if(test == test_cases[i].second){
            std::cout << "passed" << std::endl;
        }
        else{
            std::cout << "FAILED" << std::endl;
            std::cout << test_cases[i].first << std::endl;
            std::cout << "expected: " << test_cases[i].second << std::endl;
            std::cout << "got: " << test << std::endl;
        }
    }
}