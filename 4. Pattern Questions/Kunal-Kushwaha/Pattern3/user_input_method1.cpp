/*Pattern3 (Inverted Half Pyramid, input = n)

    * * * * *
    * * * *
    * * *
    * *
    * 
    
*/

#include<iostream>

int main () {

    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    for (int row = n; row >= 1; row--) {            //method1
        for (int col = 1; col <= row; col++) {
            std::cout << "* ";
        }
        
        std::cout << "\n";
    }

    return 0;
}