#include<iostream>

int fact (int n) {

    int factorial = 1;

    for (int i = 2; i <= n; i++) {

        factorial *= i;

    }

    return factorial;

}

int main () {

    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    int factorial = fact (n);

    std::cout << factorial;

    return 0;

}