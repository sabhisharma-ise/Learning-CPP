/* 

Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the 
adjacent elements if they are in the wrong order.

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

    // Bubble Sort algorithm (for Ascending order) 

    for (int i = 0; i <= n - 1; i++) {      // 

        for (int j = 0; j <= n - i - 1; j++) {

            if (arr[j] > arr[j + 1]) {

                swap(arr[j], arr[j + 1]);
            }
        }
    }

    // Output the sorted array

    for (int i = 0; i < n; i++) {

        cout << arr[i] << " ";
    }
 
    return 0;
}