#include<iostream>

int main () {

    int n; 
    std::cout << "Enter a number: ";
    std::cin >> n;

    for (int row = 1; row <= (2 * n) - 1; row++) {

        int totalSpacesInRow = (row < n) ? (n - row) : (row - n);

        int totalColInRow = (row < n) ? (2 * row - 1) : (2 * (2 * n - row) - 1);

        for (int s = 1; s <= totalSpacesInRow; s++) {

            std::cout << " ";
        }

        for (int col = 1; col <= totalColInRow; col++) {

            if (col == 1 || col == totalColInRow) {

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