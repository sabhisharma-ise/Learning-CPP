//Factorial of a number n

#include<iostream>

int main () {

    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    int fact = 1;

    if (n == 0) {

        std::cout << 1;
    }

    else if (n < 0) {

        std::cout << "Invalid Input";
    }

    else {

        for (int i = 2; i <= n; i++) {

        fact *= i;

        }

        std::cout << fact;
    }

    return 0;
}