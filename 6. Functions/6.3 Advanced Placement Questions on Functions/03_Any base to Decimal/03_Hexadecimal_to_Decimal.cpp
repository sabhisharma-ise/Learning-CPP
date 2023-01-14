//Hexadecimal to Decimal

#include<iostream>
#include<string>        //We've got to use String as we are working with hexadecimal (a mix of numbers & characters)
#include<cmath>

// The type string lives in the std namespace, so you will need to use std::string to refer to it.

int hexadecimalToDecimal (std::string hex) {     

    int decimalNum = 0;

    int len = hex.size();

    int base = 1;

    // Extracting characters as digits from last character

    for (int i = len - 1; i >= 0; i--) {

        // if character lies in '0'-'9', converting
        // it to integral 0-9 by subtracting 48 from
        // ASCII value
        if (hex[i] >= '0' && hex[i] <= '9') {
            decimalNum = decimalNum + (int(hex[i]) - 48) * base ;

        // incrementing base by power
            base = base * 16;
        }

        // if character lies in 'A'-'F' , converting
        // it to integral 10 - 15 by subtracting 55
        // from ASCII value
        else if (hex[i] >= 'A' && hex[i] <= 'F') {
            decimalNum = decimalNum + (int(hex[i]) - 55) * base;
 
        // incrementing base by power
            base = base * 16;
        }
    }

    return decimalNum;

}

int main () {

    std::string hex;
    
    std::cout << "Enter the hex value: ";
    std::cin >> hex;

    std::cout << "The Decimal Equivalent = " << hexadecimalToDecimal (hex);

    return 0;
}

/*

We know that hexadecimal number uses 16 symbols {0, 1, 2, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F} to represent all numbers. 
Here, (A, B, C, D, E, F) represents (10, 11, 12, 13, 14, 15). 

The idea is to extract the digits of a given hexadecimal number starting from the rightmost digit and keep a variable decimalNum. 
At the time of extracting digits from the hexadecimal number, multiply the digit with the proper base (Power of 16) and add it 
to the variable decimalNum. In the end, the variable decimalNum will store the required decimal number.

For Example: If the hexadecimal number is 1A. 
decimalNum = 1 x (16^1) + 10 x (16^0) = 26

*/