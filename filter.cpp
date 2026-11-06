#include <iostream>
#include <vector>

int main(){
    std::vector<int> filtr;
    int n;
    int t;
    int inp;
    std::cout << "input n: " << std::endl;
    std::cin >> n;
    std::cout << "input n values." << std::endl;
    for(int i=0; i<n; i++){
        std::cin >> inp;
        filtr.push_back(inp);
    } 

    std::cout << "input t: " << std::endl;
    std::cin >> t;
    for(int j=0; j<filtr.size(); j++){
        if(filtr[j]<t){
        std::cout<<filtr[j]<<" ";
        }
    }

}
