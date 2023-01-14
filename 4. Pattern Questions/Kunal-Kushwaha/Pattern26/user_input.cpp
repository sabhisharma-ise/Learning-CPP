/* Pattern 26

      1 1 1 1 1 1
      2 2 2 2 2
      3 3 3 3
      4 4 4
      5 5
      6

*/

#include<iostream>

int main () {

      int n;
      std::cout << "Enter a number: ";
      std::cin >> n;

      for (int row = 1; row <= n; row++) {

            for (int col = 1; col <= (n - row + 1); col++) {

                  std::cout << row << " ";
            }

            std::cout << "\n";
      }

      return 0;
}