/* Printing the below pattern first

0 0 0 0 0 0 0 0 0 
0 1 1 1 1 1 1 1 0
0 1 2 2 2 2 2 1 0 
0 1 2 3 3 3 2 1 0
0 1 2 3 4 3 2 1 0
0 1 2 3 3 3 2 1 0 
0 1 2 2 2 2 2 1 0
0 1 1 1 1 1 1 1 0
0 0 0 0 0 0 0 0 0

*/

#include<iostream>
#include <algorithm>

int main () {

    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    for (int row = 1; row <= (2 * n) + 1; row++) {

        for (int col = 1; col <= (2 * n) + 1; col++) {

            int numToBePrinted = std::min({(col - 1), (row - 1), ((2 * n + 1) - col), ((2 * n + 1) - row)});

            std::cout << numToBePrinted << " ";
        }

        std::cout << "\n";
    }

    return 0;
}

/* Logic

A number is equal to the value of the minimum of the distances of that number from each wall (left, right, up, and down)
i.e. numToBePrinted = min(left, right, up, down)

*/