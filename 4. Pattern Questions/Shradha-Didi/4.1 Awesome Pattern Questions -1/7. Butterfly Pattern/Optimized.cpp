#include<iostream>

int main () {

    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    for (int i = 1; i <= (2 * n); i++) {

        int InitialColInRow = (i <= n) ? i : (2 * n) - i + 1;

        int totalSpacesInRow = (i <= n) ? 2 * (n - i) : 2 * ((i - n) - 1);

        int FinalColInRow = (i <= n) ? i : (2 * n) - i + 1;

        for (int j = 1; j <= InitialColInRow; j++) {

            std::cout << "* ";
        }

        for (int s = 1; s <= totalSpacesInRow; s++) {

            std::cout << "  ";
        }

        for (int j = 1; j <= FinalColInRow; j++) {

            std::cout << "* ";
        }

        std::cout << "\n";
    }

    return 0;
}