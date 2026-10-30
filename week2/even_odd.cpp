#include <iostream>

int main(){
    int n;

    std::cout << "please enter a number" << std::endl;
    std::cin >> n;


    if (n%2 == 0){
        std::cout << "The number is even" << std::endl;
    } else{
        std::cout << "The number is odd" << std::endl;    
    }
    



    // later we will upgrade this example to 
    // instead print a message saying
    // "the number is even" or "the number is odd" 
    // depending on the value of the remainder
    // the above is now completed
}
