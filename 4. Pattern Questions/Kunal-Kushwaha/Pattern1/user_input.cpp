/*Pattern1  (Square Pattern, side = n)

    * * * * *
    * * * * *
    * * * * *
    * * * * *
    * * * * *

*/

#include<iostream>

int main() {

    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= n; col++) {
            std::cout << "* ";
        }
        
        std::cout << "\n";
    }

    return 0;
}