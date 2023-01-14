/* Pattern9

    * * * * * * * * *
      * * * * * * *
        * * * * *
          * * *
            *
            
*/

#include<iostream>

int main () {

    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    for (int row = 1; row <= n; row++) {
        int totalSpacesInRow = (row - 1);
        for (int s = 1; s <= totalSpacesInRow; s++) {
            std::cout << "  ";
        }
        
        int totalColInRow = (2 * (n - row + 1) - 1);
        for (int col = 1; col <= totalColInRow; col++) {
            std::cout << "* ";
        }
        
        std::cout << "\n";
    }

    return 0;
}

/* Logic

If user input is n = 5 then we observe:
    totalSpacesInRow          totalColInRow
    (1 - 1) = 0 <- 1st row -> 9 = (2 * (5 - 1 + 1)) - 1 
    (2 - 1) = 1 <- 2nd row -> 7 = (2 * (5 - 2 + 1)) - 1
    (3 - 1) = 2 <- 3rd row -> 5 = (2 * (5 - 3 + 1)) - 1
    (4 - 1) = 3 <- 4th row -> 3 = (2 * (5 - 4 + 1)) - 1
    (5 - 1) = 4 <- 5th row -> 1 = (2 * (5 - 5 + 1)) - 1
    .                         .
    .                         .
    (row no - 1)              (2 * (n - row no + 1) - 1)
                              OR
                              (2 * n) - (row no + totalSpacesInRow) 
                              OR
                              (2 * n) - ((2 * row no) - 1)  

*/