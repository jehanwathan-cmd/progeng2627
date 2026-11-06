#include <iostream>
#include <vector>

int main(){
    std::vector<int> occ;
    std::vector<int> ind;
    int n, s, inp, counter=0;
    std::cout << "input n: " << std::endl;
    std::cin >> n;
    for(int i=0; i<n; i++){
        std::cout<<"please enter a value." <<std::endl;
        std::cin >> inp;
        occ.push_back(inp);
    } 
    std::cout << "Enter a number s." << std::endl;
    std::cin >> s;
    for(int j=0; j<n; j++) {
        if(occ[j]==s){
            counter++;
            ind.push_back(j);
        }
    }
    if (counter>0) {
    std::cout << "there are " << counter << " occurences of " << s << " at indices: " << std::endl;
    for(int k=0; k<counter; k++) {
        std::cout << ind[k] << std::endl;
    }
    } else {
        std::cout << "There are no occurences of " << s << "." << std::endl;
    }
}