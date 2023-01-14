/* Pattern 23 (Zig-Zag Pattern, Number of columns taken as user input (n) and number of rows always equal to 3)

           *      *
         *   *  *   *
       *      *      *
       
*/

#include<iostream>

int main () {

    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    for (int row = 1; row <= 3; row++) {

        for (int col = 1; col <= n; col++) {

            if (((row + col) % 4 == 0) || ((row == 2) && (col % 4 == 0))) {

                std::cout << "* ";
            }

            else {

                std::cout << "  ";
            }
        }

        std::cout << "\n";
    }

    return 0;
}