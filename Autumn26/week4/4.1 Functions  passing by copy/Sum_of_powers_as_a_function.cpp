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

double sum(double base1, int exp1){
    double sum = 0;
    for(int i = 1; i <= exp1; i++){
        sum = sum + mypow(base1, i);
    }
    return sum;
}

int main(){
    std::cout << "2 3, sum of power = " << sum(2, 3) << std::endl;
    std::cout << "5 4, sum of power = " << sum(5, 4) << std::endl;
    std::cout << "2.5 3, sum of power = " << sum(2.5, 3) << std::endl;
}