//We'll modify our swap function to understand this concept better.
/* 

In this technique, instead of passing copies of actual parameters, we pass references to actual parameters.
References are nothing but aliases of variables or in simple words, it is another name that is given to a variable. 
Hence a variable and its reference share same memory location. We will learn references in detail in our subsequent tutorial.
In pass by reference technique, we use these references of actual parameters and as a result, 
the changes made to formal parameters in the function are reflected back to the calling function.

*/

#include<iostream>

void swap (int &a, int &b) {

    int temp = a;
    a = b;
    b = temp;

    return;   
}

int main () {

    int a, b;
    std::cout << "Enter the two numbers to be swapped: ";
    std::cin >> a >> b;

    std::cout << "a = " << a << " ";
    std::cout << "b = " << b << "\n";

    swap (a, b);

    std::cout << "After swapping inside the Main: \n";
    std::cout << "a = " << a << " ";
    std::cout << "b = " << b << "\n";

    return 0;
}

/* 

The pass by reference technique shown in the above example. We can see that the actual parameters are passed as it is. 
But we append an ‘&’ character to the formal parameters indicating that it’s a reference that we are using 
for this particular parameter.
Hence the changes made to the formal parameters in the swap function reflect in the main function and we get the swapped values.

*/