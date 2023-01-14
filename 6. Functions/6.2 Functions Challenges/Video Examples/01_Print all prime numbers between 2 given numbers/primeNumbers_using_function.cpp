//Print all prime numbers between 2 given numbers

#include<iostream>
#include<cmath>

bool isPrime (int num) {     //Function to check whether a number is prime or not

    for (int div = 2; div <= sqrt(num); div++) {

        if (num % div == 0) {

            return false;
        }
    }

    return true;
}

int main () {

    int a, b;

    std::cout << "Enter the two numbers: ";
    std::cin >> a >> b;

    for (int n = a; n <= b; n++) {

        // Skip 0 and 1 as they are
        // neither prime nor composite
        if (n == 1 || n == 0) {

            continue;
        }

        if (isPrime(n)) {

            std::cout << n << " ";
        }
    }

    return 0;
}