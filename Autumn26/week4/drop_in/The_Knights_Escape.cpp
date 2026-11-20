#include <iostream>
#include <cstdlib>
#include <ctime>


int main() {
    // Seed the random number generator
    std::srand(std::time(NULL));

    // Generate random coordinates from 2 to 7
    int irow = std::rand() % 6 + 2;
    int icol = std::rand() % 6 + 2;
    
    // Generate and display a random starting position
    std::cout << "The starting position is ( " << icol << " , " << irow << " )" << std::endl;
    
    // Initialise the move counter
    int row1;
    int col1;
    bool escape = false;

    while(!escape){
        int row = irow;
        int col = icol;
        int counter = 0;
        // While the knight has not reached a corner square:
        while(!((col == 1 && row == 1)||(col == 1 && row == 8)||(col == 8 && row == 1)||(col == 8 && row == 8)) && counter < 5 ){
        
            // Read destination coordinates from the user
            std::cout << "destination coordinates?" << std::endl;
            std::cin >> col1 >> row1;
            // If the move is valid:
         if((col1 > 0 && col1 < 9) && (row1 > 0 && row1 < 9) && ((col - col1) * (col - col1) + (row - row1) * (row - row1) == 5)){
            col = col1;
            row = row1;
            counter++;
            std::cout << "New pstiont is ( " << col << " , " << row << " )" << std::endl;
            // Update position, increment move counter, display new position
            }
            else{
            std::cout << "invalid move" << std::endl;
            // Otherwise:
            // Display invalid move message
            }
        }
        if((col == 1 && row == 1)||(col == 1 && row == 8)||(col == 8 && row == 1)||(col == 8 && row == 8)){
            escape = true;
            std::cout << "Total move: " << counter << std::endl;
        }
        else{
            std::cout << "Try again" << std::endl;
        }
    }
    // Display the total number of valid moves
    // taken to reach a corner square.
}