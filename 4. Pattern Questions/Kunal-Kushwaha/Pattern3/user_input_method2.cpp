/* 
   If user input is n = 5 then we observe:
    1st row = 5 cols = (5 - 1) + 1
    2nd row = 4 cols = (5 - 2) + 1
    3rd row = 3 cols = (5 - 3) + 1
    4nd row = 2 cols = (5 - 4) + 1
    5th row = 1 col  = (5 - 5) + 1
    .
    .
    totalColInRow = (n - row no) + 1
*/

#include<iostream>

int main () {

    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    for (int row = 1; row <= n; row++) {                    //method2 
        for (int col = 1; col <= (n - row + 1); col++) {
            std::cout << "* ";
        }
        
        std::cout << "\n";
    }

    return 0;
}