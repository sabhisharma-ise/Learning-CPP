/* Pattern13 (Hollow Full Pyramid)

         *
        * *
       *   *
      *     *
     ********* 

*/

#include<iostream>

int main () {

     int n;
     std::cout << "Enter a number: ";
     std::cin >> n;

     for (int row = 1; row <= n; row++) {
          int totalSpacesInRow = (n - row);
          for (int s = 1; s <= totalSpacesInRow; s++) {
               std::cout << " ";
          }

          int totalColInRow = (2 * row) - 1;
          for (int col = 1; col <= totalColInRow; col++) {
               if (row == n || (col == 1) || col == (2 * row) - 1) {
                    std::cout << "*";
               } else {
                    std::cout << " ";
               }
          }
          
          std::cout << "\n";
     }

     return 0;
}

/* 

(Similar to Pattern 8 
          +
one if-else condition)

If user input is n = 5 then we observe:
     totalSpacesInRow      totalColInRow
     (5 - 1) = 4 <- 1st row -> 1 = (2 * 1) - 1
     (5 - 2) = 3 <- 2nd row -> 3 = (2 * 2) - 1
     (5 - 3) = 2 <- 3rd row -> 5 = (2 * 3) - 1
     (5 - 4) = 1 <- 4th row -> 7 = (2 * 4) - 1
     (5 - 5) = 0 <- 5th row -> 9 = (2 * 5) - 1
     .                        .
     .                        .
     .                        .
     (n - row no)             (2 * row no) - 1
                              |
                              |
                              |_____ Special Condition of if-else :
                                        if (row == n OR col == 1 OR col == (2 * row no) - 1) {
                                             print ("*");
                                        } else {
                                             print (" ");
                                        }
                                        DONE!
*/