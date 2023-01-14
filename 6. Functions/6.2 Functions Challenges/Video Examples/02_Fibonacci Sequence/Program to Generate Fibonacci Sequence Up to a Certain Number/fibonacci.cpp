//Program to Generate Fibonacci Sequence Up to a Certain Number

#include<iostream>

int main () {

    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    int prev, curr, next;

    prev = -1;
    curr = 0; 
    next = 1;

    std::cout << curr << " ";    //displays the first term which is always 0 

    while (next <= n) {

        std::cout << next << " ";

        prev = curr;
        curr = next;
        next = prev + curr;

    }

    return 0;
}