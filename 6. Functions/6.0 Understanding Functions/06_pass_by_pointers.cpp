//We present the swapping of two integers again to demonstrate the Pass by Pointer technique.
/*

In C++, we can also pass parameters to function using pointer variables. 
The pass by pointer technique produces the same results as that of pass by reference.
This means that both formal and actual parameters share the same memory locations and 
the changes made in function are reflected in the calling function.
The only difference that in a pass by reference we deal with references or aliases of parameters whereas 
in a pass by pointer technique we use pointer variables to pass the parameters.
Pointer variables differ with the references in which pointer variables point to a particular variable and unlike references, 
we can change the variable that it points to.

*/

#include<iostream>
using namespace std;    //without using this, i'm getting an error! So, have to use this

void swap (int *a, int *b) {

    int temp = *a;
    *a = *b;
    *b = temp;

    return;
}

int main () {

    int a, b;
    std::cout << "Enter the two numbers to be swapped: ";
    std::cin >> a >> b;

    std::cout << "a = " << a << " ";
    std::cout << "b = " << b << "\n";

    swap (a, b);

    std::cout << "After swapping inside the Main:\n";
    std::cout << "a = " << a << " ";
    std::cout << "b = " << b;

return 0;

}