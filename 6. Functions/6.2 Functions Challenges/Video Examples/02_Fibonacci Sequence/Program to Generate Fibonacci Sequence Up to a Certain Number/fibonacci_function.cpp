#include<iostream>

int fib (int n) {

    int prev, curr, next;

    prev = -1;
    curr = 0;
    next = 1;

    std::cout << curr << " ";

    while (next <= n) {

        std::cout << next << " ";

        prev = curr;
        curr = next;
        next = prev + curr;

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