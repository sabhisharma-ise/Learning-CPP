/* Solid Butterfly Pattern (second variant)

       *        *
       **      **
       ***    ***
       ****  ****
       **********
       **********
       ****  ****
       ***    ***
       **      **
       *        *
       
*/

#include<iostream>

int main() {

    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    //printing upper half
    for (int row = 1; row <= n; row++) {

        int InitialColInRow = row;

        for (int col = 1; col <= InitialColInRow; col++) {

            std::cout << "*";
        }

        int totalSpacesInRow = (2 * (n - row));

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
    for (int row = n + 1; row <= 2 * n; row++) {

        int InitialColInRow = (2 * n - row + 1);

        for (int col = 1; col <= InitialColInRow; col++) {

            std::cout << "*";
        }

        int totalSpacesInRow = 2 * ((row - 1) - n);

        for (int s = 1; s <= totalSpacesInRow; s++) {

            std::cout << " ";
        }

        int FinalColInRow = (2 * n - row + 1);

        for (int col = 1; col <= FinalColInRow; col++) {

            std::cout << "*";
        }

        std::cout << "\n";
    }

    return 0;
}