#include <iostream>
#include <vector>

int search_vector(int n, const std::vector<int>& vin){

    for(int i = 0; i < vin.size(); i++){
        if(vin[i] == n){
            return i;
        }
    }

    return -1;
}

int main(){
    std::vector<int> v{4, 8, 2, 8, 5};
    std::cout << search_vector(8, v) << std::endl;
}