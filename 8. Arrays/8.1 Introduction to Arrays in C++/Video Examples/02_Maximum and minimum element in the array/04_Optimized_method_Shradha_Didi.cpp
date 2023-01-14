#include<iostream>
#include<climits>   // We will use the macros INT_MIN and INT_MAX using this header file
#include<algorithm> // For using std::max and std::min functions

int main () {

    int n;
    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    int array[n];
    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {

        std::cin >> array[i];
    }

    int maxNo = INT_MIN;    // INT_MIN is a macro that expands to the smallest (most negative) value that can be stored in a variable of type int

    int minNo = INT_MAX;    // INT_MAX is a macro that expands to the largest (most positive) value that can be stored in an int.

    for (int i = 0; i < n; i++) {

        maxNo = std::max(maxNo, array[i]);

        minNo = std::min(minNo, array[i]);
    }

    std::cout << "Maximum Value is " << maxNo << "\n";

    std::cout << "Minimum Value is " << minNo;

    return 0;

}