//Write a program to check if a number is prime or not.

#include<iostream>
#include<math.h>

int main () {

    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    int flag = 0;

    for (int i = 2; i <= sqrt(n); i++) {   // optimally check upto square root of the number. 

        if (n % i == 0) {

            std::cout << n << " is not a Prime Number";
            flag = 1;
            break;
        }
    }

    if (flag == 0 && n != 1) {
        
        std::cout << n << " is a Prime Number";
    
    } else if (n == 1) {

        std::cout << n << " is not a Prime Number";
    } 


    return 0;
}