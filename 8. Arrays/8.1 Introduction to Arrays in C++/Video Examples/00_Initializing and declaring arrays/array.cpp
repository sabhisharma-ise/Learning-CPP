/*

An array is a variable that can store multiple values of the same type
In C++, the size and type of arrays cannot be changed after its declaration.

*/

#include<iostream>

int main () {

    // Declaring an array
    int array[4];

    // Storing values in the array
    array[0] = 1;
    array[1] = -3;
    array[2] = 2;
    array[3] = 5;


    // Declare and initialize an array
    int a[5] = {1, 2, -4, 10, 6};

    // Another method to initialize array during declaration:
    int b[] = {1, 2, 5, 10, -6};    

    //Here, we have not mentioned the size of the array. 
    //In such cases, the compiler automatically computes the size


    // store only 3 elements in the array
    int arr[6] = {19, 10, 8};

    //Here, the array has a size of 6. However, we have initialized it with only 3 elements.
    //In such cases, the compiler assigns random values to the remaining places. Oftentimes, this random value is simply 0.
}

/*

Few Things to Remember:

For e.g. int x[6];

The array indices start with 0. Meaning x[0] is the first element stored at index 0.
If the size of an array is n, the last element is stored at index (n-1). In this example, x[5] is the last element.
Elements of an array have consecutive addresses. For example, suppose the starting address of x[0] is 2120.

Then, the address of the next element x[1] will be 2124, the address of x[2] will be 2128, and so on.

Here, the size of each element is increased by 4. This is because the size of int is 4 bytes.

C++ Array Out of Bounds:

If we declare an array of size 10, then the array will contain elements from index 0 to 9.
However, if we try to access the element at index 10 or more than 10, it will result in Undefined Behaviour.

*/