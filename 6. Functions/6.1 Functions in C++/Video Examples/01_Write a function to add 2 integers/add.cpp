//Write a function to add 2 integers

#include<iostream>

int add (int num1, int num2) {

    int num3 = num1 + num2;

    return num3;

}

int main () {

    int a, b;
    std::cout << "Enter the two numbers to be added: ";
    std::cin >> a >> b;

    std::cout << "a = " << a << " ";
    std::cout << "b = " << b << "\n";

    int sum = add (a, b);

    std::cout << "Sum of the two numbers is " << sum;

    return 0;

}