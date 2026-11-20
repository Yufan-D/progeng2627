#include <iostream>
#include <string>
int main(){
    double tem_in, tem_out;
    std::string unit_in, unit_out;
    std::cin >> tem_in >> unit_in;
    bool valid_unit = true;
    if( unit_in == "C" || unit_in == "c"){
        tem_out = ( tem_in * ( 9.0 / 5 ) ) + 32;
        unit_out = "F";
    }
    else if( unit_in == "F" || unit_in == "f"){
        tem_out = ( tem_in - 32 ) * ( 5.0 / 9 );
        unit_out = "C";
    }
    else{
        valid_unit = false;
    }
    if( valid_unit ){
        std::cout << tem_out << " " << unit_out << std::endl;
    }
    else{
        std::cout << "error, unit not recognised" << std::endl;
    }
}