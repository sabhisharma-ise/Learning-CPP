/* Pattern 18 (Hollow Diamond Inscribed in a Rectangle)

      **********
      ****  ****
      ***    ***
      **      **
      *        *
      *        *
      **      **
      ***    ***
      ****  ****
      **********

*/

#include<iostream>

int main () {

      int n;
      std::cout << "Enter a number: ";
      std::cin >> n;

      //printing upper half 
      for (int row = 1; row <= n; row++) {

            int InitialStarsInRow = (n - row + 1);

            for (int col = 1; col <= InitialStarsInRow; col++) {

                  std::cout << "*";
            }

            int totalSpacesInRow = 2 * (row - 1);

            for (int s = 1; s <= totalSpacesInRow; s++) {

                  std::cout << " ";
            }

            int FinalStarsInRow = (n - row + 1);

            for (int col = 1; col <= FinalStarsInRow; col++) {

                  std::cout << "*";
            }

            std::cout << "\n";      
            
            }
            
      //printing lower half
      for (int row = n + 1; row <= 2 * n; row++) {

            int InitialStarsInRow = (row - n);

            for (int col = 1; col <= InitialStarsInRow; col++) {

                  std::cout << "*";
            }

            int totalSpacesInRow = (2 * n - row) * 2;

            for (int s = 1; s <= totalSpacesInRow; s++) {

                  std::cout << " ";
            }

            int FinalStarsInRow = (row - n);

            for (int col = 1; col <= FinalStarsInRow; col++) {

                  std::cout << "*";
            }

            std::cout << "\n";
      }

      return 0;
}