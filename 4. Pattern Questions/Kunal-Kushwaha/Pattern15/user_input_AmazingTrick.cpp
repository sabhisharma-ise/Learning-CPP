#include<iostream>

int main () {

    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    //printing upper half (from 1 to n - 1)
    for (int row = 1; row < n; row++) {
        int totalSpacesInRow = (n - row);
        for (int s = 1; s <= totalSpacesInRow; s++) {
            std::cout << " ";
        }

        int totalColInRow = (2 * row) - 1;
        for (int col = 1; col <= totalColInRow; col++) {
            if (col == 1 || col == totalColInRow) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }
        
        std::cout << "\n";
    }
    //printing lower half (from n to 2 * n - 1)
    for (int row = n; row >= 1; row--) {
        int totalSpacesInRow = (n -row);
        for (int s = 1; s <= totalSpacesInRow; s++) {
            std::cout << " ";
        }

        int totalColInRow = (2 * row) - 1;
        for (int col = 1; col <= totalColInRow; col++) {
            if (col == 1 || col == totalColInRow) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }
        
        std::cout << "\n";
    }

    return 0;
}