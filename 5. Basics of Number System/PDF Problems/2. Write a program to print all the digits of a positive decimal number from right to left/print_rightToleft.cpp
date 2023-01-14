//Write a program to print all the digits of a positive decimal\
number from right to left

#include<iostream>

int main () {

    int number;
    std::cout << "Enter a number: "; 
    std::cin >> number;

    while (number > 0) {

        int lastDigit = number % 10;

        std::cout << lastDigit << "\t" ;

        number = number / 10;

    }

    return 0;
}