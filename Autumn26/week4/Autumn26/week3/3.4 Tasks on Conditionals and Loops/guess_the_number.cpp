#include <iostream>
#include <string>

int main(){
    int max, min, mid;
    std::string feed;

    std::cin >> min >> max;
    
    mid = ( max + min ) / 2;

    std::cout << mid << " high or low or yes" << std::endl;
    std::cin >> feed;

    while( feed != "yes" ){
        if( feed == "high" ){
            max = mid - 1;
        }
        else{
            min = mid + 1;
        }
        mid = ( min + max ) / 2;
        std::cout << mid << " high or low or yes" << std::endl;
        std::cin >> feed;
    }
}