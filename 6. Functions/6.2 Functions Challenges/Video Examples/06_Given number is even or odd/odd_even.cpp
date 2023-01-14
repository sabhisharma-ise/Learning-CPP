//Given number is even or odd

#include<iostream>

void OddEven (int n) {

    if (n % 2 == 0) {

        std::cout << "Even Number";
    }

    else {

        std::cout << "Odd Number";
    }

    return;
}

int main () {

    int number;
    std::cout << "Enter the number: ";
    std::cin >> number;

    OddEven (number);

    return 0;
}