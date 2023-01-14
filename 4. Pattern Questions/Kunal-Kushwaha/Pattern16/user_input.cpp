/* Pattern 16 (Pascal Triangle)

              1
            1   1
          1   2   1
        1   3   3   1
      1   4   6   4   1

*/

#include<iostream>

int main () {

    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    for (int row = 1; row <= n; row++) {

        int coef = 1;    // coef will be initialized to 1 with every iteration

        int totalSpacesInRow = (n - row);
        for (int s = 1; s <= totalSpacesInRow; s++) {
            std::cout << "  ";
        }

        for (int col = 1; col <= row; col++) {
            std::cout << coef << "   ";
            coef = coef*(row-col)/col;
        }
        
        std::cout << "\n";
    }
    
    return 0;
}