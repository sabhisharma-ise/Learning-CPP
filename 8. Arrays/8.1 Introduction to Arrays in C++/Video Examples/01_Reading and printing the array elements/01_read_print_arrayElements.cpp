// To read the elements into the array and printing the elements

#include<iostream>

int main () {

    int n;   // Number of elements in the array
    std::cin >> n;

    int array[n];   // declaring an array of size n

    // Reading the elements from user
    std::cout << "Enter the elements\n";
    for (int i = 0; i < n; i++) {

        std::cin >> array[i];
    }

    // Printing the elements of the array
    std::cout << "The elements are: ";
    for (int i = 0; i < n; i++) {

        std::cout << array[i] << " ";
    }

    return 0;
}
