#include <iostream>

void div(int a, int b, int& quo, int& rem){
    quo = a / b;
    rem = a % b;
}

int main(){
    int a, b, quo, rem;
    std::cout << "Type in a and b" << std::endl;
    std::cin >> a >> b;
    div(a, b, quo, rem);
    std::cout << "Quotient is " << quo << std::endl;
    std::cout << "Remainder is " << rem << std::endl;
}