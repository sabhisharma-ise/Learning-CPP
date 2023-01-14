// 0-1 Pattern with 'n' as User Input

#include<iostream>

int main () {

    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= i; j++) {

            if ((i + j) % 2 == 0) {

                std::cout << "1 ";
            }

            else {

                std::cout << "0 ";
            }
        }

        std::cout << "\n";
    }

    return 0;
}