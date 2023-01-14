#include<iostream>

int main () {

    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    for (int i = 1; i <= (2 * n); i++) {

        int totalSpacesInRow = (i <= n) ? (n - i) : (i - 1 - n);

        int totalColInRow = (i <= n) ? (2 * i) - 1 : 2 * (2 * n - i) + 1;

        for (int s = 1; s <= totalSpacesInRow; s++) {

            std::cout << "  ";
        }

        for (int j = 1; j <= totalColInRow; j++) {

            std::cout << "* ";
        }

        std::cout << "\n";
    }


    return 0;
}