//Write a program to add 2 numbers using functions

#include<iostream>

int add (int num1, int num2) {

    int sum = num1 + num2;

    return sum;

}

int main () {

    int a, b, sum;

    std::cout << "Enter the two numbers to be added: ";
    std::cin >> a >> b;

    sum = add (a, b);

    std::cout << "The Sum is " << sum;

    return 0;

}