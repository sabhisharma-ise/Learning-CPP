//Decimal to Octal

#include<iostream>

void decimalToOctal (int number) {

    int octalNum[100];

    int i = 0;

    while (number > 0) {

        octalNum[i] = number % 8;

        number = number / 8;

        i++;
    }

    for (int j = i - 1; j >= 0; j--) {

        std::cout << octalNum[j];
    }

    return;
}

int main () {

    int number;     //Input Decimal number

    std::cout << "Enter the octal number: ";
    std::cin >> number;

    decimalToOctal (number);

    return 0;
}

/*

Algorithm:  
1. Store the remainder when the number is divided by 8 in an array.
2. Divide the number by 8 now
3. Repeat the above two steps until the number is not equal to 0.
4. Print the array in reverse order now.

For Example: 

If the given decimal number is 16. 

Step 1: Remainder when 16 is divided by 8 is 0. Therefore, arr[0] = 0. 
Step 2: Divide 16 by 8. New number is 16/8 = 2. 
Step 3: Remainder, when 2 is divided by 8, is 2. Therefore, arr[1] = 2. 
Step 4: Divide 2 by 8. New number is 2/8 = 0. 
Step 5: Since number becomes = 0. 

Stop repeating steps and print the array in reverse order. Therefore, the equivalent octal number is 20

*/