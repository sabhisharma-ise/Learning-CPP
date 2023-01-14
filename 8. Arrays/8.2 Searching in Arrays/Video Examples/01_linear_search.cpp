/*

In computer science, a linear search or sequential search is a method for finding an element within a list. 
It sequentially checks each element of the list until a match is found or the whole list has been searched.

The time complexity of the Linear search is O(n)

*/

#include<iostream>

void linearSearch (int arr[], int n, int key) {

    int flag = 0;
    // Linear Search 
    for (int i = 0; i < n; i++) {

        if (key == arr[i]) {

            std::cout << "The key is present in the array at index " << i;
            flag = 1;
            break;
        }
    }

    if (flag == 0) {

        std::cout << "The key is not present in the array!";
    }

}

int main () {

    int n;
    std::cout << "Enter size: ";
    std::cin >> n;

    int arr[n];
    std::cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {

        std::cin >> arr[i];
    } 

    // Key Element to be Searched in the Array
    int key;
    std::cout << "Enter the key element to be searched: ";
    std::cin >> key;

    linearSearch (arr, n, key);

    return 0;

}