//Write a program with a function to swap the values of 2 given integer variables

#include<iostream>

void swap (int a, int b) {

    int temp = a;
    a = b;
    b = temp;

    std::cout << "After Swapping\n";
    std::cout << "a = " << a << " " << "b = " << b;

    return;
}

int main () {

    int a, b;

    std::cout << "Enter the two numbers to be swapped: ";
    std::cin >> a >> b;

    std::cout << "Before Swapping\n";
    std::cout << "a = " << a << " " << "b = " << b << "\n";

    swap (a, b); 

    return 0;
    
}