//Write a program to reverse a number

#include<iostream>

int main () {

    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    int reverse = 0;

    while (number > 0) {    //Repeat this process until number is reduced to zero

        int lastDigit = number % 10;    //Isolate the last digit in number

        reverse = (reverse * 10) + lastDigit;   //Append lastDigit to reverse

        number = number / 10;   //Remove last digit from number
    }

    std::cout << reverse;

    return 0;
}

/* Logic


We will remove the last digit from our number and 
append it to the end of our reversed number variable 
until our original number is gone and the reversed number is complete.

https://medium.com/@ManBearPigCode/how-to-reverse-a-number-mathematically-97c556626ec6
*/