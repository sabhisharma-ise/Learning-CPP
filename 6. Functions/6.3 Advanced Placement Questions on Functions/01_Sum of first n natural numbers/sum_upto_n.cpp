//Sum of first n natural numbers

/* We can either use 'for' loop or directly use the formula Sum = n(n + 1)/2 */

#include<iostream>

int sum_upto_n (int n) {

    int sum = 0;

    for (int i = 1; i <= n; i++) {

        sum += i;

    }

    return sum;
}

int main () {

    int n;

    std::cout << "Enter n: ";
    std::cin >> n;

    int sum = sum_upto_n (n);

    std::cout << "Sum of first " << n << " natural numbers is " << sum;

    return 0;
}