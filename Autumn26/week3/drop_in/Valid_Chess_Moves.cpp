#include <iostream>

int main(){
    
    int a, b, c, d;
    
    std::cout << "Enter the source square in the form a b" << std::endl;
    std::cin >> a >> b;
    std::cout << "Enter the destination square in the form c d" << std::endl;
    std::cin >> c >> d;
    
    bool in_board = ( ( a >= 1 ) && ( a <= 8 ) && ( b >= 1 ) && ( b <= 8 ) && ( c >= 1 ) && ( c <= 8 ) && ( d >= 1 ) && ( d <= 8 ));
    bool valid = ( ( ( a - c ) * ( a - c ) + ( b - d ) * ( b - d ) ) == 5 );
    
    if( in_board && valid ){
        std::cout << "valid move" << std::endl;
    }
    else{
        std::cout << "invalid move" << std::endl;
    }
}