/* Pattern 21 (Floyd's Triangle)

       1
       2  3
       4  5  6
       7  8  9  10
       11 12 13 14 15

*/

#include<iostream>

int main() {

    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    int i = 1;

    for (int row = 1; row <= n; row++) {

        for (int col = 1; col <= row; col++) {

            std::cout << i << " ";

            i++;
        }

        std::cout << "\n";
    }

    return 0;
}