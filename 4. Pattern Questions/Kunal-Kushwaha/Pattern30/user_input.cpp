/* Pattern30

            1
          2 1 2
        3 2 1 2 3
      4 3 2 1 2 3 4
    5 4 3 2 1 2 3 4 5

*/

#include<iostream>

int main () {

    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    for (int row = 1; row <= n; row++) {

        int totalSpacesInRow = (n - row);

        for (int s = 1; s <= totalSpacesInRow; s++) {

            std::cout << "  ";
        }

        for (int col = row; col > 1; col--) {

            std::cout << col << " ";
        }

        for (int col = 1; col <= row; col++) {
            
            std::cout << col << " ";
        }

        std::cout << "\n";
    }

    return 0;
}