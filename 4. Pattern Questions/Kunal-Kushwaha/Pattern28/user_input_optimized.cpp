/*  Pattern28

         *
        * *
       * * *
      * * * *
     * * * * *
      * * * *
       * * *
        * *
         * 
         
*/

#include<iostream>

int main () {

    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    int m = 2 * n - 1;
    
    for (int row = 1; row <= (2 * n - 1); row++) {

            int totalSpacesInCol = row < n ? n - row : row - n;

            int totalStarsInCol = row < n ? row : m - row + 1;

            for (int s = 1; s <= totalSpacesInCol; s++) {

                std::cout << " ";
            } 

            for (int col = 1; col <= totalStarsInCol; col++) {

                std::cout << "* ";
            } 

            std::cout << "\n";
    }

    return 0;
}