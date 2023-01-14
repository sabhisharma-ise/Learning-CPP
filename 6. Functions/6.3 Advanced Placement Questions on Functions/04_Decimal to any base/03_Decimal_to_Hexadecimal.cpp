//Decimal to Hexadecimal

#include<iostream>

void decimalToHex (int number) {

    char hexaDeciNum[100];      // char array to store hexadecimal number

    int i = 0;

    while (number > 0) {

        int temp = 0;       // temporary variable to store remainder

        temp = number % 16;      // storing remainder in temp variable.

        // check if temp < 10
        if (temp < 10) {

            hexaDeciNum[i] = temp + 48;

            i++;
        }

        else {

            hexaDeciNum[i] = temp + 55;

            i++;
        }
 
        number = number / 16;
    }
    
    // printing hexadecimal number array in reverse order

    for (int j = i - 1; j >= 0; j--) {

        std::cout << hexaDeciNum[j];

    }

    return;

}

int main()
{
    int number;     //Input Decimal number

    std::cout << "Enter the decimal number: ";
    std::cin >> number;
 
    decimalToHex(number);
 
    return 0;
}