#include <iostream>

int smallest_factor(int n){
    for(int cf = 2; cf < n; cf++){

        if( (n % cf) == 0){ // n can be divided by cf...

            return cf;
            //...it means we have found a factor!
        }
    }
    return 0;
}

int main(){
    int n;
    std::cout << "Enter a number" << std::endl;
    std::cin >> n;
    std::cout << "The smallest factor is " << smallest_factor(n) << std::endl;
}