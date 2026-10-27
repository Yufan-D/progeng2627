#include <iostream>
int main(){
    double pounds, rate, Euros;
    std::cout << "Enter the amount of money in British Pounds" << std::endl;
    std::cin >> pounds;
    std::cout << "Enter the current exchange rate to Euros" << std::endl;
    std::cin >> rate;
    Euros = pounds*rate;
    std::cout << "Equivalent amount in Euros: " << Euros << std::endl;
}