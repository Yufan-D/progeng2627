#include <iostream>
int main(){
    int input, sum = 0;
    std::cout << "enter a number:" << std::endl;
    std::cin >> input;
    while( input != 0 ){
        sum = sum + input;
        std::cout << "the sum so far is: " << sum << std::endl;
        std::cout << "enter a number:" << std::endl;
        std::cin >> input;
    }
}