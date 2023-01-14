/* 

    1 
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5

*/

#include<iostream>

int main () {

    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    for (int row = 1; row <= n; row++) {

        for (int s = 1; s <= (n - row); s++) {

            std::cout << " ";
        }

        for (int col = 1; col <= row; col++) {

            std::cout << col << " ";
        }

        std::cout << "\n";
    }

    return 0;
}