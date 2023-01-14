// Use this method in competitions and coding rounds

#include<iostream>

int main () {

     int n;
     std::cout << "Enter a number: ";
     std::cin >> n;

     // for loop for printing upper half
     for (int row = 1; row <= n; row++) {
          int totalSpacesInRow = (row - 1);
          for (int s = 1; s <= totalSpacesInRow; s++) {
               std::cout << " ";
          }

          int totalColInRow = (n - row) + 1;
          for (int col = 1; col <= totalColInRow; col++) {
               std::cout << "* ";
          }
          
          std::cout << "\n";
     }
     // for loop for printing lower half
     for (int row = n; row >= 1; row--) {
          int totalSpacesInRow = (row - 1);
          for (int s = 1; s <= totalSpacesInRow; s++) {
               std::cout << " ";
          }

          int totalColInRow = (n - row) + 1;
          for (int col = 1; col <= totalColInRow; col++) {
               std::cout << "* ";
          }
          
          std::cout << "\n";
     }

     return 0;
}