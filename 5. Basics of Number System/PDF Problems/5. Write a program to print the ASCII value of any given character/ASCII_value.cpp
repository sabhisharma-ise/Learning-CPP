//Write a program to print the ASCII value of any given character

#include<iostream>

int main () {

    char character;
    std::cout << "Enter a character: ";
    std::cin >> character;

    std::cout << "ASCII Value of " << character << " is " << int (character);

    return 0;
}