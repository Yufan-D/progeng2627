#include <iostream>
int main(){
    double celsius, fahrenheit;
    std::cout << "Enter temperature in Celsius degrees:" << std::endl;
    std::cin >> celsius;
    fahrenheit = (celsius*9/5)+32;
    std::cout << "Temperature in Fahrenheit degrees is: " << fahrenheit << std::endl;
}