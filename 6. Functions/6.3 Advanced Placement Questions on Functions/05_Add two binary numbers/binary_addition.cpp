//Add two binary numbers
//The approach is to convert both number to decimal, sum and them go back to binary again.

#include<iostream>
#include<cmath>

// Function to convert binary into decimal
int binaryToDecimal (int number) {

    int decimalNum = 0, i = 0, lastDigit;

    while (number > 0) {

        lastDigit = number % 10;

        number = number / 10;

        decimalNum += lastDigit * pow (2, i);

        ++i;
    }

    return decimalNum;
}

// Function to add two numbers
int add (int a, int b) {

    int sum = a + b;

    return sum;
}

// Function to convert resultant sum in decimal back to binary form
void decimalToBinary (int number) {

    int binaryNum[100];

    int i = 0;

    while (number > 0) {

        binaryNum[i] = number % 2;

        number = number / 2;

        i++;
    }

    for (int j = i - 1; j >= 0; j--) {

        std::cout << binaryNum[j];
    }

    return;
}

int main () {

    int num1, num2;     //Input 2 binary numbers

    std::cout << "Enter 2 binary numbers: ";
    std::cin >> num1 >> num2;

    int sum = add (binaryToDecimal(num1), binaryToDecimal(num2));

    std::cout << "Binary addition = ";

    decimalToBinary (sum);

    return 0;
}
