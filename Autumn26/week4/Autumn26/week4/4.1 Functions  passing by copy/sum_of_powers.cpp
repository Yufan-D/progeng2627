#include <iostream>
#include <cmath>

int main(){
    int n;
    double x, sum = 0;

    std::cout << "type in x n" << std::endl;
    std::cin >> x >> n;

    for(int i = 1; i <= n; i++){
        sum = sum + std::pow(x, i);
    }

    std::cout << "Sum = " << sum << std::endl;
}