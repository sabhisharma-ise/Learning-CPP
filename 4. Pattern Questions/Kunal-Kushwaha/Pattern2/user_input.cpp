/*Pattern2 (Half Pyramid Pattern, input = n)

    *
    * *
    * * *
    * * * *
    * * * * *

*/

#include<iostream>

int main () {

    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= row; col++) {
            std::cout << "* ";
        }
        
        std::cout << "\n";
    }

    return 0;
}