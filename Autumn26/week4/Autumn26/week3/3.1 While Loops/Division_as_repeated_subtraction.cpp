#include <iostream>
int main(){
    int a, b, quotient = 0;
    std::cin >> a >> b;
    while( a >= b ){
        quotient = quotient + 1;
        a = a - b;
    }
    std::cout << "the quotient is " << quotient << std::endl;
    std::cout << "the remainder is " << a << std::endl;
}