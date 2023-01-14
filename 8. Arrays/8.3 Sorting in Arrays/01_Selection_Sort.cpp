/*

Selection sort is a sorting algorithm that selects the smallest element from an unsorted list in each iteration and 
places that element at the beginning of the unsorted list.

*/

#include <iostream>
using namespace std;

int main() {

    int n;  // size of the array
    cin >> n;

    int arr[n];     // Input Array
    for (int i = 0; i < n; i++) {   
        cin >> arr[i];      // Taking array input from the user
    }

    // Selection Sort algorithm (for Ascending Order)

    for (int i = 0; i < n - 1; i++) {

        for (int j = i + 1; j < n; j++) {

            if (arr[j] < arr[i]) {

                swap(arr[j], arr[i]);       // swapping the the smallest element with the 1st element of unsorted array
            }
        }
    }

    // Output the sorted array

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }



    return 0;
}