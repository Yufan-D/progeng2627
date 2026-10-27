#include <iostream>
int main(){
    double side1, side2, area, perimeter;
    std::cout << "Enter the first side:" << std::endl;
    std::cin >> side1;
    std::cout << "Enter the second side:" << std::endl;
    std::cin >> side2;
    perimeter = 2*side1 + 2*side2;
    area = side1 * side2;
    std::cout << "Area = " << area << std::endl;
    std::cout << "Perimeter = " << perimeter << std::endl;
}