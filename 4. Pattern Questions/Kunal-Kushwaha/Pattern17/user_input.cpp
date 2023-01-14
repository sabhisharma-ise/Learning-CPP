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

    // printing upper half (from 1 to n - 1)
    for (int row = 1; row < n; row++) {
        int totalSpacesInRow = (n - row);
        for (int s = 1; s <= totalSpacesInRow; s++) {
            std::cout << " ";
        } 
            for (int col = row; col > 1; col--) {
                std::cout << col;
            }
            for (int col = 1; col <= row; col++) {
                std::cout << col;
            }
             
            std::cout << "\n";
    }

    // printing lower half (from n to 2*n-1)
    for (int row = n; row >= 1; row--) {
        int totalSpacesInRow = (n - row);
        for (int s = 1; s <= totalSpacesInRow; s++) {
            std::cout << " ";
        }
            for (int col = row; col > 1; col--) {
                std::cout << col;
            }
            for (int col = 1; col <= row; col++) {
                std::cout << col;
            }
            
            std::cout << "\n";
    }        

    return 0;
}