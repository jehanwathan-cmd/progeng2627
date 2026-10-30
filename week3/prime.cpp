// first version, not the most efficient one
#include <iostream>
#include <cmath>


int main(){
    double n;
    bool found_factor = false;
    // initially we haven't found any factors...

    std::cout << "please enter an integer greater than 1" << std::endl;
    // we assume that the user enters an integer greater than 1
    std::cin >> n;
    int m = n;
    int lim = sqrt (n);


    // cf like candidate factor
    // (begins at 2, smallest candidate factor)

    for(int cf = 2; cf<lim; cf++){

        if( m%cf == 0){ // n can be divided by cf...

            found_factor = true;
            cf = lim;
            //...it means we have found a factor!
        }

    }

    if(found_factor){
        std::cout << "the number is not prime" << std::endl;
    }
    else{
        std::cout << "the number is prime" << std::endl;
    }
}
