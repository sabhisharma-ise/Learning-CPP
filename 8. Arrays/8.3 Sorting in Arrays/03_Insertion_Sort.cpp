/*

In Insertion Sort, values from the unsorted part are picked and 
placed at the correct position in the sorted part.

*/

#include <iostream>
using namespace std;

int main () {

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // My Implementation of Insertion sort!
    for (int i = 1; i < n; i++) {

        for (int j = 0; j < i; j++) {

            if (arr[j] > arr[i]) {

                swap(arr[j], arr[i]);
            }
        }
    }

    // Actual Implementation of Insertion sort
    for (int i = 0; i < n; i++) {

        int current = arr[i];
        int j = i - 1;
         
        while (arr[j] > current && j >= 0) {

            arr[j + 1] = current;
            j--;
        }
        arr[j + 1] = current;
    }

    // Output the sorted array

    for (int i = 0; i < n; i++) {

        cout << arr[i] << " ";
    }

    return 0;
}