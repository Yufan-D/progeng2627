#include <iostream>
#include <string>
int main(){
    std::string input;
    std::cin >> input;
    while( input != "STOP" ){
        std::cout << input << std::endl;
        std::cin >> input;
    }
}