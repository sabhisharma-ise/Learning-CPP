// Inverted Pattern using numbers with 'n' as User Input

#include<iostream>

int main () {

    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    for (int i = 1; i <= n; i++) {

        int totalColInRow = (n - i + 1);

        for (int j = 1; j <= totalColInRow; j++) {

            std::cout << j << " ";
        }

        std::cout << "\n";
    }

    return 0;
}