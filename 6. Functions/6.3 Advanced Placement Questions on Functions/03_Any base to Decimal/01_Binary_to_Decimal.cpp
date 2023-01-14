// Binary to Decimal

#include<iostream>
#include<cmath>

int binaryToDecimal (int number) {

    int decimalNum = 0, i = 0, lastDigit;

    while (number > 0) {

        lastDigit = number % 10;
        
        number = number / 10;

        decimalNum = decimalNum + lastDigit * pow (2, i);

        ++i;
    }

    return decimalNum;
}

int main () {

    int number;     //Input Binary Number

    std::cout << "Enter the binary number to be converted: ";
    std::cin >> number;

    std::cout << "The Decimal equivalent = " << binaryToDecimal (number);

    return 0;
}

/*

The idea is to extract the digits of a given binary number starting from the rightmost digit and keep a variable decimalNum. 
At the time of extracting digits from the binary number, multiply the digit with the proper base (Power of 2) and add it to the 
variable decimalNum. In the end, the variable decimalNum will store the required decimal number.

For Example: 

If the binary number is 111. 

decimalNum = 1 x (2^2) + 1 x (2^1) + 1 x (2^0) = 7

*/
