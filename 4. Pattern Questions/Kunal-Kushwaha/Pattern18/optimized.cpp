#include<iostream>

int main () {

    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    for (int row = 1; row <= 2 * n; row++) {

        int InitialStarsInRow = (row <= n) ? (n - row + 1) : (row - n);

        int totalSpacesInRow = (row <= n) ? (2 * (row - 1)) : ((2 * n - row) * 2);

        int FinalStarsInRow = (row <= n) ? (n - row + 1) : (row - n);

        for (int col = 1; col <= InitialStarsInRow; col++) {

            std::cout << "*";
        }

        for (int s = 1; s <= totalSpacesInRow; s++) {

            std::cout << " ";
        }

        for (int col = 1; col <= FinalStarsInRow; col++) {

            std::cout << "*";
        }

        std::cout << "\n";
    }

    return 0;
}