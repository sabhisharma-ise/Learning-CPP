//Let us see a code Example that uses const references.

/*

We can also pass constant parameters to functions using the ‘const’ keyword. When a parameter or reference is const, 
it cannot be changed inside the function. Note that we cannot pass a const parameter to a non-const formal parameter. 
But we can pass const and non-const parameter to a const formal parameter.

*/

#include<iostream>

int addition (const int &a, const int &b) {
    
    return (a + b);

}

int main () {

    int a, b, result;
    std::cout << "Enter the two numbers to be added: ";
    std::cin >> a >> b;

    std::cout << "a = " << a << " ";
    std::cout << "b = " << b << "\n";

    result = addition (a, b);
    std::cout << "Result of addition: " << result;

return 0;

}

/* 

In the above program, we have const formal parameters. Note that the actual parameters are ordinary non-const variables which 
we have successfully passed. As formal parameters are const, we cannot modify them inside the function. So we just perform the 
addition operation and return the value. If we try to modify the values of a or b inside the function, then the compiler will 
issue an error.

*/