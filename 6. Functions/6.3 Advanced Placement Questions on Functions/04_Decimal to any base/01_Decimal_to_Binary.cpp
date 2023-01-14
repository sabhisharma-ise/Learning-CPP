//Decimal to Binary

#include<iostream>

void decimalToBinary (int number) {

    int binaryNum[32];      // array to store binary number

    int i = 0;

    while(number > 0) {

        binaryNum[i] = number % 2;     // storing remainder in binary array

        number = number / 2;

        i++;
    }

    // printing binary array in reverse order

    for (int j = i - 1; j >= 0; j--) {

        std::cout << binaryNum[j];
    }

    return;
}

int main () {

    int number;     //Input Decimal number

    std::cout << "Enter the decimal number: ";
    std::cin >> number;

    decimalToBinary (number);

    return 0;

}

/*

Algorithm:  

1. Store the remainder when the number is divided by 2 in an array.
2. Divide the number by 2
3. Repeat the above two steps until the number is greater than zero.
4. Print the array in reverse order now.

For Example: 

If the decimal number is 10. 

Step 1: Remainder when 10 is divided by 2 is zero. Therefore, arr[0] = 0. 
Step 2: Divide 10 by 2. New number is 10/2 = 5. 
Step 3: Remainder when 5 is divided by 2 is 1. Therefore, arr[1] = 1. 
Step 4: Divide 5 by 2. New number is 5/2 = 2. 
Step 5: Remainder when 2 is divided by 2 is zero. Therefore, arr[2] = 0. 
Step 6: Divide 2 by 2. New number is 2/2 = 1. 
Step 7: Remainder when 1 is divided by 2 is 1. Therefore, arr[3] = 1. 
Step 8: Divide 1 by 2. New number is 1/2 = 0. 
Step 9: Since number becomes = 0. Print the array in reverse order. 

Therefore, the equivalent binary number is 1010

*/