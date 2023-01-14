//Write a program to check if a number is Armstrong number

#include<iostream>

#include<cmath>   //The <cmath> header file declares a set of functions to perform mathematical operations

int main () {

    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    int OriginalNum = number;

    int sum = 0;

    while (number > 0) {

        int lastDigit = number % 10;

        sum += round(pow(lastDigit, 3));    

        number = number / 10;
    }

    if (sum == OriginalNum) {

        std::cout << "Armstrong number";
    
    } else {

        std::cout << "Not an Armstrong number";
        
    }

    /* the return type of pow() is float and 
    it returns numbers like 152.9999 but 0.9999 is truncated as we are storing it as an integer,
    round() will round 152.9999 to 153 and you will get the correct output */

    return 0;
}