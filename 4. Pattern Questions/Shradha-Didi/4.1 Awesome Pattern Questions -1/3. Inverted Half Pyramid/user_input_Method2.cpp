// Inverted Half Pattern with 'n' (Taking Input from the User)

#include<iostream>

int main () {

    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    for (int i = 1; i <= n; i++) {

        int totalColInRow = (n - i + 1);

        for (int j = 1; j <= totalColInRow; j++) {

            std::cout << "* ";

        }

        std::cout << "\n";
    }


    return 0;
}