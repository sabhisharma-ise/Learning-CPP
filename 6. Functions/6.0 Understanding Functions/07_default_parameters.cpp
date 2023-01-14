//The following Example demonstrates the use of Default Parameters.
/* 

In C++, we can provide default values for function parameters. In this case, when we invoke the function, 
we don’t specify parameters. Instead, the function takes the default parameters that are provided in the prototype.

*/

#include<iostream>

int math_operation (int a, int b = 3, int c = 2) {

    return ((a * b) / c);

}

int main () {

    int a, b, c;
    std::cout << "Enter the values of a, b, and c: ";
    std::cin >> a >> b >> c;

    std::cout << "\nCall to mathoperation with 1 arg: " << math_operation (a);
    std::cout << "\nCall to mathoperation with 2 arg: " << math_operation (a, b);
    std::cout << "\nCall to mathoperation with 3 arg: " << math_operation (a, b, c);

return 0;

}

/*

As shown in the code example, we have a function ‘mathoperation’ that takes three parameters out of which 
we have provided default values for two parameters.Then in the main function, we call this function three times 
with a different argument list.
The first call is with only one argument. In this case, the other two arguments will have default values. 
The next call is with two arguments. In this case, the third argument will have a default value.
The third call is with three arguments. In this case, as we have provided all the three arguments, default values will be ignored.

*/