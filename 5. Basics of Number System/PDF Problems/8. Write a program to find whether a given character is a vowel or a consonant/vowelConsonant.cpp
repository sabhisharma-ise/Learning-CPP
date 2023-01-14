//Write a program to find whether a given character is a vowel or a consonant

#include<iostream>

int main () {

    char character;
    std::cout << "Enter a character: ";
    std::cin >> character;

    if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || 
        character == 'u' || character == 'A' || character == 'E' || character == 'I' || 
        character == 'O' || character == 'U') {

        std::cout << "Vowel";

    } else {

        std::cout << "Consonant";
    }

    return 0;
}