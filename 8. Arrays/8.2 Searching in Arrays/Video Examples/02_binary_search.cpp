/*

Binary Search is a searching algorithm used in a sorted array by repeatedly dividing the search interval in half. 

The idea of binary search is to use the information that the array is sorted and 
reduce the time complexity to O(Log n).

*/

#include<iostream>

int binarySearch (int arr[], int n, int key) {

    int start, mid, end;

    start = 0;

    end = n - 1;

    // Binary Search 
    while (start <= end) {

        mid = start + (end - start) / 2;    // (start + end) may overflow 

        if (key == arr[mid]) {

            return mid;
        }

        else if (key > arr[mid]) {

            start = mid + 1;
        }

        else {

            end = mid - 1;
        }
    }

    return -1;      // Function returns -1 if the element is not present in the array
}

int main () {

    int n;
    std::cout << "Enter size: ";
    std::cin >> n;

    int arr[n];                         // Array must be sorted, before performing binary search 
    std::cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {

        std::cin >> arr[i];
    } 

    // Key Element to be Searched in the Array
    int key;
    std::cout << "Enter the key element to be searched: ";
    std::cin >> key;

    int result =  binarySearch (arr, n, key);

    (result == -1) 
        ? std::cout << "Element is not present in the array"
        : std::cout << "Element is present at the index " << result;

    return 0;
}