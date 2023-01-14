/* Pattern 19 (Solid Butterfly Pattern)

       *        *
       **      **
       ***    ***
       ****  ****
       **********
       ****  ****
       ***    ***
       **      **
       *        *
       
*/

#include<iostream>

int main () {

    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    //printing upper half
    for (int row = 1; row < n; row++) {

        int InitialColInRow = row;

        for (int col = 1; col <= InitialColInRow; col++) {

            std::cout << "*";
        }

        int totalSpacesInRow = 2 * (n - row);

        for (int s = 1; s <= totalSpacesInRow; s++) {

            std::cout << " ";
        }

        int FinalColInRow = row;

        for (int col = 1; col <= FinalColInRow; col++) {

            std::cout << "*";
        }

        std::cout << "\n";
    }

    //printing lower half
    for (int row = n; row <= (2 * n) - 1; row++) {

        int InitialColInRow = (2 * n - row);

        for (int col = 1; col <= InitialColInRow; col++) {

            std::cout << "*";
        }

        int totalSpacesInRow = 2 * (row - n);

        for (int s = 1; s <= totalSpacesInRow; s++) {

            std::cout << " ";
        }

        int FinalColInRow = (2 * n - row);

        for (int col = 1; col <= FinalColInRow; col++) {

            std::cout << "*";
        }

        std::cout << "\n";
    }

    return 0;
}