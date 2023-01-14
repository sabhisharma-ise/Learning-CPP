//We can understand this better by once again visiting the swapping of two numbers.
/* 

In pass by value technique of parameter passing, the copies of values of actual parameters are passed to the formal parameters.
Due to this, the actual and formal parameters are stored at different memory locations. 
Thus, changes made to formal parameters inside the function do not reflect outside the function.

*/

#include<iostream>

void swap (int a, int b) {  //here a and b are formal parameters

    b = a + b;
    a = b - a;
    b = b - a;

    std::cout << "After swapping inside Swap:\n";
    std::cout << "a = " << a << " ";
    std::cout << "b = " << b << "\n";

    return;
}

int main () {

    int a, b;
    std::cout << "Enter the two numbers to be swapped: ";
    std::cin >> a >> b;

    std::cout << "a = " << a << " ";
    std::cout << "b = " << b << "\n";

    swap (a, b);

    std::cout << "After swapping inside Main:\n";
    std::cout << "a = " << a << " ";
    std::cout << "b = " << b;

    return 0;

}

/* 

As seen from the output, we pass values a=3 and b=2 initially. These are the actual parameters. 
Then after swapping inside the swap function, we see that the values are actually swapped and a=2 and b=3.
However, after the function call to swap, in the main function, the values of a and b are still 3 and 2 respectively.
This is because the actual parameters passed to function where it has a copy of the variables. 
Hence although the formal parameters were exchanged in the swap function they were not reflected back.

*/



