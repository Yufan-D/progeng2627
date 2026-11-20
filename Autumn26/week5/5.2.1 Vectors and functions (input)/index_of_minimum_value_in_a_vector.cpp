#include <iostream>
#include <vector>

int min_vector_element(const std::vector<double>& vin){
    if(vin.size() == 0){
        return -1;
    }
    
    else{
        int min_index = 0;
    
        for(int i = 1; i < vin.size(); i++){
            if(vin[min_index] >= vin[i]){
                min_index = i;
            }
        }

        return min_index;
    }

}

int main(){
    std::vector<double> v{10, 3, 5, 8};
    std::cout << min_vector_element(v) << std::endl;
}