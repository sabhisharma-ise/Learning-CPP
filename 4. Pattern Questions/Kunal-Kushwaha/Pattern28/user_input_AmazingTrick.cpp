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
    
    //printing upper-half
    for (int row = 1; row < n; row++) {

            int totalSpacesInCol = n - row;

            for (int s = 1; s <= totalSpacesInCol; s++) {

                std::cout << " ";
            } 

            int totalStarsInCol = row;

            for (int col = 1; col <= totalStarsInCol; col++) {

                std::cout << "* ";
            } 

            std::cout << "\n";
    }

    //printing lower-half
    for (int row = n; row >= 1; row--) {

            int totalSpacesInCol = n - row;

            for (int s = 1; s <= totalSpacesInCol; s++) {

                std::cout << " ";
            } 

            int totalStarsInCol = row;

            for (int col = 1; col <= totalStarsInCol; col++) {

                std::cout << "* ";
            } 

            std::cout << "\n";
    }

    return 0;
}