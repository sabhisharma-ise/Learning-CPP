//Calculate nCr

//We will make use of the fact fucntion, like we did in Problem 03

#include<iostream>

int fact (int n) {

    int factorial = 1;

    for (int i = 2; i <= n; i++) {

        factorial *= i;

    }

    return factorial;

}

int main () {

    int n, r;
    std::cout << "Enter n: ";
    std::cin >> n;

    std::cout << "Enter r: ";
    std::cin >> r;

    int nCr = fact (n) / (fact (r) * fact (n - r));

    std::cout << "C(" << n << ", " << r << ") = " << nCr; 

    return 0;

}