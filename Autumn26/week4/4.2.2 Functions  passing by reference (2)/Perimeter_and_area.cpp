#include <iostream>

void cal(double len, double wid, double& per, double& are){
    per = 2 * len + 2 * wid;
    are = len * wid;
}

int main(){
    double len, wid, per, are;
    std::cout << "Type length and width" << std::endl;
    std::cin >> len >> wid;
    cal(len, wid, per, are);
    std::cout << "Perimeter = " << per << std::endl;
    std::cout << "Area = " << are << std::endl;
}