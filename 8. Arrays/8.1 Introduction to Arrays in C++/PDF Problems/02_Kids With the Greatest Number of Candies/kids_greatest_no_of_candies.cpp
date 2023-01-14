// https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/

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

    // Finding maximum element in the array
    int maxNo = arr[0];

    for (int i = 1; i < n; i++) {

        if (arr[i] > maxNo) {

            maxNo = arr[i];
        }
    }

    int extraCandies;
    std::cout << "Enter the extra candies: ";
    std::cin >> extraCandies;

    // Kids with greatest number of candies
    for (int i = 0; i < n; i++) {

        if ((arr[i] + extraCandies) >= maxNo) {

            std::cout << "true" << " ";
        }

        else {

            std::cout << "false" << " ";
        }
    }

    return 0;
}