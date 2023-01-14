/* 
    For Optimized Code:
    m = 2 * n - 1;
    totalColInRow = (m - row) + 1;
    And, Use Ternary Operator ( ? : ) to get the result using only one for loop

*/

#include<iostream>

int main() {

    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    int m = (2*n)-1;

    for (int row = 1; row <= m; row++) {
        int totalColsInRow = row >= n ? (m-row)+1 : row;
        for (int col = 1; col <= totalColsInRow; col++) {
            std::cout << "* ";
        } std::cout << "\n";
    }

    return 0;
}