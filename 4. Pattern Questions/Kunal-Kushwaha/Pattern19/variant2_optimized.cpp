#include<iostream>

int main () {

    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    for (int row = 1; row <= 2 * n; row++) {

        int InitialColInRow = (row <= n) ? row : ((2 * n) - row + 1);

        int totalSpacesInRow = (row <= n) ? 2 * (n - row) : 2 * ((row - 1) - n);

        int FinalColInRow = (row <= n) ? row : ((2 * n) - row + 1);

        for (int col = 1; col <= InitialColInRow; col++) {

            std::cout << "*";
        }

        for (int s = 1; s <= totalSpacesInRow; s++) {

            std::cout << " ";
        }

        for (int col = 1; col <= FinalColInRow; col++) {

            std::cout << "*";
        }

        std::cout << "\n";
    }

    return 0;
}