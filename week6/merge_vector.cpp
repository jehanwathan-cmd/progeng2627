#include <iostream>
#include <vector>

void merge_vectors_int(const std::vector<int>& v1, const std::vector<int>& v2, std::vector<int>& vout) {
    vout.clear();
    int v1_indy=0;
    int v2_indy=0;
    while(v1_indy != v1.size() && v2_indy != v2.size()) {
        if (v1[v1_indy] < v2[v2_indy]) {
            vout.push_back(v1[v1_indy]);
            v1_indy++;
        } else {
            vout.push_back(v2[v2_indy]);
            v2_indy++;
        }

    }
    if(v2_indy < v2.size()) {
        for(int i=v2_indy; i<v2.size(); i++) {
            vout.push_back(v2[i]);
        }
    }

    if(v1_indy < v1.size()) {
        for(int i=v1_indy; i<v1.size(); i++) {
            vout.push_back(v1[i]);
        }
    }
}

int main(){

    std::vector<int> v1;
    std::vector<int> v2;
    std::vector<int> out;

    std::vector<int> expected_output;

    v1 = {1, 3, 5, 6};
    v2 = {4, 6, 10};
    expected_output = {1, 3, 4, 5, 6, 6, 10};

    merge_vectors_int(v1, v2, out);

    if(out == expected_output){ // we can compare the content of vectors (at least in some cases)
        std::cout << "passed" << std::endl;
    }
    else{
        std::cout << "not passed" << std::endl;
    }
    for(int i=0; i<out.size(); i++) {
        std::cout << out[i] << " ";
    }

    v1 = {8, 12, 13, 40};
    v2 = {7, 8, 100, 112, 114, 1000};
    expected_output = {7, 8, 8, 12, 13, 40, 100, 112, 114, 1000};

    merge_vectors_int(v1, v2, out);

    if(out == expected_output){ // we can compare the content of vectors (at least in some cases)
        std::cout << "passed" << std::endl;
    }
    else{
        std::cout << "not passed" << std::endl;
    }
    for(int i=0; i<out.size(); i++) {
        std::cout << out[i] << " ";
    }

    v1 = {7, 10, 12, 234};
    v2 = {4, 5, 20, 120};
    expected_output = {4, 5, 7, 10, 12, 20, 120, 234};

    merge_vectors_int(v1, v2, out);

    if(out == expected_output){ // we can compare the content of vectors (at least in some cases)
        std::cout << "passed" << std::endl;
    }
    else{
        std::cout << "not passed" << std::endl;
    }
    for(int i=0; i<out.size(); i++) {
        std::cout << out[i] << " ";
    }

    v1 = {1, 2, 3, 4};
    v2 = {5, 6, 7, 8};
    expected_output = {1, 2, 3, 4, 5, 6, 7, 8};

    merge_vectors_int(v1, v2, out);

    if(out == expected_output){ // we can compare the content of vectors (at least in some cases)
        std::cout << "passed" << std::endl;
    }
    else{
        std::cout << "not passed" << std::endl;
    }
    for(int i=0; i<out.size(); i++) {
        std::cout << out[i] << " ";
    }

}