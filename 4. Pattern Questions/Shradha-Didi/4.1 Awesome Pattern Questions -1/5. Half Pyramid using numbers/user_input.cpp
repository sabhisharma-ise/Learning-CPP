// Half Pyramid using numbers with 'n' as User Input

#include<iostream>

int main () {

    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= i; j++) {

            std::cout << i << " ";
        }

        std::cout << "\n";
    }

    return 0;
}