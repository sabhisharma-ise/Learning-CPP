/* Pattern5 (Half Diamond Pattern, input = n, in figure n = 5)

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

int main() {

    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    int m = (2*n)-1;

    for (int row = 1; row < n; row++) {
        for (int col = 1; col <= row; col++){
            std::cout << "* ";
        }
        
        std::cout << "\n";
    }

    for (int row = n; row <= m; row++) {
        for (int col = 1; col <= (m-row)+1; col++) {
            std::cout << "* ";
        }
        
        std::cout << "\n";
    }

    return 0;
}

/* Logic

If user input is n = 5 then we observe:
    1st row = 1 col  = 1     .
    2nd row = 2 cols = 2     .
    3rd row = 3 cols = 3     .
    4th row = 4 cols = 4     . Loop1 
    .
    .
    totalColInRow = (row no)

    5th row = 5 cols = ((2 * 5 - 1) - 5 + 1)     .
    6th row = 4 cols = ((2 * 5 - 1) - 6 + 1)     .
    7th row = 3 cols = ((2 * 5 - 1) - 7 + 1)     . 
    8th row = 2 cols = ((2 * 5 - 1) - 8 + 1)     .
    9th row = 1 col  = ((2 * 5 - 1) - 9 + 1)     . Loop2
    .
    .
    totalColInRow = ((2 * n - 1) - row no) + 1

    */