// this program needs to be fixed 
    #include <iostream>
    #include <string>

int main(){
    std::string user_name;
    std::string user_surname;
    std::cout << "hello" << std::endl;

    std::cout << "what is ur name?" << std::endl;
    std::cin >> user_name;
    std::cout << std::endl;

    std::cout << "what is ur surname?" <<std::endl;
    std::cin >> user_surname;
    std::cout << std::endl;

    std::cout << "Hi " << user_name << " " << user_surname << ", nice to meet you!";


}