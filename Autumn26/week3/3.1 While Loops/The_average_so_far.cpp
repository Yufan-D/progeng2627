#include <iostream>
int main(){
    int input;
    double average, sum = 0, count = 0;
    std::cout << "enter a number:" << std::endl;
    std::cin >> input;
    while( input != 0 ){
        sum = sum + input;
        count = count + 1;
        average = sum / count;
        std::cout << "the average so far is:" << std::endl << average << std::endl;
        std::cout << "enter a number:" << std::endl;
        std::cin >> input;
    }
}