// Star Pattern with 'n' as User Input

#include<iostream>

int main () {

    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    //printing upper-half
    for (int i = 1; i <= n; i++) {

        int totalSpacesInRow = (n - i);

        for (int s = 1; s <= totalSpacesInRow; s++) {

            std::cout << "  ";
        }

        int totalColInRow = (2 * i) - 1;

        for (int j = 1; j <= totalColInRow; j++) {

            std::cout << "* ";
        }

        std::cout << "\n";
    }

    //printing lower-half
    for (int i = n; i >= 1; i--) {

        int totalSpacesInRow = (n - i);

        for (int s = 1; s <= totalSpacesInRow; s++) {

            std::cout << "  ";
        }

        int totalColInRow = (2 * i) - 1;

        for (int j = 1; j <= totalColInRow; j++) {

            std::cout << "* ";
        }

        std::cout << "\n";
    }

    return 0;
}