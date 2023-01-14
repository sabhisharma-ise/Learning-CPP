#include<iostream>

int main () {

    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    for (int row = 1; row <= 2 * n; row++) {

        int totalSpacesInRow = (row <= n) ? (row - 1) : (2 * n - row);

        int totalColInRow = (row <= n) ? (n - row + 1) : (row - n);

        for (int s = 1; s <= totalSpacesInRow; s++) {

            std::cout << " ";
        }

        for (int col = 1; col <= totalColInRow; col++) {

            std::cout << "* ";
        }

        std::cout << "\n";
    }

    return 0;
}