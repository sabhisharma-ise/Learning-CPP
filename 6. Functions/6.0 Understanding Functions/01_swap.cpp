//Let us take a complete programming example to demonstrate a function
//https://www.softwaretestinghelp.com/functions-in-cpp/

#include<iostream>

void swap (int a, int b) {      //here a and b are formal parameters

    b = a + b;
    a = b - a;
    b = b - a;

    std::cout << "After swapping: ";
    std::cout << "a = " << a << "  ";
    std::cout << "b = " << b;

    return;
}

int main () {    //The function that calls another function is called the “Calling function”. Hence, the main function becomes the calling function.

    int a, b;
    std::cout << "Enter the two numbers to be swapped: ";
    std::cin >> a >> b;

    std::cout << "a = " << a << "  ";
    std::cout << "b = " << b << "\n";

    swap (a, b);      //here a and b are actual parameters

    return 0;
}

//In the above example, we see that there is a function swap that takes two parameters of type int and returns nothing.
//In the function main, we read two integers and then call the swap function by passing these two integers to it.
//As we have defined this function before function main, which is a calling function, we have not declared it separately.
//In the above example of swapping numbers, the swap function is called in the main function. Hence the main function becomes the calling function.

/* Note that declaration and definition of a function can go together.
And the same is done in this program */

