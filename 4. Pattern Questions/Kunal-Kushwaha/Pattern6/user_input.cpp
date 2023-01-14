/* Pattern6 (Half Pyramid after 180° rotation, input = n)

            *
          * *
        * * *
      * * * *
    * * * * *

*/

#include<iostream>

int main() {

    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    for (int row = 1; row <= n; row++) {
        int totalSpacesInRow = (n - row);
        for (int s = 1; s <= totalSpacesInRow; s++) {
            std::cout << "  ";
        }
        int totalColInRow = row;
        for (int col = 1; col <= totalColInRow; col++) {
            std::cout << "* ";
        } std::cout << "\n";
    }   

    return 0;
}

/* Logic

If user input is n = 5 then we observe:
   totalSpacesInRow         totalColInRow
    (5 - 1) = 4 <- 1st row -> 1 
    (5 - 2) = 3 <- 2nd row -> 2 
    (5 - 3) = 2 <- 3rd row -> 3 
    .                         .
    .                         .  
    (n - row no)            (row no)

*/