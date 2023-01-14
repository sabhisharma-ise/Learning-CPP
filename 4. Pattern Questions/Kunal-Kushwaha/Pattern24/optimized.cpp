#include<iostream>

int main () {

    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    for (int row = 1; row <= 2 * n; row++) {

        int InitialColInRow = (row <= n) ? row : ((2 * n) - row + 1);

        int totalSpacesInRow = (row <= n) ? (2 * (n - row)) : 2 * ((row - 1) - n);

        int FinalColInRow = InitialColInRow;

        for (int col = 1; col <= InitialColInRow; col++) {

            if (col == 1 || col == InitialColInRow) {

                std::cout << "*";
            }

            else {

                std::cout << " ";
            }
        }

        for (int s = 1; s <= totalSpacesInRow; s++) {

            std::cout << " ";
        }

        for (int col = 1; col <= FinalColInRow; col++) {

            if (col == 1 || col == FinalColInRow) {

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