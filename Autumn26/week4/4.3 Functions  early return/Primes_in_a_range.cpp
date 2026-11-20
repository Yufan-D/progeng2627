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
    int a, b;
    
    std::cout << "Enter 2 number" << std::endl;
    std::cin >> a >> b;

    for(int i = a; i <= b; i++){
        if(smallest_factor(i) == 0){
            std::cout << i << std::endl;
        }
    }
}