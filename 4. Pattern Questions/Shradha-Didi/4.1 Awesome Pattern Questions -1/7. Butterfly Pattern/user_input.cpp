// Butterfly Pattern with 'n' (Taking Input from the User)

#include<iostream>

int main () {

    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    //printing upper-half
    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= i; j++) {

            std::cout << "* ";
        }

        for (int s = 1; s <= 2 * (n - i); s++) {

            std::cout << "  ";
        }

        for (int j = 1; j <= i; j++) {

            std::cout << "* ";
        }

        std::cout << "\n";
    }

    //printing lower-half
    for (int i = n; i >= 1; i--) {

        for (int j = 1; j <= i; j++) {

            std::cout << "* ";
        }

        for (int s = 1; s <= 2 * (n - i); s++) {

            std::cout << "  ";
        }

        for (int j = 1; j <= i; j++) {

            std::cout << "* ";
        }

        std::cout << "\n";
    }

    return 0;
}