/* Pattern 20 (taking no of columns always one less than the number of rows)

       ****
       *  *
       *  *
       *  *
       ****

*/

#include<iostream>

int main () {

    int n; 
    std::cout << "Enter a number: ";
    std::cin >> n;

    for (int row = 1; row <= n; row++) {

        for (int col = 1; col <= (n - 1); col++) {

            if (row == 1 || row == n || col == 1 || col == (n - 1)) {

                std::cout << "*";
            }

            else {

                std::cout << " ";
            }
        }

        std::cout << "\n";
    }

    return 0;
}