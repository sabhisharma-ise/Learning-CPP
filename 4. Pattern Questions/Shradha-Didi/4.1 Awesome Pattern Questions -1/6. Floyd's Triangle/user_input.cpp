#include<iostream>

int main () {

    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    int count = 1;

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= i; j++) {

            std::cout << count << " ";

            count++;
        }

        std::cout << "\n";
    }

    return 0;
}