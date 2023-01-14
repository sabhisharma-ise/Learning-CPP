//Let’s take an Example of adding two numbers to demonstrate the return types

#include<iostream>

int sum (int a, int b) {

    return (a + b);
}

int main () {

    int a, b, result;
    std::cout << "Enter the two numbers to be added: ";
    std::cin >> a >> b;

    result = sum (a, b);

    std::cout << "Sum of the two numbers is " << result;

    return 0;
}

/* 

In the above example, we have a function sum that takes two integer parameters and returns an integer type. 
In the main function, we read two integers from the console input and pass it to the sum function. 
As the return type is an integer, we have a result variable on the LHS and RHS is a function call.

When a function is executed, the expression (a+b) returned by the function sum is assigned to the result variable. 
This shows how the return value of the function is used.

*/