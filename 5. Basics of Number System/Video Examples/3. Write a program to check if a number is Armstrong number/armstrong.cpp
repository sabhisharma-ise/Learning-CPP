//Write a program to check if a number is Armstrong number

#include<iostream>
#include<math.h>

int main () {

    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    int OriginalNum = number; //this declaration should be done after taking user-input only

    int sum = 0;

    while (number > 0) {

        int lastDigit = number % 10;

        sum += pow(lastDigit, 3);

        number = number / 10;
    }

    if (sum == OriginalNum) {

        std::cout << OriginalNum << " is an Armstrong Number";

    } else {

        std::cout << OriginalNum << " is not an Armstrong Number";
    }

    return 0;
}

/*

Armstrong numbers are numbers which have their sum of cube of individual
digits equal to the number itself.
E.g 153 = 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153.

*/