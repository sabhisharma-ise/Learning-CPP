/* Pattern 17

         1
        212
       32123
      4321234
       32123
        212
         1

*/

#include<iostream>

int main () {

    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    for (int row = 1; row <= (2 * n) - 1; row++) {

        int c = row < n ? row : (2 * n) - row;

        for (int s = 1; s <= n - c; s++) {
            std::cout << " ";
        } 
            for (int col = c; col > 1; col--) {
                std::cout << col;
            }
            for (int col = 1; col <= c; col++) {
                std::cout << col;
            }
             
            std::cout << "\n";
    }
    

    return 0;
}