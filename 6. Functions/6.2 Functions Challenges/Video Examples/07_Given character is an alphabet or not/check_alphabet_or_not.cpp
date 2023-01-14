//Given character is an alphabet or not

#include<iostream>

void checkAplhabetOrNot (char c) {

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {

        std::cout << "Charater is an Alphabet";
    }

    else {

        std::cout << "Not an alphabet";
    }

    return;
}

int main () {

    char character;
    std::cout << "Enter somethin: ";
    std::cin >> character;

    checkAplhabetOrNot (character);

    return 0;
}