#include<iostream>

int fib (int n) {

    int prev, curr, next;

    prev = -1;
    curr = 0;
    next = 1;

    for (int i = 1; i <= n; i++) {

        if (i == 1) {

            std::cout << curr << " ";
            continue;
        }

        if (i == 2) {

            std::cout << next << " ";
            continue;
        }

        prev = curr;
        curr = next;
        next = prev + curr;

        std::cout << next << " ";

    }

    return 0;
}

int main () {

    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    fib (n);

    return 0;
}