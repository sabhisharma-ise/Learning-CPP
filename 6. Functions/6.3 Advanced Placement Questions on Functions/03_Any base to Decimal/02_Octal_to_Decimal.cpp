//Octal to Decimal

#include<iostream>
#include<cmath>

int octalToDecimal (int number) {

    int decimalNum = 0, i = 0, lastDigit;

    while (number > 0) {

        lastDigit = number % 10;

        number = number / 10;

        decimalNum = decimalNum + lastDigit * pow (8, i);

        ++i;
    }

    return decimalNum;
}

int main () {

    int number;     //Input Octal Number

    std::cout << "Enter the octal number to be converted: ";
    std::cin >> number;

    std::cout << "The Decimal Equivalent = " << octalToDecimal (number);

    return 0;
}

/*

The idea is to extract the digits of a given octal number starting from the rightmost digit and keep a variable decimalNum. 
At the time of extracting digits from the octal number, multiply the digit with the proper base (Power of 8) and add it to the 
variable decimalNum. In the end, the variable decimalNum will store the required decimal number.

For Example: 

If the octal number is 67. 

decimalNum = 6 x (8^1) + 7 x (8^0) = 55

*/