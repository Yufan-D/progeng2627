#include <iostream>

double mypow(double base, int exp){
    double result = 1; 
        // we declare a variable for the result
        // (should it be initialised? to what value?)

    if(exp < 0){
        exp = - exp;
        for(int i = 0; i < exp; i++){
            result = result / base;
        }
        return result;
    }
    
    else{
        for(int i = 0; i < exp; i++){
            result = result * base;
        }
        return result;
    // TODO: use a for loop to implement the repeated multiplication algorithm 
    // so that at the end of the loop variable result contains base^exp
    }
}

int main(){
    int n;
    double x, sum = 0;

    std::cout << "type in x n" << std::endl;
    std::cin >> x >> n;

    for(int i = 1; i <= n; i++){
        sum = sum + mypow(x, i);
    }

    std::cout << "Sum = " << sum << std::endl;
}