#include <iostream>
#include <string>

void swap(std::string& a, std::string& b){
    std::string tmp;
    tmp = a;
    a = b;
    b = tmp;
}

int main(){
    std::string n1, n2;

    std::cout << "please enter two text" << std::endl;
    std::cin >> n1 >> n2;

    std::cout << "you entered:" << std::endl;
    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2 << std::endl;

    swap(n1, n2);
    
    std::cout << "after swapping the text:" << std::endl;
    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2 << std::endl;
}