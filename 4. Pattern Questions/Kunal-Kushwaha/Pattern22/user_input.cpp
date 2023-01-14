/* Pattern 22 (0-1 pattern)

       1
       0 1
       1 0 1
       0 1 0 1
       1 0 1 0 1

*/

#include<iostream>

int main () {

    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    for (int row = 1; row <= n; row++) {

        for (int col = 1; col <= row; col++) {

            if ((row + col) % 2 == 0) {

                std::cout << "1 ";
            }

            else {

                std::cout << "0 ";
            }
        }

        std::cout << "\n";
    }
 



    return 0;
}