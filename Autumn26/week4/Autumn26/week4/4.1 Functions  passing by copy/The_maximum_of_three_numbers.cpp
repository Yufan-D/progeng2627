#include <iostream>

double max(double a, double b, double c){
    double max;
    if(a >= b){
        max = a;
    }
    else{
        max = b;
    }
    if(c >= max){
        max = c;
    }
    return max;
}

int main(){
    std::cout << "3 4 5, max = " << max(3, 4, 5) << std::endl;
    std::cout << "6 3 10, max = " << max(6, 3, 10) << std::endl;
    std::cout << "-30 5.9 12.5, max = " << max(-30, 5.9, 12.5) << std::endl;
}