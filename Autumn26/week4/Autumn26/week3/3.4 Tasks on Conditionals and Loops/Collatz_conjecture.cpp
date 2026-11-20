#include <iostream>
int main(){
    int n, i = 0;
    std::cin >> n;
    int max = n;
    while( n != 1 ){
        if( n%2 == 0 ){
            n = n/2;
        }
        else{
            n = 3 * n + 1;
        }
        i = i + 1;
        std::cout << n << "\t";
        if( n > max ){
            max = n;
        }
    }
     std::cout << std::endl << i << " steps" << std::endl;
     std::cout << "max = " << max << std::endl;
}