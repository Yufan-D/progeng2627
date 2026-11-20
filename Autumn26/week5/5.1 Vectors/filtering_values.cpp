#include <iostream>
#include <vector>

int main(){
    int n, tmp;
    std::vector<int> v;

    std::cout << "Enter n: " << std::endl;
    std::cin >> n;

    std::cout << "Enter n numbers: " << std::endl;
    for(int i = 0; i < n; i++){
        std::cin >> tmp;
        v.push_back(tmp);
    }

    int t;
    std::cout << "Enter threshold: ";
    std::cin >> t;

    for(int i = 0; i < n; i++){
        if(v[i] < t){
            std::cout << v[i] << " ";
        }
    }
    std::cout << std::endl;
}