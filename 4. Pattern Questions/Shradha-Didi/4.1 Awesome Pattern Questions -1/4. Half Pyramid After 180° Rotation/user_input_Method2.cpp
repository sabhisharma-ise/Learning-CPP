// Half Pattern After 180° Rotation with 'n' (Taking Input from the User)

#include<iostream>

int main () {

    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    for (int i = 1; i <= n; i++) {

        int totalSpacesInRow = (n - i);

        for (int s = 1; s <= totalSpacesInRow; s++) {

            std::cout << "  ";
        }

        int totalColInRow = i;

        for (int j = 1; j <= totalColInRow; j++) {

            std::cout << "* ";
        }

        std::cout << "\n";
    }

    return 0;
}