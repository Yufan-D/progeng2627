#include <iostream>
#include <cmath>

int main(){
    double a, b, c;

    std::cout << "Enter three side lengths: ";
    std::cin >> a >> b >> c;

    bool valid = ( ( a + b > c ) && ( a + c > b ) && ( b + c > a ) );
    // Check whether the sides form a valid triangle
    if( valid ){
        if( ( a == b ) && ( b == c ) ){
            std::cout << "equilateral" << std::endl;
        }
        else if( ( a == b ) || ( b == c ) || ( c == a ) ){
            std::cout << "isosceles" << std::endl;
        }
        else{
            std::cout << "scalene" << std::endl;
        }
        std::cout << "perimeter = " << a + b + c << std::endl;
        double s = ( ( a + b + c ) / 2 );
        double area = std::sqrt( s * ( s - a ) * ( s - b ) * ( s - c ));
        std::cout << "area = " << area << std::endl;
    }
    // If valid:
    //   Determine and display the type of triangle
    //   Calculate and display the perimeter
    //   Calculate and display the area using Heron's formula
    else{
        std::cout << "triangle is invalid" << std::endl;
    }
    // Otherwise:
    //   Display a message saying the triangle is invalid
}