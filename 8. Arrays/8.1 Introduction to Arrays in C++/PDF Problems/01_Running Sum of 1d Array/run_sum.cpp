// https://leetcode.com/problems/running-sum-of-1d-array/

#include<iostream>

int main () {

    int n;
    std::cout << "Enter size: ";
    std::cin >> n;

    int arr[n];
    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {

        std::cin >> arr[i];
    }

    int sum = 0;

    // Running sums of array
    for (int i = 0; i < n; i++) {

        sum = sum + arr[i];

        std::cout << sum << " ";
    }

    return 0;
}