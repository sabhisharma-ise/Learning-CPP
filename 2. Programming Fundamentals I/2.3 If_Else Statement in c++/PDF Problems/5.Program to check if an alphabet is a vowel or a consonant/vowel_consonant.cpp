//Program to check if an alphabet is a vowel or a consonant

#include<iostream>

int main () {

    char c;
    std::cout<<"Enter a character\n";
    std::cin>>c;

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        std::cout<<"Vowel\n";
    }
    else {
        std::cout<<"Consonant\n";
    }

    return 0;
}