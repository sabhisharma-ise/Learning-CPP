//Write a program to print a given number using functions

#include<iostream>

void print (int num) {

    std::cout << num << "\n";

    return;

}

int main () {

    int a;

    std::cout << "Enter the number to be printed: ";
    std::cin >> a;

    print (a);

    return 0;
}