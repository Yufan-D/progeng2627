#include <iostream>
int main(){
    int n, c2 = 0;
    std::cin >> n;
    while( c2 < n ){
        c2++;
        int c = 0;
        while( c < n ){
            c++;
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}