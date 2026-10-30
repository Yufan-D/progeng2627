#include <iostream>
int main(){
    int a, b, quotion = 0;
    std::cin >> a >> b;
    while( a >= b ){
        quotion = quotion + 1;
        a = a - b;
    }
    std::cout << "the quotion is " << quotion << std::endl;
    std::cout << "the remainder is " << a << std::endl;
}