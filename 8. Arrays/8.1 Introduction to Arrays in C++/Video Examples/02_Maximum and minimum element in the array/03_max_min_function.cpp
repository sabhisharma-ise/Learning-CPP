#include<iostream>

int max (int [], int); 

int min (int [], int);

int main () {

    int n;
    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    int arr[n];

    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {

        std::cin >> arr[i];
    }

    std::cout << "Maximum Value is \n" << max (arr, n);

    std::cout << "Minimum Value is " << min (arr, n);
}

int max (int array[], int n) {

    int largest = array[0];

    for (int i = 1; i < n; i++) {

        if (array[i] > largest) {

            largest = array[i];
        }
    }

    return largest;
}

int min (int array[], int n) {

    int small = array[0];

    for (int i = 1; i < n; i++) {

        if (array[i] < small) {

            small = array[i];
        }
    }

    return small;
}
