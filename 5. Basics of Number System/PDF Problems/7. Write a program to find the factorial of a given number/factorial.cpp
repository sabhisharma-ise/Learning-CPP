//Write a program to find the factorial of a given number

#include<iostream>

int main () {

    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    int fact = 1;

    for (int i = 1; i <= number; i++) {

        fact = fact * i;

    }

    std::cout << fact;

    return 0;
}