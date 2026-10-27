#include <iostream>
int main(){
    double height, weight, BMI;
    std::cout << "Enter weight in kilograms:" << std::endl;
    std::cin >> weight;
    std::cout << "Enter height in metres:" << std:: endl;
    std::cin >> height;
    BMI = weight/(height*height);
    std::cout << "Your BMI is:" << BMI << std::endl;
}