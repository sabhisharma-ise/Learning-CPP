// Maximum element present in the array

#include<iostream>

int main () {

    int n;
    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    int array[n];

    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {

        std::cin >> array[i];
    }

    int max = array[0];

    for (int i = 1; i < n; i++) {

        if (array[i] > max) {

            max = array[i];
        }
    }

    std::cout << "Maxmimum element in the array is " << max;

    return 0;
}

