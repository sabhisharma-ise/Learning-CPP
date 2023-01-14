/* 
The Function which calls another Function is called Calling Function and 
function which is called by another Function is call Called Function
*/

#include<iostream>

void swap (int, int);   //Function Declaration

int main () {           //Calling Function is 'main'

    int a, b;
    std::cout << "Enter the two numbers to be swapped: ";
    std::cin >> a >> b;

    std::cout << "a = " << a << " ";
    std::cout << "b = " << b << "\n";

    swap (a, b);    //Called Function is 'swap'

    return 0;
}

void swap (int a, int b) {  //Funcion Definition

    b = a + b;
    a = b - a;
    b = b - a;

    std::cout << "After swapping: ";
    std::cout << "a = " << a << " ";
    std::cout << "b = " << b;

    return;
}

